#include <iostream>
#include <string>
using namespace std;
class employee{
    private:
    string Name_of_employee;
    int employee_no;
    public:
    int age;
    char gender;
    float exp;
    employee(int age,char gender,float exp);
    void promote(int raise_amount);
    void demote(int de_amount);
    int hire(int salary);
    void fire();
    
    //name
    void setname(const std::string& Name);
    const std::string& getname() const;
    //employe_no
    void setno(const int& empid);
    const int& getno() const;
   
    
    
};