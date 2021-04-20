/*
 *
 * YOU NEED TO IMPLEMENT THIS!
 *
 */
#include <functional>
#include "employee.h"
#include <string>
#include <iostream>


#ifndef __COMPARATOR_H__
#define __COMPARATOR_H__


// class Employee;
class Comparator
{
    public:
        int compare(Employee* a, Employee* b ,std::equal_to<int> cmp= std::equal_to<int>{}) const{
            // std::cout<<a->getId()<<std::endl;
            // std::cout<<b->getId()<<std::endl;
            return cmp(a->getId(),b->getId());
        };
};

#endif
