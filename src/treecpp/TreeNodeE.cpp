#include "TreeNodeE.h"
#include <vector>
#include <string>
#include <iostream>
#include "Comparator.h"
#include "employee.h"

using namespace std;

// TreeNodeE::TreeNodeE() {
//   vector<TreeNodeE> a;
//   this->children=a;

// }
TreeNodeE::TreeNodeE(Employee E){
      this->data = E;
      // vector<TreeNodeE> a;
      this->children= new vector<TreeNodeE>();}

void TreeNodeE::addChildren(TreeNodeE N){
    this->children->push_back(N);
}

void TreeNodeE::remove(TreeNodeE N){
    int c=0;
    vector<TreeNodeE> a=*children;
    for (unsigned i=0; i<children->size(); ++i){
      
      if (a[i].data.equals(N.data)){
        c=i;
      }
    }
    
    if(c==0){
      cout<<"No such element"<<endl;

    }
    else{
      children->erase(children->begin()+c);
    }
}