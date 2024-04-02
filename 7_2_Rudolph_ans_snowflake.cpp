/*
cout <<setprecision(numeric_limits<double>::digits10 + 1);
cout << ans << endl;
*/


#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    auto check = [](ll int x, ll int y)
    {
        ll int tot=0, p=1;
 
        for(ll int i=1; i<=y+1; i++)
        {
            tot += p;
 
            if(log10(p)+log10(x) > 18)      break;
 
            p *= x;
        }
 
        return tot;
    };
 
    int t;
    cin>>t;
    while(t--)
    {
        ll int n;
        cin>>n;
 
        bool f = 0;
 
        for(int r=2; r<=60 && !f; r++)
        {
            ll int tmp = pow(n,((long double)1/r));
 
            if(tmp>=2 && check(tmp, r)==n)
                f=1;
        }
 
        if(f)           cout<<"YES\n";
        else            cout<<"NO\n";
    }
}