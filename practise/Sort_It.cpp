#include<bits/stdc++.h>
using namespace std;

class Student 
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    Student() {}

    void read() 
    {
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
    }

    int total_marks() 
    {
        return math_marks + eng_marks;
    }
    void print()  
    {
        cout << name << " " << cls << " " << section << " " << id << " " << math_marks << " " << eng_marks << endl;
    }
};

bool compare_students( Student& a,  Student& b) 
{
   
    if (a.total_marks() != b.total_marks()) 
    {
        return a.total_marks() > b.total_marks(); 
    }
    return a.id < b.id; 
}

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
   
    sort(students, students + N, compare_students);

    for (int i = 0; i < N; ++i) 
    {
        students[i].print();
    }

    return 0;
}
