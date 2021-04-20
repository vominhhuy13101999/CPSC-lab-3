#include "employee.h"
#include <iostream>
#include "Comparator.h"

using namespace std;


Employee::Employee(){
     (this->name)= "";
     (this->id)=0;
     (this->position)="";

}
Employee::Employee(string name, int id , string position ){
    this-> name=name;
    this -> id=id;
    this->position=position;
    this->C= new Comparator();

}

string Employee::getName(){
    return name;
}

int Employee::getId(){
    return id;
}

string Employee::getPosition(){
    return position;
}
bool Employee::equals(Employee e){
    return name==e.name && id == e.id && position==e.position;
}
string Employee::str(){
    return name + " - " + to_string(id) + " - " + position;
}
int Employee::compareId(Employee e){
    // if (id<e.id){
    //     return -1;
    // }
    // else if (id>e.id){
    //     return 1;
    // }
    // else{
    //     return 0;
    // }
    // cout<<e.getId()<<endl;
    // cout<<id<<endl;
    return C->compare(this,&e);
}