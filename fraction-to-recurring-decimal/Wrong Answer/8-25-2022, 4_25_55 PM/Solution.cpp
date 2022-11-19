// https://leetcode.com/problems/fraction-to-recurring-decimal

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        int r=numerator/denominator;
        int rem=numerator%denominator;
        map<int,bool>mp;
        string x="";
        bool flag=0;
        while(rem>0){
            rem*=10;
            if(mp[rem]){
                flag=1;
                break;
            }else  mp[rem]=1;
            x+=to_string((rem/denominator));
            rem%=denominator;
           
        }
        if(flag)x="("+x+")";
        if(x.length()==0)x=to_string(r);
        else
        x=to_string(r)+"."+x;
        return x;
    }
};