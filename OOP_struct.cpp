#include <iostream>
using namespace std;

class employee
{
    private:
        string name;
        int age;
        int salary;

    public:
        char qualification[10];
        int id;

        void setdata(string a1,int b1,int c1);
        void getdata();
};

void employee :: setdata(string a1,int b1,int c1) //scope resolution operator---> ::
{
    name=a1;
    age=b1;
    salary=c1;
}

void employee :: getdata()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Qualification: "<<qualification<<endl;
    cout<<"id: "<<id<<endl;
}

int main()
{
    employee mahesh;
    strcpy(mahesh.qualification,"PhD");
    mahesh.id=1234;
    mahesh.setdata("Mahesh Babu",32,1000000);
    mahesh.getdata();
}