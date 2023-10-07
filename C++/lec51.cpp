#include<iostream>
using namespace std;
 int x =10; //global value
void display()
{
    cout <<"Inside the display function x = " <<x <<endl;

}
int main()
{   
    int x =50; //local value
    cout <<"Inside the main function x = " <<::x <<endl;
    display();
    getchar();
}
