#include <iostream>
using namespace std;
int main()
{
  int i, n, sum = 0;
  cout << "Enter Number of students : ";
  cin >> n;

  int students[n];
  for (i = 0; i < n; i++)
  {
    cout << "Enter marks for student " << i + 1 << " :";
    cin >> students[i];
    sum = sum + students[i];
  }

  cout << "Total marks : " << sum << endl;

  float avg = (float)sum / n;
  cout << "Average :" << avg << endl;

  // max and min finding

  int max = students[0];

  for (i = 1; i < n; i++)
  {
    if (max < students[i])
    {
      max = students[i];
    }
  }

  int min = students[0];
  for (i = 1; i < n; i++)
  {
    if (min > students[i])
    {
      min = students[i];
    }
  }

  cout << "Max :" << max << endl;
  cout << "Min :" << min << endl;
}