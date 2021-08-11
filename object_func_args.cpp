//Two ways to pass as arguments
//-->Entire object is passed (by value)
//-->Address is passed (by reference)

#include <iostream>
using namespace std;

class times
{
    private:
        int hours,minutes;
    public:
        int get_minutes();
        void set_times(int hour,int mins);
        void display();
        int sum(times T1,times T2);
};

void times :: display()
{
    // if (hours>24)
    // {
    //     hours-=24;
    // }
    cout<<hours<<" hours,"<<minutes<<"minutes"<<endl;
}

int times :: get_minutes()
{
    int mins;
    mins=60*hours+minutes;
    return mins;
}

int times :: sum (times T1,times T2)
{
    int mins_T1, mins_T2,sum;
    mins_T1=T1.get_minutes(); 
    mins_T2=T2.get_minutes();
    sum=mins_T1+mins_T2;
    hours=sum/60;
    minutes=sum%60; 
}

void times :: set_times(int hour,int min)
{
    int hours_actual,mins_actual;
    mins_actual=hour*60+min;
    hours=mins_actual/60;
    minutes=mins_actual%60;
}

int main()
{
    times T1,T2,T3;
    T1.set_times(12,62);
    T2.set_times(13,53);
    T1.display();
    T2.display();
    T3.sum(T1,T2);
    T3.display();
}
