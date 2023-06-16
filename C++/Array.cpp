#include<iostream>
using namespace std;

int main()
{
    int marks[4]={23,45,56,89};
    int mathmarks[4];
    mathmarks[0]=334;
    mathmarks[1]=34;
    mathmarks[2]=33;
    mathmarks[3]=43;

    cout<<"These are maths marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=566;//you can chage value of element in arrray
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //Making array using loops
    int i;
    for(i=0;i<4;i++)
    {
        cout<<"the value of marks "<<i<<" is: "<<marks[i]<<endl;
    }
    return 0;
}