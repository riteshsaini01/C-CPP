#include<iostream>
using namespace std;

int sum(int a, int b);
//void greet();
void greet(void);

int main()
{
    greet();
    int num1,num2;
    cout<<"Enter the value of num1:";
    cin>>num1;
    cout<<"Enter the value of num2:";
    cin>>num2;

    cout<<"The sum is:"<<sum(num1,num2);
    
    return 0;
}

int sum(int a , int b){
    int c=a+b;
    return c;
}
void greet()
{
    cout<<"Hello!,Good Morning"<<endl;
};