//***Structure*Union*Enum***
#include<iostream>
using namespace std;

/*struct group
{
    int grpid;
    string name;
    char grpcode;
    int prize;
};*/

union school
{
    int rollno;
    char name;
    char section;
    int marks;
};

int main()
{
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner; 
   /* struct group ritesh;
    ritesh.grpid=21334;
    ritesh.name="tiger";
    ritesh.grpcode='a';
    ritesh.prize=25000;*/

   /* union school c1;
    c1.rollno=21;
    c1.name='r';
    c1.section='c';
    c1.marks=100;

    cout<<c1.name;*/

    //cout<<"Group 1 details";
    //cout<<"Grpid="<<ritesh.grpid<<endl;
    //cout<<"Name="<<ritesh.name<<endl;
    //cout<<"Grpcode="<<ritesh.grpcode<<endl;
    //cout<<"Prize="<<ritesh.prize//<<endl;
    
    
    return 0;
}
