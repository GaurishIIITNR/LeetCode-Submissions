// https://leetcode.com/problems/fraction-to-recurring-decimal

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        int r=numerator/denominator;
        numerator=abs(numerator);
        denominator=abs(denominator);
        int rem=numerator%denominator;
        map<int,int>mp;
        string x="";
        int flag=0;
        int cnt=1;
        while(rem>0){
            rem*=10;
            if(mp[rem]){
                flag=mp[rem];
                break;
            }else  mp[rem]=cnt;
            x+=to_string((rem/denominator));
            rem%=denominator;
           cnt++;
        }
        string res="";
        if(flag){
            for(int i=0;i<x.length();i++){
                if(i==flag-1)
                    res+="(";
                res+=x[i];
            }res+=")";
        }
        if(x.length()==0)x=to_string(r);
        else if(flag)
        x=to_string(r)+"."+res;
        else x=to_string(r)+"."+x;
        return x;
    }
};