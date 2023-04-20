/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        long long ans=0;
        if(root==NULL){
            return 0;
        }
        queue<pair<TreeNode*, int>>q;
        q.push({root, 0});
        while(!q.empty()){
            int q_size=q.size();
            long long lastIndex=q.back().second, firstIndex=q.front().second;
            for(int i=0; i<q_size; i++){
                TreeNode* temp;
                temp=q.front().first;
                long long index=q.front().second;
                q.pop();
                if(temp->left!=NULL){
                    q.push({temp->left, index*2+1});
                }
                if(temp->right!=NULL){
                    q.push({temp->right, index*2+2});
                }
            }
            ans = max(ans, lastIndex - firstIndex + 1);
        }
        return ans;
    }
};
