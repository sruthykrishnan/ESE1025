#include <iostream>
using namespace std;
inline int rectangle(const int length)
{
return length;
}
inline float rectangle(const float breadth)
{
return breadth;
}
int main()
{
int length;
cout<<"Length of the rectangle="<<rectangle(length)<<endl;
cin>>length;
float breadth;
cout<<"Breadth of the rectangle="<<rectangle(breadth)<<endl;
cin>>breadth;
cout<<"\nArea:";
cout<<"\nArea of the rectangle="<<length*breadth;
}
