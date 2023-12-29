// employee management
#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name, emp_id;
    float salary;
    void setDetails()
    {
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter name of employee: ";
        cin.ignore();
        getline(cin, name);
    }
    void setSalary()
    {
        cout << "Enter base salary of employee: ";
        cin >> salary;
    }
};

class Manager : public Employee
{
private:
    float bonus;

public:
    void setBonus()
    {
        cout << "Enter bonus: ";
        cin >> bonus;
    }
    void getDetails()
    {
        cout << endl
             << "Employee ID: " << emp_id << endl;
        cout << "Name of Employee: " << name << endl;
        cout << "Base salary: " << salary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Salary of employee: " << salary + bonus << endl;
    }
};

class Worker : public Employee
{
private:
    int hours;

public:
    void setHours()
    {
        cout << "Enter number of hours worked: ";
        cin >> hours;
    }
    void getDetails()
    {
        cout << endl
             << "Employee ID: " << emp_id << endl;
        cout << "Name of Employee: " << name << endl;
        cout << "Base salary: " << salary << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Salary of employee: " << salary * hours << endl;
    }
};

int main()
{
    int n;
abc:
    cout << endl
         << "Employee Management Program:" << endl
         << "Enter 1 for Manager" << endl
         << "Enter 2 for Worker" << endl
         << "Enter 3 to Exit" << endl;
    cin >> n;
    if (n == 1)
    {
        Manager obj1;
        obj1.setDetails();
        obj1.setSalary();
        obj1.setBonus();
        obj1.getDetails();
        goto abc;
    }
    else if (n == 2)
    {
        Worker obj1;
        obj1.setDetails();
        obj1.setSalary();
        obj1.setHours();
        obj1.getDetails();
        goto abc;
    }
    else if (n == 3)
    {
        cout << "Thank You!" << endl;
        return 0;
    }
    else
    {
        cout << "Incorrect choice. Please enter valid choice." << endl;
        goto abc;
    }
    return 0;
}