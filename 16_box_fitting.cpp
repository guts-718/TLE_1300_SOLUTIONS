/*
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
 int t;
 cin>>t;
 while(t--){
   int n,w;
   cin>>n>>w;
   unordered_map<int,int>mp;
   
   for(int i=0;i<n;i++){
     int c;
     cin>>c;
     mp[c]++;
   }
   int maxi=0;
   int cnt=0;
   map<int,int,greater<int>>mp1;
   for(auto it=mp.begin();it!=mp.end();it++){
       cnt+=it->first;
       mp[it->first]--;
       if(mp[it->first]==0)mp.erase(it->first);
       else mp1[it->second]=it->first;
       maxi=max(maxi,it->second);
   }
  w-=cnt;
  int h=1;
  auto it=mp1.begin();
  while(w>=0 && it!=mp1.end()){
    int cnt=0;
     while(w>0 && cnt<it->first && w>=it->second){
      cnt++;
       w-=it->second;
     }
    if((w==0 && cnt>0)||w>0)h=max((it->first-cnt)+1,h);
    else break;
    it++;
     
  }
  cout<<h<<endl;
 
   
 }
 return 0;
}

*/






#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define int long long
//typedef pair<int, int> pii;
#define F first
#define S second
#define PB push_back
#define MP make_pair
const ll mod = 1e9 + 7, N = 2e6 + 7, M = 2e6 + 7, INF = INT_MAX / 10;
ll powe(ll x, ll y)
{
    x = x % mod, y = y % (mod - 1);
    ll ans = 1;
    while (y > 0)
    {
        if (y & 1)
        {
            ans = (1ll * x * ans) % mod;
        }
        y >>= 1;
        x = (1ll * x * x) % mod;
    }
    return ans;
}
 
void anmol()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void solve()
{
 
int n;
cin>>n;
 
int w;
cin>>w;
 
int a[n];
 
 
multiset<int> st;
 
for(int i =0; i<n; i++){
    cin>>a[i];
    //v[a[i]]++;
}
 
 
 
sort(a,a+n);
reverse(a,a+n);
int ans =0;
 
for(int i =0; i<n; i++){
 
    if(st.lower_bound(a[i])==st.end()){
        st.insert(w);
        ans++;
 
    }
 
    auto it = st.lower_bound(a[i]);
    st.insert(*it-a[i]);
    st.erase(st.find(*it));
}
cout<<ans<<endl;
 
}
 
int32_t main()
{
    int z =1;
    anmol();
    int t = 1;
    cin >> t;
    while (t--)
    {   //cout<<"Case #"<<z<<": ";
        //z++;
        solve();
    }
    return 0;
}