#ifndef __TREE_H__
#define __TREE_H__
#include <string>
#include <vector>
#include "employee.h"
#include "TreeNodeE.h"

// using namespace std;
template<typename N,typename E>
class Tree
{

    public:
        N* head;
        int len;
        void addRoot(E e);
        void addChilden(E manager, E newPerson);
        void removeEmployee(E firedPerson);
        N& DFS(E e,N* k,N* a); 
        void printDFS(N* k);
        void printBFS(N* k);
};

#endif