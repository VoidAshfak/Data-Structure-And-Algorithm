#include<bits/stdc++.h>
using namespace std;


class HandleEmployee {
    virtual void askForPromotion() = 0;
};


class Employee:HandleEmployee {

private:
    int Salary;

protected:
    int Age;

public:
    string Name;
    string Company;


    Employee(string name, string company, int age, int salary) {
        Name = name;
        Company = company;
        Age = age;
        Salary = salary;
    };

    void introduceYourself() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        cout << "Company: " << Company << endl;
    };

    int getSalary() {
       return Salary; 
    }

    void askForPromotion() {
        if(Age > 20 && Salary < 26000) {
            Salary = Salary*1.5;
            cout << "Congratulations " << Name << ". You just got Promoted!" << endl;
            cout << "Salary (new): " << Salary << endl;
        } else {
            cout << "Sorry " << Name <<". No promotion this year!" << endl;
            cout << "Salary (new): " << Salary << endl;
        }
    }
};


class Developer:public Employee {
public:
    string Tech;
    string Type;

    Developer(string name, string company, int age, int salary, string tech, string type):Employee(name, company, age, salary){
        Tech = tech;
        Type = type;
    };

    void favTech() {
        cout << Name << "'s favourite programming language is " << Tech << " and he is working " << Type <<endl;
        cout << "Salary: " << getSalary() <<endl;
        cout << "Age: " << Age <<endl;
    }
    
};


int main() {
    
    // Employee emp1 = Employee("Ashfak Asif", "Rigg Technologies", 25, 30000);
    // Employee emp2 = Employee("Farhan Nafiz", "SOFTEKO", 25, 25000);

    Developer dev = Developer("Ashfak Asif", "Rigg Tech.", 25, 30000, "C++", "On-Site");

    dev.favTech();

    dev.askForPromotion();

}