/*
cout <<setprecision(numeric_limits<double>::digits10 + 1);
cout << ans << endl;
*/
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define ff     first
#define ss     second
#define pb     push_back
#define ppb    pop_back
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int N = 1e6 + 5;
 
    vector<int> pos(N);
 
    for(ll int k=2;;k++)
    {
        ll int tot = 1 + k + k*1ll*k;
        ll int x = k*k;
 
        if(tot > N)     break;
 
        while(tot < N && tot>0)
        {
            pos[tot] = 1;
            tot += x*k;
            x *= k;
        }
    }
 
    _test
    {
        int n;
        cin>>n;
 
        if(pos[n])      cout<<"YES\n";
        else            cout<<"NO\n";
    }
}