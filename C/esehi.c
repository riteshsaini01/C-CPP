#include <iostream>
 using namespace std;
 int main()
 {
 int a = 9, b = 20;
 int & aref = a;
 aref = b;
 a++;
 cout << "The value of a is " << aref;
 return 0;
 }

/* #include <iostream>
 using namespace std;
 int fun(int m= 5, int n = 10)
 {
 int c;
 c = m + n;
 return c;
 }
 int main()
 {
 cout << fun();
 return 0;
 }*/