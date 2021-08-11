#include <iostream>
using namespace std;

class testItem
{
    private:
        int x;
        int y;
    public:
        int z;
        testItem(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void display();
        void operator-(); //Unary minus
        testItem operator+(testItem B); //Binary addition without friend function
};

void testItem :: display()
{
    cout<<x<<" "<<y<<" "<<" "<<z<<endl;
}

void testItem :: operator-() //Unary minus
{
    x = -x;
    y = -y;
    z = -z;
}

testItem testItem :: operator+(testItem B)
{
    testItem temp(x+B.x, y+B.y, z+B.z);
    return temp;
}



int main()
{
    testItem A(2,-5,6);
    A.display();
    -A;
    A.display();
    testItem B(1,1,1);
    A = A + B;
    A.display();
}