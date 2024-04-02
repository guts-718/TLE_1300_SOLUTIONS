// mistakes to avoid: dont declare map globally as we have cases in codeforces and pass map into the function with reference
#include <bits/stdc++.h>
using namespace std;


void primeFactors(int n,unordered_map<int,int>&mp) 
{ 
    // Print the number of 2s that divide n 
    if(n==1)return; // as count of 1 will create a bad case
    while (n % 2 == 0) 
    { 
        mp[2]++;; 
        n = n/2; 
    } 
 
    // n must be odd at this point. So we can skip 
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        // While i divides n, print i and divide n 
        while (n % i == 0) 
        { 
            mp[i]++;
            n = n/i; 
        } 
    } 
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2 
    if (n > 2) mp[n]++;
} 
 
int32_t main(){
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      vector<int>arr;
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
      }
     
      for(int i=0;i<n;i++){
        primeFactors(arr[i],mp);
      }
    
      int f=1;
      for(auto it=mp.begin();it!=mp.end();it++){
        if((it->second)%n!=0){
          f=0;
          break;
        }
      }
      if(f)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    
  }
  return 0;

}
