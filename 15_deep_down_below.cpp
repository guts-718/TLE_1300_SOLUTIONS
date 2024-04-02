// dont know why this code does not work...
// 2nd one is working

#include<bits/stdc++.h>
#define int long long
using namespace std;
bool compare(vector<int>a,vector<int>b){
  if(a.back()!=b.back())return a.back()<b.back();
  else return a.size()>=b.size();
}
int32_t main(){
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<vector<int>>arr(n);
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int maxi=-1e6;
        for(int j=0;j<x;j++){
          int y;
          cin>>y;
          arr[i].push_back(y);
          maxi=max(maxi,y+1-j);
          
        }
        arr[i].push_back(maxi);
      }
    sort(arr.begin(),arr.end(),compare);
    int ans=arr[0].back();
    int sol=ans;
    ans+=arr[0].size()-1;
    int s=arr[0].size();
    for(int i=1;i<n;i++){
      if(ans>=arr[i].back())ans+=arr[i].size()-1;
      else{
        ans=arr[i].back()+arr[i].size()-1+s;
        sol=arr[i].back();
      } 
      s+=arr[i].size();
    }  cout<<sol<<endl;
  }

    
  
  
  return 0;
}























#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;
ll gcd(ll a, ll b)
{
if (b == 0)
return a;
return gcd(b, a % b);
}
void solve()
{
    ll n;cin>>n;
    vector<pair<ll,ll>> power(n);
    for(int i=0;i<n;i++){
        ll x;cin>>x;vector<ll> p(x);
        ll mxp=-1;;
        for(int j=0;j<x;j++) {
            cin>>p[j];
           mxp=max(mxp,p[j]-j+1);
        }
        power[i]={mxp,x};
    }
    sort(power.begin(),power.end());
    ll l=power[0].first,r=power[n-1].first;
    ll ans=1e12;
    while(l<=r){
        ll mid=(l+r)/2;ll curr=mid;
        bool ok=1;
        for(int i=0;i<n;i++){
            if(curr>=power[i].first){
                curr+=power[i].second;
            }
            else{
                ok=0;break;
            }
        }
        if(ok){
            ans=mid;r=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t=1;cin>>t;
while(t--)
{
solve();
}
return 0;
}