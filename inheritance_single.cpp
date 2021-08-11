#include <iostream>
using namespace std;

class a
{
    private:
        int A;
        int B;
    public:
        void getAB()
        {
            A=5;
            B=9;
        }
        ~a(){}
        void display();
        int getA();
        int getB();
};

class b: public a
{
    private:
        int c;
    public:
        int mul();
};

int a :: getA()
{
    return A;
}

int a :: getB()
{
    return B;
}

void a :: display()
{
    cout<<"A: "<<A;
    cout<<"B: "<<B;
}

int b :: mul()
{
    c=getA()*getB();
    cout<<c<<endl;
}

int main()
{
    b inherit;
    inherit.getAB();
    inherit.mul();
}