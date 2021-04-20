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
        N<E>* head;
        int len;
        void clear();
        void addchild(E manager, E newPerson);
        void removeEmployee(E firedPerson);
        void DFS(); 
        void BFS();
};

#endif