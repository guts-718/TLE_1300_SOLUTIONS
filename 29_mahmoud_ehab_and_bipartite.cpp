// since in question tree was given so we didn't need to check for whether it was bipartite or not..as it will always be
// by observation it can be easily said that we can connect all the (whites with black and vice versa) but there aready are (n-1) edges before
// so answer will be (b*w)-(n-1) 
// first i tried to create vectors to store the whites and black index seperately but it was not needed( i thought i would need
// 2 nested loops (black and white) and will need to check whether the current edge is present before or not)
// we didn't need to maintain the color array either.. as later after dfs traversal we dont require it
// so we simply need int variables (white, black, color and parent) --> not there vectors
// 

#include <bits/stdc++.h>
#define int long long
using namespace std;
void dfs(int node,vector<int>adj[],int par,int& w,int& b,int col,vector<int>&vis){
  vis[node]=1;
  
  //col[node]=col; 
  //vis[node]=1;
  if(col==0)w++;
  else b++;
  
  for(auto it:adj[node]){
    if(vis[it]==-1 && par!=it){
      //par[it]=node;
      dfs(it,adj,node,w,b,!col,vis);
    }
  }
}
int32_t main() {
  int t=1;
  //cin>>t;
	while(t--){
     int n;
     cin>>n;
     vector<int>adj[n];
     for(int i=0;i<n-1;i++){
       int u,v;
       cin>>u>>v;
       
       u--;  // making it 0 indexed
       v--;
       adj[u].push_back(v);  // undirected
       adj[v].push_back(u);
       //st.insert({u,b})    // no need
     }
    // vector<int>par(n,0);
    // for (int i = 0; i < n; ++i)par[i] = i;
     //par[0]=0;
     int b=0,w=0;
     vector<int>vis(n,-1);
     for(int i=0;i<n;i++){
       if(vis[i]==-1){
         dfs(i,adj,i,w,b,0,vis);
       }
     }
     cout<<b*w-(n-1)<<endl;
     
     
     
     
	}
	return 0;

}