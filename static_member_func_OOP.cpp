//Static functions have access to only other static members(functions or variables) declared in the same class.
//Can be called using the class name instead of objects name as follows:-
// class-name :: function-name

#include <iostream>
using namespace std;

class static_func
{
    private:
        int code;
        static int count;
    public:
        void setcode(){code=++count;}
        void getcode(){cout<<code<<endl;}
        void codereset(){code=0;}
};

int static_func :: count=0;

int main()
{
    static_func a,b,c;
    a.codereset();
    a.setcode();
    a.getcode();
    b.codereset();
    b.setcode();
    b.getcode();
    c.codereset();
    c.setcode();
    c.getcode();
}