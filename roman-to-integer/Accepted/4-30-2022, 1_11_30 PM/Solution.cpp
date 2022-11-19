// https://leetcode.com/problems/roman-to-integer

class Solution {
public:
    int romanToInt(string s) {
        vector<int>v(26,0);
         v['I'-'A']=1;
         v['V'-'A']=5;
         v['X'-'A']=10;
         v['L'-'A']=50;
         v['C'-'A']=100;
         v['D'-'A']=500;
         v['M'-'A']=1000;
        int sm=0;
        for(int i=0;i<s.length();i++){
          
                if(i!=s.length()-1&&v[s[i]-'A']<v[s[i+1]-'A'])
                    sm-=v[s[i]-'A'];
                else
                    sm+= v[s[i]-'A'];
            }
        return sm;
    }
};