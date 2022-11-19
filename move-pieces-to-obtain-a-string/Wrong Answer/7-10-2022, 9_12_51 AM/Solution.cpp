// https://leetcode.com/problems/move-pieces-to-obtain-a-string

class Solution {
public:
    bool canChange(string s, string t) {
        int li=-1,ri=s.length(),lri=-1,rli=s.length();
        for(int i=0;i<s.length();i++){
            if(t[i]=='L')lri=i;
            if(s[i]=='L')li=i;
            if(s[i]=='R')ri=i;
            if(ri>=lri && ri<li)
                    return 0;
        }
        for(int i=s.length()-1;i>=0;i--){
            if(t[i]=='R')rli=i;
            if(s[i]=='L')li=i;
            if(s[i]=='R')ri=i;
            if(ri<li && li<=rli)
                    return 0;
        }
        if(ri>rli)return 0;
        if(li<lri)return 0;
 
        return 1;
    }
    
};