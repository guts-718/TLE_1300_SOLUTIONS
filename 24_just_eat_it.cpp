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
    int sum=0,sum1=0,maxi=-1e10;
    int sum2=0,maxi2=-1e10;
    for(int i=0;i<n;i++){
      int x=arr[i];
      sum+=x;
      // skipping both start and end element
      if(i>0 && i<n-1){
        sum1+=x;
        maxi=max(maxi,sum1);
        if(sum1<0)sum1=0;
      }
    }
    //skipping last element
    int a=0,sa=-1e10;
    int b=0,sb=-1e10;
    for(int i=0;i<n-1;i++){
      a+=arr[i];
      sa=max(sa,a);
      if(a<0)break;
    }

    //skipping first element
    for(int i=n-1;i>0;i--){
      b+=arr[i];
      sb=max(sb,b);
      if(b<0)break;
    }
    // maximum of the three possible cases
    maxi=max(maxi,max(sa,sb));
    if(maxi<sum)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}