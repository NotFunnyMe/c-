#include <iostream>
using namespace std;
class test
{
    int a, b, c;
    int d, e, f;
    int g, h, i;
    int avg, avgg, avggg;
    int x, y, z;

public:
    void a()
    {
        cout << "enter the player a1 oxygen level" << endl;
        cin >> a;
        cout << "enter the player a2 oxygen level" << endl;
        cin >> b;
        cout << "enter the player a3 oxygen level" << endl;
        cin >> c;
        avg = (a + b + c) / 3;
        x = avg;
    }
    void b()
    {
        cout << "enter the player b1 oxygen level" << endl;
        cin >> d;
        cout << "enter the player b2 oxygen level" << endl;
        cin >> e;
        cout << "enter the player b3 oxygen level" << endl;
        cin >> f;
        avgg = (d + e + f) / 3;
        y = avg;
    }
    void c()
    {
        cout << "enter the player c1 oxygen level" << endl;
        cin >> g;
        cout << "enter the player c2 oxygen level" << endl;
        cin >> h;
        cout << "enter the player c3 oxygen level" << endl;
        cin >> i;
        avg = (g + h + i) / 3;
        z = avggg;
    }
};
int main()
{
    test t;
    t.a();
    t.b();
    t.c();
    if (x >= y)
    {
        cout << "your team is selected" << endl;
    }
    else if (y >= z)
    {
        cout << "your team is selected" << endl;
    }
    else if (z >= x)
    {
        cout << "your team is selected" << endl;
    }
       if (x < 70) {
        return "disqualified";
    } else if (y < 70) {
        return "disqualified";
    } else if (z < 70) {
        return "disqualified";
    } else if (x == y && x == z) {
        return "selected";
    } else if (x > y && x > z) {
        return "selected";
    } else if (y > x && y > z) {
        return "selected";
    } else if (z > x && z > y) {
        return "selected";
    } else {
        return "invalid case";
    }
}
return 0;
}