#include <iostream>
#include <cstring>
using namespace std;
string a;
char b[100];
int main()
{
    cout << "enter the string : " << endl;
    cin >> a;
    strcpy(b, a.c_str());
    for (int i = 0; i < sizeof(b); i++)
    {
        int d = 0;
        if (b[i] != '0')
        {

            for (int j = 0; j < sizeof(b); j++)
            {
                if (b[i] == b[j])
                {
                    b[j] = '0';
                    d++;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << d << endl;
    }
    
}

