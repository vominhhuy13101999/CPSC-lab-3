#include <iostream>
#include <string>
using namespace std;
#include "Comparator.h"
#include "employee.h"
#include "TreeNodeE.h"

// TreeNodeE& buildtree(){
    
// }

int main(){
    Employee a("Huy",215197,"CEO");

    Employee a1("Baoqd",1,"manager");

    Employee a2("Bao",2,"manager");
    Employee a3("as",3,"manager");
    Employee a4("ka",4,"manager");
    Employee a5("Ba",5,"manager");
    // fill the org chart
    // show it depth first
    // show breadth first
    
    // and remove some people
    // show it depth first
    // show breadth first
    TreeNodeE tn(a);
    cout<<tn.data.str()<<endl;
    // TreeNodeE te(e);
    tn.addChildren(a1);
    tn.addChildren(a2);
    tn.addChildren(a3);
    tn.addChildren(a4);
    tn.addChildren(a5);

    tn.print();
}