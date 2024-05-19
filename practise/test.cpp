#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mn = min(min(a, b), min(c, d));
    int mx = max(max(a, b), max(c, d));
    cout << mn << " " << mx << endl;
    return 0;
}
