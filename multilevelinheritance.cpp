#include<iostream>

using namespace std;

class P{

    protected:
         float temperature;
    
};

class Q: public P{
    protected :
        float fahrenheit;

    public:

      void toFahrenheit() {

        cout<<"rnter temperature in celsius:";
        cin>>temperature;

        fahrenheit = (temperature * 9 / 5)+ 32;
        cout<<"temperature in fahrenheit :"<<fahrenheit<<endl;
      }
};

class R :public Q{
    public:  
      void toKelvin(){
        float kelvin = (fahrenheit - 32)*5 / 9 + 273.15;
        cout<<"temperature in kelvin :" <<kelvin <<endl;
      }

};
int main (){

    R obj;
    obj.toFahrenheit();
    obj.toKelvin();

}
