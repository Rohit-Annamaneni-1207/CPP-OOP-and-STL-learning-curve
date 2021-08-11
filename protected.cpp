#include <iostream>
using namespace std;

class testing
{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void ABSet();
};

void testing :: ABSet()
{
    b=4;
    c=3;
}

class tester : protected testing
{
    public:
        void display()
        {
            ABSet();// inherited in protected mode
            //cout<<"a: "<<a; Does not work as private members are not inherited in protected mode
            cout<<"b: "<<b<<endl; //protected in derived class
            cout<<"c: "<<c<<endl; //protected in derived class
        }
};


int main()
{
    tester l;
    l.display();
}