/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Calculate_fare
{
    public:
        void mini(int km)
        {
            if(km<=3)
                cout<<"Mini - Rs."<<50<<" ";
            if(km>3 && km<=18)
                cout<<"Mini - Rs."<<50+(km-3)*10<<" ";
            if(km>18 && km<=75)
                cout<<"Mini - Rs."<<50+15*10+(km-18)*8<<" ";
            if(km>75)
                cout<<"Mini - Rs."<<km*8<<" ";
        }
    public:
        void sedan(int km)
        {
            if(km<=5)
                cout<<"Sedan - Rs."<<80<<" ";
            if(km>5 && km<=20)
                cout<<"Sedan - Rs."<<80+(km-5)*12<<" ";
            if(km>20 && km<=100)
                cout<<"Sedan - Rs."<<80+15*12+(km-20)*10<<" ";
            if(km>100)
                cout<<"Sedan - Rs."<<km*10<<" ";
        }
    public:
        void suv(int km)
        {
            if(km<=5)
                cout<<"Suv - Rs."<<100<<" ";
            if(km>5 && km<=20)
                cout<<"Sedan - Rs."<<100+(km-5)*15<<" ";
            if(km>20)
                cout<<"Sedan - Rs."<<100+15*15+(km-20)*12<<" ";
            //if(km>100)
              //  cout<<"Sedan - Rs."<<km*10<<" ";
        }
};
int main()
{
    int kilometer;
    Calculate_fare f;
    cout<<"Enter the km:-";
    cin>>kilometer;
    f.mini(kilometer);
    f.sedan(kilometer);
    f.suv(kilometer);
    return 0;
}
