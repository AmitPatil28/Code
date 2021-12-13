#include<iostream>
#include<math.h>
using namespace std;
int main () {

    int h=0,t=0,one=0;

    int money;
    cout<<"enter total amount of money"<<endl;
    cin>>money;
    

    switch (1)
    {
    case 1:cout << h+money/100<<"-100 rupees note"<<endl;
    h=money%100;
        
    case 2:cout << h/20 <<"-20 rupees note"<<endl;
        t=h%20;
    case 3:cout << t/1 <<"-1 rupees note"<<endl;
        one=t%1;
    
    default: cout<<"invalid operator"<<endl;
        break;
    }


}