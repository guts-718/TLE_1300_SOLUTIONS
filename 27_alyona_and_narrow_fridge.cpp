// n= 1e3 so we could do (n^2)logn
// here we are consequently sorting the same array but it is not causing any problem due to the question's condition
// sorting in the reverse order was probably the key here
// the question was greedy as taking from the smallest always leads to the best result.. as we just care about the count moreover
// we dont know that we cant place a block on the top of another
// just thinkof array [1,2,2,3] playing (1,2) at the bottom always helper as ..
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define vint vector<int>



int main() {
    //FAST_IO();

    int n, h;
    cin >> n >> h;

    vint bottles;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        bottles.push_back(a);
    }

    int k = 0;
    for (int i = 0; i < n; i++) {
        sort(bottles.begin(), bottles.begin() + i + 1, greater<int>());

        int height = 0;
        for (int j = 0; j <= i; j += 2) {
            height += bottles[j];
        }

        if (height > h)
            break;

        k = i + 1;
    }

    cout << k << endl;

    return 0;
}
