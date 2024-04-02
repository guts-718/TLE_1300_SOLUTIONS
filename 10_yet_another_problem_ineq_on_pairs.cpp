#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define int long long

const int MOD = 1e9 + 7;
const int INF = 1e18;
const int N = 1e6 + 10;

void burn() {
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int c = 0;
    vector<int> v;
    for (int i = 1; i <= n; ++i) {
        if (a[i] >= i) continue;
        c += (int)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
        v.push_back(i);
    }
    cout << c << '\n';
}

int int32_main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //freopen("", "r", stdin);
    //freopen("", "w", stdout);

    int t = 1;
    cin >> t;
    while(t--)
        burn();

    return 0;
}
