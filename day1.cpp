#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"enter the value of a = ";
    cin>>a;
    cout<<"enter the value of b = ";
    cin>>b;
    // cout<<"the addition of two number is = "<<a-(-b)<<endl;
    // printf("%d",printf("%*c%*c",a,' ',b,' '));
    // cout<<"value = "<<(a&b)<<endl;
    // cout<<"value = "<<(a|b)<<endl;
    // cout<<"value = "<<(a^b)<<endl;
    // cout<<"value = "<<(a<<1)<<endl;
    // cout<<"value = "<<(a>>1)<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping "<<endl <<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;

}