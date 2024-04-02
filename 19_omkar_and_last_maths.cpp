// wrong solution

// a+b = n 
// LCM * GCD = a*b
// LCM = (a*b)/GCD
// for minimum LCD we need maximum GCD;
// a+b = gcd(x+y) = n
// x+y = n/gcd(x+y)
// gcd(x+y) should be the largest possible divisor of n (but not = n) as else one of a / b will bwcome =0 (but a,b > 0)

#include<bits/stdc++.h>
#define int long long
using namespace std;

int largest_divisor(int n){
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      return n/i;
    }
  }
  return 1;
}


int32_t main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int large_divisor=largest_divisor(n);
    int x=n/large_divisor;
    if(large_divisor==1){
      cout<<1<<" "<<n-1<<endl;
    }else{
    int a=x/2;
    int b=(x+1)/2;
    cout<<large_divisor*a<<" "<<large_divisor*b<<endl;
    }
  }
  return 0;
}