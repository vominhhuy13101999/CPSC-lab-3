
#include <string>
#include <vector>
#include "TreeNode.h"
#include "employee.h"


#ifndef __TREENODEE_H__
#define __TREENODEE_H__


// #include "Comparator.h"
// using namespace std;
class Employee;
class TreeNodeE : public TreeNode<Employee>
{

    public:
        Employee data;
        std::vector<TreeNodeE>* children;
        // Comparator* C;
        // TreeNodeE();
        TreeNodeE( Employee data) ;
        void addChildren(TreeNodeE N);
        void remove(TreeNodeE N);
};

#endif