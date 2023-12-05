#include<iostream>
#include<cstring>
using namespace std;
string a;
char b[100];
char c;
int d=0;
int main(){
   cout<<"enter the string : "<<endl;
   cin>>a;
   strcpy(b,a.c_str());
//    for(int i =0;i<sizeof(b);i++)
//    {
//     cout<<b[i];
//    }
   cout<<"enter the character : "<<endl;
   cin>>c;
   for(int j=0;j<sizeof(b);j++){
    if(c==b[j]){
        d++;
        
    }
   }
   cout<<d;


   }

