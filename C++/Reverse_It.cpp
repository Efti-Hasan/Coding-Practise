#include<bits/stdc++.h>
using namespace std;

class Student 
{
public:
    string name;
    int cls;
    char section;
    int id;
    void read() 
    {
        cin >> name >> cls >> section >> id;
    }

    void print()
    {
        cout << name << " " << cls << " " << section << " " << id << endl;
    }
};

int main() 
{
    int N;
    cin >> N;
    cin.ignore();

    Student students[100];

    for (int i = 0; i < N; ++i) 
    {
        students[i].read();
    }

    for (int i = 0; i < N / 2; ++i) 
    {
        swap(students[i].section, students[N-1 -i].section);
    }

    for (int i = 0; i < N; ++i) 
    {
        students[i].print();
    }

    return 0;
}
