#include <bits/stdc++.h>
#include <time.h>
using namespace std;

signed main()
{

    string input = "";

    map<string, vector<string>> mp;
    mp["greeting"] = {"Hello!", "Hi!", "Welcome to our online store! How can I assist you?"};

    mp["farewell"] = {"Thank you for visiting our store. Have a great day!", "Goodbye! Come back soon!"};

    mp["thanks"] = {"You're welcome!", "No problem!", "Glad to help!"};
    mp["product_inquiry"] = {"Sure, let me check that for you.", "Certainly! I'll find the information about that product."};
    mp["order_status"] = {"Please provide your order number, and I'll check its status.", "I can help you with that. What's your order number?"};
    mp["shipping_status"] = {"To track your order, please provide your order number.", "I'll assist you with the shipping status. What's your order number?"};

    mp["product_category"] = {"We offer a wide range of product categories, including shoes, shirts, and trousers.", "Our store has products in different categories such as shoes, shirts, and trousers."};
    srand(time(NULL));
 
    while (true)
    {

        cout << "YOU :>";
        getline(cin, input);
        cout << "BOT :>";
        if (input.find("goodbye") != string::npos || input.find("bye") != string::npos || input.find("Good bye") != string::npos)
        {
            int ind = rand() % (mp["farewell"].size());
            string ans = mp["farewell"][ind];
            cout << ans << endl;
            break;
        }
        if (input.find("hello") != string::npos || input.find("hey") != string::npos || input.find("hi") != string::npos)
        {
            int ind = rand() % (mp["greeting"].size());
            string ans = mp["greeting"][ind];
            cout << ans << endl;
        }
       
        if (input.find("thank") != string::npos || input.find("thanks") != string::npos)
        {
            int ind = rand() % (mp["thanks"].size());
            string ans = mp["thanks"][ind];
            cout << ans << endl;
        }

       
    }
}
