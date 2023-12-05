#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout<<rand()<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<time(0);
        srand(time(0));
        cout<<rand()<<endl;
        int r=rand()%10;
        cout<<r<<endl;
    }
}