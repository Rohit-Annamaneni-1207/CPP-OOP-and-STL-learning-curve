#include <iostream>
using namespace std;

class sample1
{
    private:
        int a;
        int b;
    public:
        void setdata(int a1, int b1);
        friend class sample2;
};
void sample1 :: setdata(int a1, int b1)
{
    a=a1;
    b=b1;
}

class sample2
{
    private:
        int A;
        int B;
    public:
        void setdata(sample1 s)
        {
            A=s.a;
            B=s.b;
        }
        void display()
        {
            cout<<A<<endl;
            cout<<B<<endl;
        }
};

sample2 returns(sample1 s)
{
    sample2 s2;
    s2.setdata(s);
    return s2;           ///returning object
}

int main()
{
    sample1 s1;
    sample2 s2;
    s1.setdata(56,78);
    s2=returns(s1);
    s2.display();
}