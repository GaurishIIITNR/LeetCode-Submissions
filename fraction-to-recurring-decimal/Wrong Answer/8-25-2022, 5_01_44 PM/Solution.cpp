// https://leetcode.com/problems/fraction-to-recurring-decimal

class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        int r=abs(numerator)/abs(denominator);
        long long rem=abs(numerator)%abs(denominator);
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
            x+=to_string((rem/abs(denominator)));
            rem%=abs(denominator);
           cnt++;
        }
        string res="";
        if(flag){
            for(int i=0;i<x.length();i++){
                if(i==flag-1)
                    res+="(";
                res+=x[i];
            }res+=")";
        }string p="";
        if((numerator>0&&denominator<0 )||(numerator<0&&denominator>0 ) &&r==0)
            p="-";
        p+=to_string(r);
        if(x.length()==0)x=p;
        else if(flag)
        x=p+"."+res;
        else x=p+"."+x;
        return x;
    }
};