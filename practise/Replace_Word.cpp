#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    cin.ignore(); 

    for (int i = 0; i < T; ++i) 
    {
        string line;
        getline(cin, line); 

        stringstream ss(line);
        string S, X;
        ss >> S >> X; 

        int pos = 0;
        while ((pos = S.find(X, pos)) != string::npos) 
        {
            S.replace(pos, X.length(), "#");
            pos += 1; 
        }

        cout << S << endl;
    }

    return 0;
}