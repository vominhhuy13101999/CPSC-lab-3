#include "TreeNodeE.h"
#include <vector>
#include <string>
#include <iostream>
#include "Comparator.h"
#include "employee.h"
#include "TreeNode.h"

using namespace std;

// TreeNodeE::TreeNodeE() {
//   vector<TreeNodeE> a;
//   this->children=a;

// }


// TreeNodeE::TreeNodeE(  Employee data): TreeNode<Employee>(data),data(data){
  TreeNodeE::TreeNodeE(  Employee data){
      this->data = data;
      // vector<TreeNodeE> a;
      this->children= new vector<TreeNodeE>();
      }

  void TreeNodeE::addChildren(TreeNodeE& N){
    this->children->push_back(N);
}


void TreeNodeE::remove(TreeNodeE& N){
    int c=-1;
    vector<TreeNodeE> a=*children;
    for (unsigned i=0; i<children->size(); ++i){
      
      if (a[i].data.equals(N.data)){
        c=i;
        // if (N.children->size()>0){
        //   vector<TreeNodeE> b=*N.children;
        //   for (unsigned j=0; i<N.children->size(); ++j){
        //       a.push_back(b[j]);
        //   }
        // }
        break;
      }
    }
    
    if(c==-1){
      cout<<"No such element"<<endl;

    }
    else{
      children->erase(children->begin()+c);
    }
}
void TreeNodeE::print(){
    cout<<"data: "<<data.str()<<endl;
    cout<<"children: "<<endl;
    vector<TreeNodeE> a=*children;
    for (unsigned i=0; i<children->size(); ++i){
        cout<<a[i].data.str()<<endl; 
      
    }


}