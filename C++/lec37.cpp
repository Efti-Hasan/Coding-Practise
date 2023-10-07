#include <iostream>
using namespace std;
int main()
{
    int row, col, A[2][3];
    // input 2D array
    cout << "Enter the value for matrix :" <<endl;
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << "A[" << row << "]["<<col<<"] =";
            cin >> A[row][col];
        }
    }
    // output 2D array
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 3; col++)
        {
            cout << A[row][col] <<" ";
        }
        cout <<endl;
    }
}