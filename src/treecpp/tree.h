#ifndef __TREE_H__
#define __TREE_H__
#include <string>
#include <vector>
#include "employee.h"
#include "TreeNodeE.h"
// using namespace std;
class Tree
{

    public:
        TreeNodeE* head;
        int len;
        void clear();
        void addchild(Employee manager, Employee newPerson);
        void removeEmployee(Employee firedPerson);
        void DFS(); 
        void BFS();
};

#endif