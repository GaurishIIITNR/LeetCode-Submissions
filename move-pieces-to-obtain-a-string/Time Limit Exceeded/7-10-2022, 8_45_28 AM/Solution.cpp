// https://leetcode.com/problems/move-pieces-to-obtain-a-string

class Solution {
public:
    bool canChange(string s, string t) {
    
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')
            {
                for(int j=i;j>0;j--){
                    if(s[j]=='L'&&s[j-1]=='_')swap(s[j],s[j-1]);
                    else break;
                }
                 if(s==t)return 1;
            }
        }
        
         for(int i=s.length()-2;i>=0;i--){
            if(s[i]=='R')
            {
                for(int j=i;j<s.length()-1;j++){
                    if(s[j]=='R'&&s[j+1]=='_')swap(s[j],s[j+1]);
                    else break;
                }
                if(s==t)return 1;
            }
        }
        return 0;
                
        //  for(int i=0;i<t.length();i++){
        //     if(t[i]=='L')
        //     {
        //         for(int j=i;j>0;j--){
        //             if(t[j]=='L'&&t[j-1]=='_')swap(t[j],t[j-1]);
        //             else break;
        //         }
        //     }
        // }
        //   for(int i=t.length()-2;i>=0;i--){
        //     if(t[i]=='R')
        //     {
        //         for(int j=i;j<t.length()-1;j++){
        //             if(t[j]=='R'&&t[j+1]=='_')swap(t[j],t[j+1]);
        //             else break;
        //         }
        //     }
        // }
        if(s==t)return 1;
        return 0;
       // cout<<s<<" "<<t;
        return 1;
    }
    
};