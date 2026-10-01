#include <iostream>
#include <string>
using namespace std;
class Employee
{
 int id;
 string name;
 float salary, bonus, tsalary;
 public:
 Employee()
{
 id = 0;
 name = "Employee"; //unknown
 salary = 0;
 bonus = 0;
}
 void totalsalary()
{ 
 tsalary = salary + bonus;
}
 void display()
{ 
 cout << "Employee ID="<<id<<endl;
 cout << "Employee Name="<<name<<endl;
 cout << "Employee Salary="<<salary<<endl;
 cout << "Employee Bonus="<<bonus<<endl;
 cout << "Total Salary="<<tsalary<<endl;
}
};
int main()
{
 Employee e1;
 e1.totalsalary();
 e1.display();

return 0;
}
