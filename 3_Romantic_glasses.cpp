// here using unordered_set instead of set gave TLE at TC-11
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      arr.push_back(x);
      
    }
   int odd=0,even=0;
   int f=0;
    set<int>st;
    st.insert(0);
    for(int i=0;i<n;i++){
      if(i%2==0){
        odd+=arr[i];
      }else{
        even+=arr[i];
      }
      if(st.find((odd-even))!=st.end()){
        f=1;
        break;
      }
      st.insert(odd-even);
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;

}
