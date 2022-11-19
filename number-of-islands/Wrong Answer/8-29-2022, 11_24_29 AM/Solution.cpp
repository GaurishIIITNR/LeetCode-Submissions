// https://leetcode.com/problems/number-of-islands

class Solution {
public:
    int numIslands(vector<vector<char>>& v) {
        int n=v.size(),m=v[0].size();
        vector<vector<bool>>vi(n,vector<bool>(m,0));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vi[i][j] && v[i][j]=='1'){
                    vector<pair<int,int>>q;
                    q.push_back({i,j});
                    vi[i][j]=1;
                    while(q.size()){
                        int ii=q[0].first;
                        int jj=q[0].second;
                        // vi[ii][jj]=1;
                        q.erase(q.begin());
                        if(ii+1<n&&v[ii+1][jj]=='1' &&vi[ii+1][jj]==0){
                            q.push_back({ii+1,jj});
                            vi[ii+1][jj]=1;
                        }if(jj+1<m&&v[ii][jj+1]=='1' &&  vi[ii][jj+1]==0){
                            q.push_back({ii,jj+1});
                            vi[ii][jj+1]=1;
                        }
                    }
                    cnt++;
                }
            }
        }
        return cnt;
    }
};