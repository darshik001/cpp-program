#include<iostream>
using namespace std;

class Complex{
   int x; 
   int y;
  
   public:
   Complex(){
    x =0;
    y=0;
  cout<<"defual constructor is call"<<"value of x and y:"<<x<<" and "<<y <<endl;

   }
    Complex(int a ,int b){
      x = a;
      y=b;


    }
void printdata(){
  cout<<"Value of x:"<<x<<endl;
  cout<<"Value of y:"<<y<<endl;
}
};

int main(){
   class Complex c1;
   c1 =Complex(10,20);
   c1.printdata();
}