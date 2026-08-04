class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse=0;
        long long temp=x;
        if(x>=0 && x<=9)return true;
        while(temp>0){
            int digit=temp%10;
            reverse=reverse*10+digit;
            temp/=10;
        }
        return (x==reverse);
    }
};