#include <iostream>
#include <string>
using namespace std;
#include "Comparator.h"
#include "employee.h"
#include "TreeNodeE.h"

// TreeNodeE& buildtree(){
    
// }

int main(){
    Employee e("Huy",215197,"CEO");
    cout<<e.str()<<endl;


    Employee h("Bao",1,"manager");
    cout<<e.compareId(h)<<endl;
    // fill the org chart
    // show it depth first
    // show breadth first
    
    // and remove some people
    // show it depth first
    // show breadth first
    // TreeNodeE tn(e);
    // cout<<tn.E.str()<<endl;
}