#include <unordered_map>
#include "MapNode.h"
#include <vector>
#include "graph.h"
#include <algorithm>
#include <iostream>


void Graph::addNode(MapNode* n){
    NodeList.push_back(n);
}
void Graph::removeNode(MapNode* n){
    for (auto it = NodeList.begin(); it != NodeList.end(); ) {
        if ((*it)==n ) {
            it = NodeList.erase(it);
            break;
        } else {
            ++it;
        }
    }
}





void Graph::setNodeValue(MapNode& n,std::string a){
    n.setValue(a);
}
std::string Graph::getNodeValue(MapNode& n){
    return n.getvalue();
}

void Graph::addEdge(MapNode& n,MapNode& n1, int weight){
    n.addEdge(&n1,weight);
    // n1.addEdge(&n,weight);
}
void Graph::removeEdge(MapNode& n,MapNode& n1){
    n.removeEdge(&n1);
    // n1.removeEdge(n);
}
int Graph::getEdgeValue(MapNode& n,MapNode& n1){
    
    return  n.distance(&n1);
}

std::vector<MapNode*> Graph::getNodes(){
    return NodeList;
}
void Graph::printAdjacentNodes(MapNode& n){
    std::cout<<n.value<<" Node adjacent to: "<<std::endl;
    for (auto it = n.edge.begin(); it != n.edge.end(); ++it) {
        if (((it)->first)->edge[(&n)]!=0){
            std::cout<<it->first->value<<std::endl;
        }
        }
    }
    
bool Graph::HasCycles(){
    MapNode& n=**(NodeList.begin());
    for (auto it = n.edge.begin(); it != n.edge.end(); ++it) {
        if (((it)->first)->edge[(&n)]!=0){
            return true;
        }
        }
    return false;
}

bool Graph::AreConnected(MapNode& n,MapNode& n1){
    return getEdgeValue(n,n1)!=0;
}

bool Graph::InVector(MapNode* key,std::vector<MapNode*>& v){
    if (std::find(v.begin(), v.end(), key) != v.end()) {
        return true;
    }
    else {
        return false;
    }
}
bool Graph::reachable(MapNode& n,MapNode& n1){
    
    std::vector<MapNode*> l;
    std::vector<MapNode*> bestl;
    std::vector<MapNode*> k=fewestHops( n, n1,bestl,l);

    return k.size()>0;
}



// void DFS();

std::vector<MapNode*> Graph::fewestHops(MapNode& n,MapNode& n1,std::vector<MapNode*>& bestl,std::vector<MapNode*> l){
    l.push_back(&n);
    std::cout<<bestl.size()<<std::endl;
    if (n.getvalue()==n1.getvalue()){
        
        if (bestl.size()==0 || l.size()<bestl.size()){
            bestl=l;
            return bestl;
        }
        
    }
    else{

        for (auto it = n.edge.begin(); it != n.edge.end();++it ) {
            if (InVector(it->first,l)){
                continue;
            }
            fewestHops(*it->first,n1,bestl,l);       
    }
        
    }
    return bestl;
}
std::vector<MapNode*> Graph::shortestpath(MapNode& n,MapNode& n1,std::vector<MapNode*>& bestl,std::vector<MapNode*> l,int& best,int weight){
    l.push_back(&n);

    if (n.getvalue()==n1.getvalue()){
        
        if (bestl.size()==0 || weight<best){
            bestl=l;
            best=weight;
        }        
    }
    else{

        for (auto it = n.edge.begin(); it != n.edge.end();++it ) {
            if (InVector(it->first,l)){
                continue;
            }
            weight+=it->second;
            shortestpath(*it->first,n1,bestl,l,best,weight);
            weight-=it->second;         
    }

    
    }
    return bestl;
    }