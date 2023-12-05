#include <iostream>
using namespace std;

class sample{
    public:
    int num;
    void SetNum(int num){
        this->num=num;

    }
    int GetNum(){
        return num;
    }
};
    int main()
    {
        sample obj;
        obj.SetNum(5);
        int a =obj.GetNum();
        cout<<a;
        return 0;
    }
