// to check weather no is duck
#include <iostream>
using namespace std;

// int main()
// {
//     int a;
//     cout<<"enter the value of a = ";
//     cin>>a;

//     for(int i=0;i<=a;i++)
//     {
//     int rem = a%10;
//     cout<<rem<<endl;
//     if(rem==0)
//     {
//         cout<<"its a duck number"<<endl;
//         break;
//     }
//     else
//     {
//     a=a/10;
//     }
//     }

// }
int main()
{
    string b = "042535";

    if (b[0] == 0)
    {
        cout << "nadn";
    }
    else
    {
        for (int i = 1; i <= b.length(); i++)
        {
            if (b[i] == 0)
            {
                cout << "dn";
                break;
            }
        }
    }
}
