class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<vector<int>, int>mp;
        for(auto it:grid){
             mp[it]++;
        }
        int count=0;
        for(int i=0; i<n; i++){
            vector<int>ans;
            for(int j=0; j<n; j++){
                ans.push_back(grid[j][i]);
            }
            count=count+mp[ans];
        }
        return count;
    }
};
