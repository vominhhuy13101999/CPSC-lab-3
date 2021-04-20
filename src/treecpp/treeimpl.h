#ifndef __TREEI_H__
#define __TREEI_H__
#include <string>
#include <vector>
#include "employee.h"
#include "tree.h"
// using namespace std;
class Treeimpl : public Tree
{

    public:
        void addRoot(Employee e);
        void clear();
        void addDirectReport(Employee manager, Employee newPerson);
        void removeEmployee(Employee firedPerson);
        void DFS(); 
        void BFS();
};

#endif