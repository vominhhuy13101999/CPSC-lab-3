#include <string>
#include <vector>
#include <iostream>
#include "employee.h"
#include "tree.h"
#include "TreeNode.h"
#include "TreeNodeE.h"
#include "treeimpl.h"

using namespace std;



void Treeimpl::addRoot(Employee e){
    if (len==0){
        head= new TreeNodeE(e);
    }
    else{
        cout<<"ERROR: root exist"<<endl;
    }
    len++;
}


void Treeimpl::addChildren(Employee manager, Employee newPerson){
    TreeNodeE N(newPerson);
    TreeNodeE* k= new TreeNodeE();
    TreeNodeE* final= new TreeNodeE();
    TreeNodeE &M= DFS(manager,k,final);
    M.addChildren(N);
    len++;
}


void Treeimpl::removeEmployee(Employee manager,Employee firedPerson){
    // TreeNodeE* k= new TreeNodeE();
    // TreeNodeE* final= new TreeNodeE();
    // TreeNodeE& N=DFS(firedPerson,k,final);
    // // (firedPerson).erase();
    // Employee* p= &N.data;
    // p->erase();
    TreeNodeE& k=DFS(manager,new TreeNodeE(),new TreeNodeE());
    TreeNodeE& k_junior=DFS(firedPerson,new TreeNodeE(),new TreeNodeE());
    k.remove(k_junior);
}

TreeNodeE& Treeimpl::DFS(Employee e,TreeNodeE* N,TreeNodeE* final){
    if (len==0){
        cout<<"Error: no root"<<endl;
        return *final;
    }
    else{
        if(N->data.equals(Employee())){
            N=head;
        }
        
        if (N->data.equals(e)){
            final=N;
            
        }
        else{
            vector<TreeNodeE> a=*(N->children);
            for (unsigned i=0; i<N->children->size(); ++i){
                final=&DFS( e,&a[i],final ) ;
      
    } 

        }
        return *final;
    }
}

void Treeimpl::printDFS(TreeNodeE* N){
    if (len==0){
        cout<<"Error: no root"<<endl;
    }
    else{
        if(N->data.equals(Employee())){
             N=head;
        }
        cout<<N->data.str()<<endl;

        vector<TreeNodeE> a=*(N->children);
        
            for (unsigned i=0; i<N->children->size(); ++i){

                printDFS(&a[i]);
            }}
            }
void Treeimpl::printBFS(TreeNodeE* N){
    if (len==0){
        cout<<"Error: no root"<<endl;
    }
    else{
        if(N->data.equals(Employee())){
            N=head;
            cout<<N->data.str()<<endl;
        }
        

        vector<TreeNodeE> a=*(N->children);
        for (unsigned i=0; i<N->children->size(); ++i){

                cout<<a[i].data.str()<<endl;
            }
        for (unsigned i=0; i<N->children->size(); ++i){

            printBFS(&a[i]);
        }}
}








