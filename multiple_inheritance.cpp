#include <iostream>
using namespace std;

class A
{
    private:
        string a1;
    protected:
        string a2;
    public:
        string a3;
        A()
        {
            a1="a1";
            a2="a2";
            a3="a3";
        }
};

class B
{
    private:
        string b1;
    protected:
        string b2;
    public:
        string b3;
        B()
        {
            b1="b1";
            b2="b2";
            b3="b3";
        }
};

class C
{
    private:
        string c1;
    protected:
        string c2;
    public:
        string c3;
        C()
        {
            c1="c1";
            c2="c2";
            c3="c3";
        }
};

class D : private A, protected B, public C
{
    public:
        void display()
        {
            cout<<"a2 "<<a2<<endl;
            cout<<"a3 "<<a3<<endl;
            cout<<"b2 "<<b2<<endl;
            cout<<"b3 "<<b3<<endl;
            cout<<"c2 "<<c3<<endl;
            cout<<"c3 "<<c3<<endl;
        }
};

int main()
{
    D object;
    object.display();
}