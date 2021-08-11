//A friendly function is a function that is not restricted to a certain class and is instead shared between the classes
// A class for a manager and a class for a scientist can share the function of income_tax()
//It is not in the scope of the class to which it has been declared a friend
//Therefore it cannot be called using the object of that class
//It can be invoked like a normal function without using scope operator
//unlike a member function, it cannot access member names directly but has to use object name and dot operator (ex:- A.var)
//Can be declared in either public or private without altering the meaning
//Usually has the objects are arguments

#include <iostream>

using namespace std;

class sample
{
    private:
        int a;
        int b;
    public:
        void setdata(int a1,int b1)
        {
            a=a1,b=b1;
        }
        friend int avg(sample s)
        {
            return (s.a + s.b)/2;
        }
};

class sample_avg
{
    private:
        int average;
    public:
        void setdata(sample s)
        {
            average=avg(s);
            cout<<average<<endl;
        }
        // friend int sample :: avg(sample s);
};

int main()
{
    sample a;
    sample_avg b;
    a.setdata(2,4);
    b.setdata(a);
    return 0;
}