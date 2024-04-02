/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
int ans;
string s;
vector<int> root;
vector<bool>check;
vector<vector<int>> graph;

pair<int,int> dfs(int root){
    // if(check[root]){
    //     return {0,0};
    // }
    check[root]=true;
    int b=0,w=0;
    if(s[root-1]=='B'){
        b++;
    }
    else{
        w++;
    }
    for(int i=0;i<graph[root].size();i++){
        if(check[graph[root][i]]==false){
            pair<int,int> temp=dfs(graph[root][i]);
            b+=temp.first;
            w+=temp.second;
        }
    }
    if(b==w){
        ans++;
    }
    return {b,w};
}

int solve(){
    cin>>n;
    root.resize(n+1,0);
    graph.resize(n+1,vector<int>());
    check.resize(n+1,false);
    root[1]=1;
    for(int i=2;i<=n;i++){
        cin>>root[i];
        graph[root[i]].push_back(i);
        graph[i].push_back(root[i]);
    }
    cin>>s;
    ans=0;
    dfs(1);
    cout<<ans<<endl;
    s.clear();
    ans=0;
    n=0;
    graph.clear();
    root.clear();
    check.clear();
    return 0;
}
int32_t main(){
    int TestCase=1;
    cin>>TestCase;
    while(TestCase--){
        solve();
    }
}
