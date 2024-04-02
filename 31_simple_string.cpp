// even times repeat pr --> abbbba --> {i,i+2,i+4....} pr replacemet is needed
// if odd times repeat then --> xaaaaay --> {i+1,i+3,i+5,...} pr replacement is needed
// beware of i and j

#include <bits/stdc++.h>
using namespace std;
int32_t main(){
   string s;
   cin>>s;
   unordered_map<int,int>mp;
   int n=s.length();
   for(int i=0;i<n;i++){
     int j=i;
     int cnt=1;
     while(i+1<n && s[i]==s[i+1]){
       cnt++;
       i++;
     }
     if(cnt>1)mp[j]=cnt;
   }
   for(auto it=mp.begin();it!=mp.end();it++){
     if(it->second%2==1){
       int i=it->first;
       char c=s[i];
       char x;
       // use brain
       if(c=='a')x='b';
       else x=char(s[i]-1);
       for(int j=i+1;j<i+it->second;j+=2){
         s[j]=x;
       }
     }else{
       int i=it->first;
       char c=s[i];
       char d=s[i-1];
       char x;
       // trick
       for(int i=0;i<26;i++){
         if(i+'a'!=c && i+'a'!=d){
           x=char(i+'a');
           break;
         }
       }
       for(int j=i;j<i+it->second;j+=2){
         s[j]=x;
       }
     }
   }
   cout<<s<<endl;
   
  return 0;

}
