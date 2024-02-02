#include <iostream>

using namespace std;
int main()
{
    int A[10][20], B[10][20], C[10][20] ,row, col, sum;

    cout << "Enter row :";
    cin >> row;

    cout << "Enter Column :";
    cin >> col;

    cout << "For Matrix A :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "A[" << i + 1 << "]"
                 << "[" << j + 1 << "]"
                 << " = ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    cout << "For Matrix B :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "B[" << i + 1 << "]"
                 << "[" << j + 1 << "]"
                 << " = ";
            cin >> B[i][j];
        }
        cout << endl;
    }
    cout << "Matrix A :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Matrix B :" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    // for sum of matrix A+B

    cout << "Matrix A+B:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << endl;
    }

    getchar();
}