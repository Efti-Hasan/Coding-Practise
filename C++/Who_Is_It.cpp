#include <bits/stdc++.h>
using namespace std;

struct Student 
{
    int id;
    string name;
    char section;
    int totalMarks;
};

int main() 
{
    int T;
    cin >> T;

    while (T--)
     {
        Student students[3];


        for (int i = 0; i < 3; i++) 
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].totalMarks;
        }


        int highestMarks = -1, highestID = 4;
        for (int i = 0; i < 3; i++) 
        {
            if (students[i].totalMarks > highestMarks || (students[i].totalMarks == highestMarks && students[i].id < highestID)) 
            {
                highestMarks = students[i].totalMarks;
                highestID = students[i].id;
            }
        }
        for (int i = 0; i < 3; i++) 
        {
            if (students[i].totalMarks == highestMarks && students[i].id == highestID) 
            {
                cout << students[i].id << " " << students[i].name << " " << students[i].section << " " << students[i].totalMarks << endl;
                break;
            }
        }
    }

    return 0;
}
