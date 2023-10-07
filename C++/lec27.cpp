#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character :";
    cin >> ch;
    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "Vowel :" << ch;
        break;

        // case 'e':
        //    cout <<"Vowel :" <<ch;
        //     break;

        //  case 'i':
        //    cout <<"Vowel :" <<ch;
        //     break;

        //  case 'o':
        //    cout <<"Vowel :" <<ch;
        //     break;

        //  case 'u':
        //    cout <<"Vowel :" <<ch;
        //     break;

    default:
        cout << "Consonant :" << ch;
    }
}