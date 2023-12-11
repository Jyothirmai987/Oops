#include <iostream>
#include "declare.h"
#include <string>
using namespace std;
//syntax to define method outside class is: classname::method()

    employee::employee(int age,char gender,float exp): 
    age(age), gender(gender), exp(exp){
        age=age;
        gender=gender;
        exp=exp;
    
}

void employee::setname(const std::string& Name) {
    Name_of_employee = Name; 
}


const std::string& employee::getname() const {
    return Name_of_employee; 
}
 void employee::setno(const int& empid) {
          employee_no=empid;
 }
 const int& employee::getno() const
 {
         return employee_no;
 }

void employee::promote(int raise_amount){
    int sal=raise_amount;
    cout<<"the hike for promotion is:"<<sal<<endl;

}
void employee::demote(int de_amount){
    int reduce=de_amount;
    cout<<"the amount reduced due to penality"<<reduce<<endl;
}
int employee::hire(int salary){
    int actual_sal=salary;
    return actual_sal;
}
void employee::fire(){
    cout<<"you are fired bez of ur neglegence"<<endl;
}