#include <iostream>
#include <string>
using namespace std;
class temperature
{
public:
float f,c;
temperature(float temp1)
{
f=(temp1+459.67)/1.8;
}
temperature(double temp2,float a)
{
c=temp2+a;
}
};
int main()
{
double temper;
int a=273.15;
cout<<"Enter the temperature in kelvin";
cin>>temper;
temperature data (temper);
cout<<"The temperature in fahrenheit is"<<data.f<<'\n';
temperature data1(temper,a);
cout<<"The temperature in celsius is"<<data1.c<<'\n';
return 0;
}
