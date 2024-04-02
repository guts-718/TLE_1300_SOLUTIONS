// simple two pointers just keep on expanding the range
// if one lies between a query then {1 can be present in all the indices within that query}

#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
 int t;
 cin>>t;
 while(t--){
   int n,x,m;
   cin>>n>>x>>m;
   int l,r;
   l=x,r=x;
   while(m--){
     int a,b;
     cin>>a>>b;
     if((b>=l && a<=r) || (a<=l && b>=r)){
     if(a<l)l=a;
     if(b>r)r=b;
     }
   }
   cout<<r-l+1<<endl;
 }
 return 0;
}