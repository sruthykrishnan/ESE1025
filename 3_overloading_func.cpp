#include <iostream>
#include <string>
using namespace std;
class temperature;
class temperature
{
public:
float temper,f,c;
temperature ()
{
cout<<"1. Find the temperature in Fahrenheit"<<'\n';
cout<<"2. Find the temperature in Celsius"<<'\n';
cout<<"3. Find the temperature in Kelvin"<<'\n';
cout<<"4. Exit the program"<<'\n';
cout<<"Enter your choice";
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter the temperature in kelvin";
cin>>temper;
f=convert(temper);
cout<<"The temperature in fahrenheit is"<<convert(temper)<<'\n';
exit(0);
case 2:cout<<"Enter the temperature in kelvin";
cin>>temper;
c=convert(temper);
cout<<"The temperature in celsius is"<<convert(temper)<<'\n';
exit(0);
case 3:cout<<"Enter the temperature in kelvin";
cin>>temper;
cout<<"Since value is entered in Kelvin the temperature is"<<convert(temper)<<'\n';
exit(0);
case 4:exit(0);
}
}
double convert(float temp)
{
return ((temp+459.67)/1.8);
}
double convert(double tempt)
{
return (tempt+273.15);
}
double convert(int tempte)
{
return (tempte);
}
};
int main()
{
temperature obj;
return 0;
}
