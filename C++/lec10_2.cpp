#include<iostream>
using namespace std;
int main()
{
   double celcius,fahrenheit;
   cout <<"Enter Temp in Fahrenheit :";
   cin >> fahrenheit;
   celcius=(fahrenheit - 32) / 1.8;
   cout <<"Equv Celcius Temp is :" <<celcius <<endl;
}