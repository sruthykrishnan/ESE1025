#include <iostream>
using namespace std;
class A {
private:
int a,b;
public:
A(): a(12),b(1) { }
friend int add(A);
};
int add(A objectA)
{
return (objectA.a + objectA.b);
}
int main()
{
A objectA;
cout<<"Sum: "<< add(objectA);
return 0;
}
