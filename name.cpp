#include <iostream>
#include <string>
using namespace std;
int main()
{
int student[3][5];
int i,j,total[3];
char *sub[5]={"Maths","English","Hindi","C++","French"};
char *name[3]={"Bibin","Sruthy","Stephy"};
float avg[3],percentage[3],totalmarks,max=total[0],min=total[3];
for(i=0;i<3;i++)
{
for(j=0;j<5;j++)
{
cout<<"Student Name"<<" "<<name[i]<<", Mark obtained out of 50"<<" "<<sub[j]<<" "<<"is";
cin>>student[i][j];
}
}
for(i=0;i<3;i++)
{total[i]=0;
avg[i]=0;
percentage[i]=0;
totalmarks=250;
for(j=0;j<5;j++)
{
total[i]=total[i]+student[i][j];
avg[i]=total[i]/5;
percentage[i]=(total[i]/totalmarks)*100;
}}
for(i=0;i<3;i++)
{
if(percentage[i]<=100 && percentage[i]>90)
{
cout<<"Total marks of"<<name[i]<<"="<<total[i]<<'\n'<<"Average mark obtained
is"<<avg[i]<<'\n'<<"Grade obtained is A+"<<"Total percentage is"<<percentage[i]<<'\n'<<'\n';
}
else if(percentage[i]<=90 && percentage[i]>80)
{
cout<<"Total marks of"<<name[i]<<"="<<total[i]<<'\n'<<"Average mark obtained
is"<<avg[i]<<'\n'<<"Grade obtained is A"<<" "<<" As total percentage is"<<percentage[i]<<'\n'<<'\n';
}
else if(percentage[i]<=80 && percentage[i]>70)
{cout<<"Total marks of"<<name[i]<<"="<<total[i]<<'\n'<<"Average mark obtained
is"<<avg[i]<<'\n'<<"Grade obtained is B"<<" "<<"As total percentage is"<<percentage[i]<<'\n'<<'\n';
}
else if(percentage[i]<=70 && percentage[i]>60)
{
cout<<"Total marks of"<<name[i]<<"="<<total[i]<<'\n'<<"Average mark obtained
is"<<avg[i]<<'\n'<<"Grade obtained is C"<<" "<<"As total percentage is"<<percentage[i]<<'\n'<<'\n';
}
else if(percentage[i]<=60 && percentage[i]>50)
{
cout<<"Total marks of"<<name[i]<<"="<<total[i]<<'\n'<<"Average mark obtained
is"<<avg[i]<<'\n'<<"Grade obtained is D "<<" "<<"As total percentage is"<<percentage[i]<<'\n'<<'\n';
}
else if(percentage[i]<50)
{
cout<<"Total marks of"<<name[i]<<"="<<total[i]<<'\n'<<"Average mark obtained
is"<<avg[i]<<'\n'<<"Grade obtained is F"<<" "<<"As total percentage is"<<percentage[i]<<'\n'<<'\n';
}
}
for(i=0;i<3;i++)
{
if(total[i]>max)
{
max=total[i];
}}
for(j=3;j>0;j--)
{if(total[j]<min)
{ min=total[j];}
}}
cout<<'\n'<<"the top mark among the three students in all the five subjects is "<<" "<<max<<"
"<<"out of 250";
cout<<'\n'<<"The lowest mark among the three students in all the five subjects is"<<" "<<min<<"
"<<"out of 250";
}
