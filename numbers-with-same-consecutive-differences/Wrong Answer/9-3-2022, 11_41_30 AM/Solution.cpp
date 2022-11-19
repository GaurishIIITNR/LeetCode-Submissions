// https://leetcode.com/problems/numbers-with-same-consecutive-differences

class Solution {
public:
    vector<int>v;
    void f(int n, int k,int s,int curr,int cnt){
         if(cnt==n){ 
            v.push_back(s);
             return;
        }
        if(curr-k<0 && curr+k>9)return;
        if(curr-k>=0){
            f(n,k,(s*10)+curr-k,curr-k,cnt+1);
        }
        if(curr+k<=9){
            // s+=to_string(curr+k);
           f(n,k,(s*10)+curr+k,curr+k,cnt+1);
        }
        
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        for(int i=1;i<=9;i++){
            f(n,k,i,i,1);  
        }return v;
    }
};