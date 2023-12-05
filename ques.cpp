#include <iostream>
using namespace std;
int puff;
int coldd;
int total;
int pizza;
class theatre
{
    public:
    void bill()
    {
        cout << "enter the number of pizzas you want" << endl;
        cin >> pizza;
        cout << "enter the number of puff you want" << endl;
        cin >> puff;
        cout << "enter the number of coldd you want "<< endl;
        cin >> coldd;
        cout << "your total bill is : "<< endl;
        total = (pizza * 100) + (puff * 20) + (coldd * 10);
        cout<<total;
    }
};

int main()
{
    theatre t;
    t.bill();
    return 0;
}
