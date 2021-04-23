using namespace std;
#include "MapNode.h"
#include <unordered_map>
#include <string>
#include <iostream>
MapNode::MapNode(string value){
    this->value=value;
    // unordered_map<MapNode,int> a;
    edge=unordered_map<MapNode*,int>();
}
string MapNode::getvalue(){
    return value;
}

int MapNode::distance(MapNode* n) const{
    int c=0;
    for (auto i = edge.begin();
         i != edge.end(); i++)
    {
        if (n->getvalue()==i->first->getvalue()){
            return i->second;
        }
    }
    return c;
}
void MapNode::removeEdge(MapNode* n){
    edge.erase(n);

}
void MapNode::addEdge(MapNode* n, int weight){
    edge.insert({n,weight});
}

// bool MapNode::operator==(MapNode n){
//     return value==n.value;
// }
void MapNode::printEdge(){
    cout<<"From: "<<value<<endl;
    cout<<"To: "<<endl;

    for (auto i = edge.begin();i != edge.end(); i++)
    {
        cout<<i->first->getvalue()<<" : "<< i->second<<endl;
        }
    }
void MapNode::setValue(std::string a){
    this->value=a;

}
