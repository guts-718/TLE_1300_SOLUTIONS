#include <bits/stdc++.h>  // This includes all standard libraries
#define ll long long       // Defining "ll" as "long long" to save time
#define pb push_back      // Defines "pb" as "push_back" for vector operations
#define ff first         // Defines "ff" as "first" for pairs
#define ss second       // Defines "ss" as "second" for pairs
#define mp make_pair   // Defines "mp" as "make_pair" for creating pairs
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);  // Optimizes input-output operations
using namespace std;  // Using standard namespace

int main()
{   
    ios;  // Activating optimization for input-output
    
    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);  // Redirects input from a file
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);  // Redirects output to a file
    #endif
    
    ll t;  // Declaring a variable "t" of type long long
    cin >> t;  // Taking input for number of test cases
    ll mod = 998244353;  // Defining a constant "mod"
    
    while (t--) {  // Looping through each test case
        ll n, extras = 0, min_ops = 0, factorial = 1, res = 1;  // Declaring variables for the current test case
        string s;  // Declaring a string variable "s"
        cin >> s;  // Taking input for the string
        vector<ll> v;  // Declaring a vector of type long long
        
        n = (ll)s.size();  // Assigning the size of the string to "n"
        
        // Looping through the string to calculate minimum operations required
        for (ll i = 0; i < (n - 1); i++) {
            if (s[i] == s[i + 1]) {
                extras++;
            } else {
                min_ops += extras;
                extras++;
                res = (res % mod * extras % mod) % mod;
                extras = 0;
            }
        }
        
        if (extras != 0) {
            min_ops += extras;
            extras++;
            res = (res % mod * extras % mod) % mod;
        }
        
        // Calculating factorial of min_ops
        for (ll i = 1; i <= min_ops; i++) {
            factorial = ((factorial % mod) * (i % mod)) % mod;
        }
        
        // Calculating the final result
        res = ((res % mod) * (factorial % mod)) % mod;
        
        // Outputting the result for the current test case
        cout << min_ops << " " << res << endl;
    }
    
    return 0;  // Exiting the program
}
