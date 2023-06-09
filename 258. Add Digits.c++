class Solution {
public:
    int addDigits(int num) {
        int rem=0;
        while(num>9){
            int sum=0;
            while(num){
                rem=num%10;
                sum=sum+rem;
                num=num/10;
            }
            num=sum;
        }
        return num;
    }
};

***********************************************************************************************************************************************************************
***********************************************************************************************************************************************************************

class Solution {
public:
    int addDigits(int num) {
        if(num==0){
            return 0;
        }
        if(num%9==0){
            return 9;
        }
        return num%9;
    }
};
