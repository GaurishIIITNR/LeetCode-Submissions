// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    int cnt=0;
    void f(string s,string a,string t){
        // Base Case
        // if(s.length()<4)return;
        if(a==t){
            cnt++;
            return;
        }
        if(a.length()>t.length()||s.length()==0){
            return;
        }
        // Recursive Step
        char tmp=s[0];
        s.erase(s.begin());
        f(s,a,t);
        a=a+tmp;
        // cout<<a<<" ";
        f(s,a,t);
        return;
    }
    int numDistinct(string s, string t) {
        // int cnt=0;
        f(s,"",t);  
        return cnt;
    }
};