#include <iostream>
#include <string>
using namespace std;

string username;
string email;
string password;
string username1;
string password1;
string email1;
class Reg
{
public:
    void reg()
    {

        cout << "please enter your username : " << endl;
        cin >> username;
        cout << "please enter your email : " << endl;
        cin >> email;
        cout << "please enter your password : " << endl;
        cin >> password;
    }
    void log()
    {
        cout << "please enter your username : " << endl;
        cin >> username1;
        cout << "please enter your email : " << endl;
        cin >> email1;
        cout << "please enter your password : " << endl;
        cin >> password1;

        if (username == username1)
        {
            if (password == password1)
            {
                if (email == email1)
                {
                    cout << "you have logged in" << endl;
                }
            }
        }
        else
        {
            cout << "your details are not correct" << endl;
        }
    }
};

int main()
{
    Reg l;
    l.reg();
    l.log();

    return 0;
}
