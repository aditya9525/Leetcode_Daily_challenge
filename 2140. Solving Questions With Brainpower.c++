class Solution {
public:
    long long find(vector<vector<int>>&question,int n,int ind,vector<long long>&dp){
        if(ind>=n)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        long long choose=0;
        choose=max(question[ind][0]+find(question,n,ind+question[ind][1]+1,dp),find(question,n,ind+1,dp));
        return dp[ind] = choose;
    }
    long long mostPoints(vector<vector<int>>& questions) {

        int n=questions.size();
        vector<long long>dp(n,-1);
        return find(questions,n,0,dp);

    }
};
