#include <iostream>
using namespace std;
void addition(int a, int b)
{
    int result = a + b;
    cout << "addition =" << result << endl;
}
void substruction(int a, int b)

{
    int result = a - b;
    cout << "Substruction =" << result << endl;
}

void mulltiplication(int a, int b)
{
    int result = a * b;
    cout << "Mulltiplication =" << result << endl;
}

void division(int a, int b)
{
    float result = (float)a / b;
    cout << "Division=" << result << endl;
}

int main()
{
    addition(10, 20);
    substruction(10, 20);
    mulltiplication(10, 20);
    division(10, 20);
    cout << "All funcation are called :)";
    return (0);
}