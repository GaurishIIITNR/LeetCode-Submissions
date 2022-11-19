// https://leetcode.com/problems/minimum-sum-of-squared-difference

class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int>v;
        for(int i=0;i<nums1.size();i++)v.push_back(abs(nums1[i]-nums2[i]));
        
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
                // for(auto x:v)cout<<x<<" ";
        int r=k1+k2;
        
        int tmp,tmi;
        for(int i=1;i<v.size();i++){
            if(i*(v[i-1]-v[i])<=r){
                tmp=v[i];
                r-=(i*(v[i-1]-v[i]));
                tmi=i;
            }
             else {
                 tmp-=r/i;
                 r=r%i;
                 break;
             }
        }
        long long int res=0;
        for(int i=0;i<v.size();i++){
            if(i<=tmi && r>0)
               { res+=(tmp-1)*(tmp-1);r--;}
            else if(i<=tmi)res+=tmp*tmp;
            else res+=(v[i]*v[i]);
           
        }
        return res;
        
    }
};