#include<iostream>
using namespace std;

class T{

    protected:
      float temperature;
  
};

class R : public T{
    protected:
        float fahrenheit;

    public:

    void convertToFahrenheit(){
        cout<<"enter temperature in celsius  :";
        cin>>temperature;

       fahrenheit = (temperature * 9 / 5 ) + 32;
        cout<<"temperature in fahrenheit "<<fahrenheit<<endl;

    }
};

class S: public R{
    public:

    void convertToKelvin(){
         float Kelvin= (fahrenheit+32)*5/9+273.15;
         cout<<"fahrenheit to kelvin "<<Kelvin<<endl;
    }
};

int main(){

    S obj;
    obj.convertToFahrenheit();
    obj.convertToKelvin();

    return 0;
}