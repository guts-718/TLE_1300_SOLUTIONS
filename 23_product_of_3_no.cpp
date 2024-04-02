/* Jai Mata Di */
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);  cout.tie(0);
  int t, n;
  cin>>t;
  while(t>0){
    t--;
    cin>>n;
    int a = -1, b = -1, c = -1, done = 0;
    for(int i= 2; i<=sqrt(n); i++){
      if(n%i==0){
          // i is not prime
          for(int j=2; j<= sqrt(i); j++){
            if(i%j==0 && i/j != i){
              a = n/i; b = j; c = i/j;
              if(a!=b && a!=c && b!=c){
                done = 1;
                break;
              }
            }
          }
          if(done){
            break;
          }
        if(i!= n/i){
          for(int j=2; j<= sqrt(n/i); j++){
            if((n/i)%j==0 && (n/i)/j != i){
              a = i; b = j; c = (n/i)/j;
              if(a!=b && a!=c && b!=c){
                done = 1;
                break;
              }
            }
          }
          if(done){
            break;
          }
        }
      }
    }
    if(done){
      cout<<"YES\n";
      cout<<a<<' '<<b<<' '<<c<<'\n';
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}









// #include <bits/stdc++.h>
// using namespace std;
// void p_f(int n,unordered_map<int,int>&mp){
//   if(n==1)return;
//    while(n%2==0){
//      mp[2]++;
//      n/=2;
//    }
//    for(int i=3;i<sqrt(n);i+=2){
//      while(n%i==0){
//        mp[i]++;
//        n/=i;
//      }
//    }
//    if(n>2)mp[n]++;
// }
// int32_t main(){
//    int t;
//    cin>>t;
//    while(t--){
//      int n;
//      cin>>n;
//      int a,b,c;
//      int f=1;
//      unordered_map<int,int>mp;
//      p_f(n,mp);
//      if(mp.size()==1){
//        auto it=mp.begin();
//        if(it->second<6){
//          f=0;
//        }else{
//          int x=it->first;
//          a=x;
//          b=x*x;
//          c=pow(x,it->second-3);
         
//        }
//      }else if(mp.size()==2){
//        auto it=mp.begin();
//        int x=it->first;
//        int cx=it->second;
//        it++;
//        int y=it->first;
//        int cy=it->second;
//        if(cx+cy<4){
//          f=0;
//        }else{
//          a=x;
//          b=y;
//          //c=(cx-1)*x+(cy-1)*y;
//          c=pow(x,cx-1)*pow(y,cy-1);
//        }
//      }else{
//         auto it=mp.begin();
//        int x=it->first;
//        int cx=it->second;
//        it++;
//        int y=it->first;
//        int cy=it->second;
//        it++;
//        a=pow(x,cx);
//        b=pow(y,cy);
//        c=1;
//        for(;it!=mp.end();it++){
//            c*=pow(it->first,it->second);

//        }
        
//      }
//      if(!f)cout<<"NO"<<endl;
//      else{
//        cout<<"YES"<<endl;
//        cout<<a<<" "<<b<<" "<<c<<endl;
//      }
     
//    }
//    return 0;
// }
