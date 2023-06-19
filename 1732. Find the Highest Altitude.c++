class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int height=0;
        int altitude=0;
        for(int i=0; i<gain.size(); i++){
            height+=gain[i];
            altitude=max(altitude, height);
        }
        return altitude;
    }
};
