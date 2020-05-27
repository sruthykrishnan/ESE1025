#include <iostream>
#include<string>
using namespace std;
class add
{
private:
int a;
int b;
int sum;
public:
add& set(int a,int b)
{ this->a= a;
this->b= b;
return *this;
}
add& print()
{
sum=a+b;
cout<<"sum is"<<sum;
return *this;
}
};
int main()
{
add obj;
int x;
string str_bad= "wrong no. entered";
cout<<"The choice entered is 1 or 2"<<’ ‘;
cin>>x;
try
{
if(x == 1)
{ throw obj.set(40,80);
}
if (x== 2)
{ throw obj.set(14,30);
}
if(x!=1 || x!= 2)
{ throw str_bad;
}}
catch(add& obj )
{
obj.print();
}
catch(add& obj)
{
obj.print();
}
catch(string str_bad)
{
cout<<str_bad;
}
return 0;
}
