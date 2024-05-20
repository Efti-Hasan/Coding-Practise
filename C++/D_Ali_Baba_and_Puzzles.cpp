#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int d;
    cin >> d;

    if (a + (b * c) == d) 
    {
        cout << "YES";
    } 
    else if ((a - b) + c == d) 
    {
        cout << "YES";
    } 
    else if ((a * b) + c == d) 
    {
        cout << "YES";
    } 
    else if ((a + b) * c == d) 
    {
        cout << "YES";
    } 
    else 
    {
        cout << "NO";
    }

    return 0;
}
