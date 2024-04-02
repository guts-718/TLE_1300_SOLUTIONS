#include<bits/stdc++.h>
using namespace std;
 
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
  //  freopen("input.txt","r",stdin);
  //  freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    if (n == 1)
    {
        cout<<4<<endl;
        return (0);
    }
    if (n%2==0)
        cout<<(n/2+1)*(n/2+1)<<endl;
    else
        cout<<2*(n/2+1)*(n/2+2)<<endl;
	return 0;
}