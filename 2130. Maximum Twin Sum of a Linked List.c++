/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>ll;
        int result=0;
        ListNode* curr=head;
        while(curr!=NULL){
            ll.push_back(curr->val);
            curr=curr->next;
        }
        int n=ll.size();
        for(int i=0; i<n; i++){
            int secIndex=n-1-i;
            int ans=ll[i]+ll[secIndex];
            if(result < ans){
                result=ans;
            }
        }
        return result;

    }
};
