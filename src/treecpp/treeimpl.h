#ifndef __TREEI_H__
#define __TREEI_H__
#include <string>
#include <vector>
#include "employee.h"
#include "tree.h"
#include "TreeNode.h"
#include "TreeNodeE.h"
// using namespace std;
class Treeimpl : public Tree<TreeNodeE, Employee>
{

    public:
        TreeNodeE* head;
        int len=0;
        void addRoot(Employee e);
        void addChildren(Employee manager, Employee newPerson);
        // void removeEmployee(Employee firedPerson);
        void removeEmployee(Employee manager,Employee firedPerson);
        TreeNodeE& DFS(Employee e, TreeNodeE* N,TreeNodeE* final); 
        void printDFS(TreeNodeE* N);
        void printBFS(TreeNodeE* N);
};

#endif