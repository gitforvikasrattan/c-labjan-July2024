#include<iostream>
using namespace std;


class Complex
{

    int img;
    int real;

public:
     void input(int p1)
      {

          real = img = p1;
      }

      void input(int arg1, int arg2)
      {
          real = arg1;
          img = arg2;
      }

      void input(Complex oarg1)
      {
          real = oarg1.real;
          img = oarg1.img;
      }

     void output();

    Complex add(Complex ob2)
    {
        Complex temp;
        temp.real = real + ob2.real;
        temp.img =  img + ob2.img;
        ob2.real = ob2.real + 5;
        ob2.img = ob2.img + 5;
        return temp;
    }
friend void access(Complex); //

};

void access(Complex ob1)
{
    cout<<" Accessing real and img out of the class\n";
    cout<<ob1.real<<ob1.img;
}

void Complex::output()
     {
        cout<<"\n Entered Complex Number :";
        cout<<real << " + "<<img<< "i";
     }

int main()
{
    Complex c1, c2, c3;
    cout<<"\n First Complex Number \n";
    c1.input(10,15);
    c1.output();
    access(c1);



}









