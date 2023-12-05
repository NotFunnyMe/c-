#include <iostream>
using namespace std;
class stairs{
    public:
    int steps;
    int stairs;
    int ts = 0;
    void count(){
        cout<<"enter number of steps in stairs"<<endl;
        cin>>stairs;
        cout<<"enter number of steps you have to climb "<<endl;
        cin>>steps;

        for(int i=1;i<=stairs;i=i+steps){
            ts=ts+1;
        }
           cout<<"you will have to take "<<ts<<" steps per stair"<<endl;
    }
};
int main()
{
    stairs s;
    s.count();
    return 0;   
}