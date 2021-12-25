/*Write a program using classes which inputs the name of the employee, year of
joining,and position held in the company. The program should find out the years
of experience of each employee and print them as super senior,senior and junior
categories along with their experience.*/


#include <iostream>

using namespace std;

class employee
{
    private:
    char name[20];
    int year;
    char position[50];
    int years_of_exp;

    
    public:
    void input();
    void categories();
    
};

void employee::input()
{
    cout<<"Enter Name of employee: ";
    cin>>name;
    cout<<"Name: "<<name<<endl;
        
    cout<<"What year did "<<name<<" join the company: ";
    cin>>year;
    cout<<"Year joined: "<<year<<endl;
    
    cout<<"What position does "<<name<<" hold: ";
    cin>>position;
    cout<<"Postion held: "<<position<<endl;
        
}

void employee::categories()
{
    years_of_exp = 2021-year;
    
    if(years_of_exp>10)
    {
        cout<<name<<" is a SUPER SENIOR"<<endl;
    }
    
    else if(years_of_exp>5)
    {
        cout<<name<<" is a SENIOR"<<endl;
    }
    
    else if(years_of_exp<5)
    {
        cout<<name<<" is a JUNIOR"<<endl;
    }
}

int main()
{
    employee experience;
    
    experience.input();
    experience.categories();
    

    return 0;
}


