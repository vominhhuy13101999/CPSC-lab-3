using namespace std;
#include "MapNode.h"
#include <unordered_map>
#include <string>
MapNode::MapNode(string value){
    this->value=value;
    unordered_map<MapNode,int> a;
    edge=a;
}
string MapNode::getvalue(){
    return value;
}

int MapNode::distance() const{
    int c=0;
    for (auto i = edge.begin();
         i != edge.end(); i++)
    {
        if (value==i->first.getvalue()){
            return i->second;
        }
    }
    return c;
}
void MapNode::removeNode(MapNode n){
    edge.erase(n);

}
void MapNode::addEdge(MapNode n, int weight){
    edge.insert({n,weight});
}

bool MapNode::operator==(MapNode n){
    return value==n.value;
}
