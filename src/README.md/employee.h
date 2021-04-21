
#include <functional>
#include <string>
// #include "Comparator.h"

#ifndef __EMPLOYYEE_H__
#define __EMPLOYYEE_H__

// using namespace std;
class Comparator;
class Employee
{
    private:
        std::string name;
        int id;
        std::string position;
        
    public:
        Comparator* C; 
        Employee();
        Employee(std::string name, int id , std::string position );
        std::string getName();
        int getId();
        std::string getPosition();
        bool equals(Employee e);
        std::string str();
        int compareId(Employee e);
        void erase();
        
};

#endif
