#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    map<pair<int,int>,int>mp;
    for(auto a:arr){
        mp[{a%x,a%y}]++;      // syntax is important to know
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int p=arr[i];
        ans+=mp[{(x-p%x)%x,p%y}];
        if(p%x==((x-p%x)%x))ans--;     // for non self counting;
        // ans/=2;
    }
    cout<<ans/2<<endl;  // as we have counted twice
  }
  return 0;

}