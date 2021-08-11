//static data members are initialized and it is shared among all objects of a certain class
// lifetime of static data members is for the entire program.

#include <iostream>
using namespace std;

class static_test
{
    private:
        static int track;
    public:
        void increase_track()
        {
            track++;
        }
        void print_tracker()
        {
            cout<<track<<endl;
        }    
        void reset_track()
        {
            track=0;
        }
};
int static_test :: track=0;
int main()
{
    static_test a,b,c;
    //a.reset_track();
    //b.reset_track();
    //c.reset_track();
    a.print_tracker();
    b.print_tracker();
    c.print_tracker();
    //===================
    a.increase_track();
    a.print_tracker();
    b.print_tracker();
    c.print_tracker();
    //====================
    b.increase_track();
    a.print_tracker();
    b.print_tracker();
    c.print_tracker();
}