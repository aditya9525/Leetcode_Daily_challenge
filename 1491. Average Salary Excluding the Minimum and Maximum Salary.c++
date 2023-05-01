class Solution {
public:
    double average(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        double n=arr.size();
        double sum=0;
        for(int i=1; i<n-1; i++){
            sum+=arr[i];
        }
        return sum/(n-2);
    }
};
