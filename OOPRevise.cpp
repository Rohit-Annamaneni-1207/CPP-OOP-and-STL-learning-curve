#include <iostream>
using namespace std;

class test
{
    private:
        int m;
    public:
        int n;
        test(int a, int b)
        {
            m = a;
            n = b;
        }
        int accessM();

        ~test()
        {
            cout<<n;
        }
};

int test::accessM()
{
    return m;
}

int main()
{
    test obj(2,3);
    cout<<obj.accessM();
}