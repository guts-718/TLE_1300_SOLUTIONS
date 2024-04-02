// for 32 bit int --> max we do is (1<<30)
// size of bit array = 31 no need of 32 when dealing with positive numbers 
// this is a greedy problem as the contribution of 2^j is greater than the summation of contribution of all (i<j) {sum(2^i)}
// ie 100000 > 11111
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    //counting the set bits of numbers
    vector<int>bits(31,0);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      for(int i=30;i>=0;i--){
        if(x&(1<<i)){
          bits[30-i]++;
        }
      }
    }
    // calculating the no of bits needed / for calculating the number of operations(k)
      for(int i=0;i<31;i++){
        bits[i]=n-bits[i];
      }
      //ORing since this is a greedy problem
      int ans=0;
      for(int i=0;i<31;i++){
        if(bits[i]<=k){
          k-=bits[i];
          ans|=(1<<(30-i));
        }
      }
      cout<<ans<<endl;
    }
  
  return 0;
}