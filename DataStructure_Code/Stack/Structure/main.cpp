#include <iostream>
using namespace std ;

struct emp
{
    char name[25];
    int age;
    float salary;
};

int main()
{
    struct emp e;
    cout << "\n Enter the name , age and salary " ;
    cin >> e.name ;
    cin >> e.age >> e.salary ;
    cout << "\n Name is " << e.name << "\n age is " << e.age << "\n salary is " << e.salary ;
}
