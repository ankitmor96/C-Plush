#include<iostream>
#include<string>
using namespace std;

class W {
    protected:
       int i;

    public:
         W (int num ) {
               i=num;
    }
       
};

class X : virtual public W { 
   protected:
       int k;

    public:
       X(int num2,int num): W(num){
           k=num2;
       }
};

class Y: virtual public W {
    protected:
       int j;
    public:
       Y(int num3,int num) : W(num){
        j=num3;
       }
};

class Z : virtual public X, public Y {
    protected:
        int m;
    public:
        Z(int num4, int num3, int num2, int num): W(num), X(num2,num), Y(num3,num){
            m=num4;
        }

    void sum(){
        cout<<"number of sum :" << i + k + j + m << endl ;
    }
};

int main (){
    Z  obj (10,20,30,40);
    obj.sum();

    return 0;
}