class Solution {
public:
    int maxVowels(string s, int k) {
        int count1=0;
        int count2=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count1++;
            }
            if(i-k>=0){
                if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
                    count1--;
                }
            }
            if(count1 > count2){
                count2=count1;
            }
        }
        return count2;
    }
};
