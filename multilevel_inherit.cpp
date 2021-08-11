#include <iostream>
using namespace std;

class A
{
    private:
        char a;
    protected:
        char b;
    public:
        char c;
        A()
        {
            a='a';
            b='b';
            c='c';
        }
};

class B : protected A
{
    private:
        char f;
    protected:
        char d;
    public:
        char e;
        B()
        {
            f='f';
            d='d';
            e='e';
        }
};

class C : public B
{
    public:
        void display()
        {
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
            cout<<"d: "<<d<<endl;
            cout<<"e: "<<e<<endl;
        }
};

int main()
{
    C object;
    object.display();

}