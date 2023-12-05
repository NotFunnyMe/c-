#include <iostream>
using namespace std;
// int main()
// {
    
//         // int ts = 45; //total students
//         // int b = 25;  //boys
//         // int ba = 17;  //boys with a grade
//         // int wa = 80/100;  //total students with a grade
//         // float ans;
//         // ans=ts/wa;
//         // ans=ans-ba;
//         // cout<<"total girls with A grade = "<<ans<<endl;


// }

// int main()
// {
//     string a = "hello";
//     cout<<a;
//     return 0;
// }


    // struct name {
    //     int x;
    //     string name = NULL;
    // };
    // int main()
    // {
    //     name var;
    //     cout<<var.x;  //garbage value
    //     return 0;
    // }

    // class namee{
    //     int x; //initial value 0
    //     string name = NULL;
    //     print(x);
    // };
    // int main() // private member
    // {
    //     namee n;
    //     cout<<n.x;
    // }

    // int main()
    // {
    //     int a;
    //     float b;
    //     double c;
    //     int d[1];
    //     char name;
        
    //     cout<<sizeof(a)<<endl;
    //      cout<<sizeof(b)<<endl;
    //       cout<<sizeof(c)<<endl;
    //        cout<<sizeof(d)<<endl;
    //        cout<<sizeof(name)<<endl;

    // }

int main()
{
    int a = 101010;
    int b =1;
    
    // for(int i;i<10;i++)
    // {
    //     cin>>a[10];
    // }
    // cout<<a[10];
    while(a>0)
    {
        int rem = a%10;
        a=a/10;
        cout<<a<<endl;
        int reme = a%10;
        a=a/10;
        cout<<a<<endl;
    }
    return 0;
}