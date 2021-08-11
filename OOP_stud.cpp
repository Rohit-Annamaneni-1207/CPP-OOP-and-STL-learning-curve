//object arrays discussed here

#include <iostream>
using namespace std;

class student
{
    private:
        int roll;
        string name;
        int marks[6];
        int percent;
    public:
        void set_data(int roll1,string name1,int marks1[]);
        void percentage();
        void get_data();
};


void student :: percentage()
{
    int i;
    percent=0;
    for (i=0;i<6;i++)
    {
        percent+=marks[i];
    }
    percent=percent/6;
}

void student :: set_data(int roll1,string name1,int marks1[])
{
    roll=roll1;
    name=name1;
    int i;
    for (i=0;i<6;i++)
    {
        marks[i]=marks1[i];
    }
    percentage();
}


void student :: get_data()
{
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<percent<<endl;
}

int main()
{
    student mahesh[2];
    int oops[6]={30,30,40,40,30,20};
    mahesh[1].set_data(11,"mahesh", oops);
    int oops1[6]={80,90,70,80,90,90};
    mahesh[2].set_data(12,"Pawan Kalyan",oops1);
    mahesh[1].get_data();
    mahesh[2].get_data();
}