#include <iostream>
using namespace std;
class Sum {
private:
int a,b;
public:
void set (int a,int b)
{
this->a = a;
this->b=b;
}
void sum()
{
cout<<"sum is"<<a+b<<'\n';
}
};
int main()
{
Sum obj;
int a=10,b=20;
obj.set(a,b);
obj.sum();
return 0;
}
