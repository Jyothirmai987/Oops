#include "declare.h"
using namespace std;
#include <string>
int main(){
    
    employee myobj(21,'F',0);
    cout<<"age is:"<<myobj.age<<"\ngender is:"<<myobj.gender<<"\nmy experience is:"<<myobj.exp;
    cout << "\nDisplaying private details\n";
    myobj.setname("Aneesa");
    myobj.setno(115);
    cout << "\nemp name is: " << myobj.getname();
    cout << "\nemp id is: " << myobj.getno();
    cout<<"\nemp salary is:"<<myobj.hire(30000)<<endl; 


    
    myobj.promote(5000);
    myobj.demote(2000);
    
    myobj.fire();
    
    

    return 0;
}