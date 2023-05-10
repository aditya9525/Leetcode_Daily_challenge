class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=n-1;
        int total=n*n;
        int count=1;
        while(count<=total){
            for(int i=left; i<=right && count<=total; i++){
                ans[top][i]=count;
                count++;
            }
            top++;
            for(int i=top; i<=bottom && count<=total; i++){
                ans[i][right]=count;
                count++;
            }
            right--;

            for(int i=right; i>=left && count<=total; i--){
                ans[bottom][i]=count;
                count++;
            }
            bottom--;
            for(int i=bottom; i>=top && count<=total; i--){
                ans[i][left]=count;
                count++;
            }
            left++;
        }
        return ans;
    }
};
