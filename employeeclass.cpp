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
 Employee( int eid, string ename, float esalary, float ebonus)
{
 id = eid;
 name = ename;
 salary = esalary;
 bonus = ebonus;
}

 Employee(const Employee &obj)
{ 
 id = obj.id;
 name = obj.name;
 salary = obj.salary;
 bonus = obj.bonus;
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
 Employee e2(101,"Neha", 2000,200);
 e2.totalsalary();
 e2.display();
 
return 0;
}
