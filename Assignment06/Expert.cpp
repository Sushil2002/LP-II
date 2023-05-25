// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     cout << "WELCOME to Company" << endl;
//     string name, gender, domain;
//     cout << "lets begin employee evaluation" << endl;
//     cout << "enter employee name" << endl;
//     cin >> name;
//     cout << "enter employee gender(M/F)" << endl;
//     cin >> gender;
//     cout << "enter employee domain" << endl;
//     cin >> domain;
//     int n1, n2, n3, n4, n5, n6, n7, n8, n9;
//     cout << "how many hours he worked" << endl;
//     cin >> n1;
//     cout << "how many presentation he worked" << endl;
//     cin >> n2;
//     cout << "how many employees he worked" << endl;
//     cin >> n3;
//     cout << "how many salary he worked" << endl;
//     cin >> n4;
//     cout << "how many age" << endl;
//     cin >> n5;
//     cout << "how many year experience" << endl;
//     cin >> n6;
//     cout << "how many hours he rating" << endl;
//     cin >> n7;

//     int rating = 0;
//     if (n1 >= 8)
//     {
//         rating++;
//     }
//     if (n2 > 20)
//     {
//         rating++;
//     }
//     if (n3 > 3)
//     {
//         rating++;
//     }
//     if (n5 > 40)
//     {
//         rating += 2;
//     }
//     if (n5 > 30)
//     {
//         rating++;
//     }
//     if (n4 > 100000)
//     {
//         rating++;
//     }
//     if (n6 > 5)
//     {
//         rating++;
//     }
//     if (n7 > 5)
//     {
//         rating++;
//     }
//     cout << "the total score of employee is" << rating << endl;
//     cout << "lets evaluate him/her" << endl;
//     if (gender == "male")
//     {
//         if (domain == "web")
//         {
//             if (rating > 5)
//             {
//                 cout << "congrating on salary incrementation now ur salary is" << n4 * 1.1 << endl;
//             }
//             else if (rating < 5 and rating > 3)
//             {
//                 cout << "no salary increment" << endl;
//             }
//             else
//             {
//                 cout << "you need to work hard" << endl;
//             }
//         }

//     }
// }

#include <bits/stdc++.h>
#include <iostream>
typedef long long ll;
using namespace std;
int main()
{
    cout << "\nWelcome to Dieases Prediction - ";
    cout << "\n1.What is your Name - ";
    string name;
    getline(cin, name);
    string symtoms[] = {"Fever", "chills", "Cough", "Shortness of breath", "Fatigue", "Muscle or body aches", "Headache", "Sore throat", "Nausea", "runny nose"};
    vector<int> humansym(11, 0);
    cout << "\nAny Symtoms - " << endl;
    while (1)
    {
        cout << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << i + 1 << "." << symtoms[i] << endl;
        }
        int n;
        cout << "\nDo you have any above Symtoms(-1 to exit) - ";
        cin >> n;
        if (n == -1)
            break;
        humansym[n] = 1;
    }
    cout << "3.Have you travel in this duration - (y/n)";
    char ch;
    cin >> ch;

    return 0;
}