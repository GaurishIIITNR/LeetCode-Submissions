// https://leetcode.com/problems/distinct-subsequences

class Solution {
public:
    int cnt=0;
    void f(string s,string a,string t,int low){
        
        // Base Case
        if(a==t){
            cnt++;
            return;
        }
        if(a.length()>t.length()||s.length()==low){
            return;
        }
        
        // Recursive Step
        f(s,a,t,low+1);
        f(s,a+s[low],t,low+1);
        return;
    }
    int numDistinct(string s, string t) {
        // int cnt=0;
        f(s,"",t,0);  
        return cnt;
    }
};