#include <iostream>
#include <string>
using namespace std;
#include "Comparator.h"
#include "employee.h"
#include "TreeNodeE.h"
#include "treeimpl.h"

// TreeNodeE& buildtree(){
    
// }

int main(){
    Employee a("Huy",215197,"CEO");

    Employee a1("Ana",1,"manager");

    Employee a2("Billy",2,"manager");
    Employee a3("Bow",3,"manager");
    Employee a4("Elize",4,"manager");
    Employee a5("Karma",5,"manager");

    Employee b1("Kelly",11,"assitant");
    Employee b2("June",12,"assitant");
    Employee b3("Jill",13,"assitant");
    Employee b4("Jay",14,"assitant");
    Employee b5("Jack",15,"assitant");

    Employee b6("Ken",21,"assitant");
    Employee b7("Max",22,"assitant");
    Employee b8("Mike",23,"assitant");
    Employee b9("Rolo",24,"assitant");
    Employee b10("Angel",25,"assitant");

    // fill the org chart
    // show it depth first
    // show breadth first
    
    // and remove some people
    // show it depth first
    // show breadth first
    
    Treeimpl T;
    T.addRoot(a);
    T.addChildren(a,a1);
    T.addChildren(a,a2);
    T.addChildren(a,a3);
    T.addChildren(a,a4);
    T.addChildren(a,a5);

    T.addChildren(a1,b1);
    T.addChildren(a1,b6);
    T.addChildren(a2,b2);
    T.addChildren(a2,b7);
    T.addChildren(a3,b3);

    T.addChildren(a3,b8);
    T.addChildren(a4,b4);
    T.addChildren(a4,b9);
    T.addChildren(a5,b5);
    T.addChildren(a5,b10);

    // T.head->print();
    T.removeEmployee(a2);
    T.removeEmployee(a3);

    T.printDFS(new TreeNodeE());
    }
    