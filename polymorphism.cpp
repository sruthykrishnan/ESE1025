#include <iostream> 
using namespace std;
//Base class
class Cone
{
   public:
      void getVolume()
      {
           cout<<"Function of Base class Cone called from derived class Volume"<<endl;
           cout<<"Radius of the Cone= ";
           cin>>radius;
           cout<<"Height of the Cone= ";
           cin>>height;
           cout<<"Volume of Cone = "<< (3.14*radius*radius*height*0.33)<<endl;
      }
   protected:
      float radius;
      float height;
};

//Base class
class Sphere 
{
   public:
       void getVolume()
      {
          cout<<"function of Base class Sphere called from Derived class Volume"<<endl;
          cout<<"R value of the Sphere= ";
          cin>>r;
          cout<<"Volume of Sphere= "<< (1.333*3.14*r*r*r)<<endl;
      }
      protected:
         float r;
};

// Derived class
class Volume:public Cone,public Sphere
{
   public:
      void getVolume()
      {
           cout<<"Function of Derived class from Main class"<<endl;
           Cone::getVolume();
           Sphere::getVolume();         
      }
};
int main(void)
{
   Volume V;
   cout<<"Polymorphism using Derived Class"<<endl;
   V.getVolume();
   return 0;
}

