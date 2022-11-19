// https://leetcode.com/problems/reverse-integer

class Solution {
public:
    int reverse(int x) {
        long long int y=0;int res=1;
        if(x<0)res=-1;
        x=abs(x);
        while(x>0){
            int rem=x%10;
            y=10*y+rem;
            x/=10;
        } y=y*res;
        if(y<((-1)*pow(2,31))||y>pow(2,31)-1)return 0;
        return y;
    }
};