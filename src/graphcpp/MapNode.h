#include <unordered_map>
#include <string>
#include "Node.h"
#ifndef _MAP_NODE_
#define _MAP_NODE_

// using namespace std;


// class MapNode:public Node<std::string,int>
// class MapNode;
class MapNode
{
  public:
    std::string value;
	std::string getvalue();
	std::unordered_map<MapNode*,int> edge;

    void printEdge();
    MapNode(std::string value);
	int distance(MapNode* n) const;
	void removeEdge(MapNode* n);
	void addEdge(MapNode* n, int weight);
    void setValue(std::string a);
    
    // void setEdgeValue(int a);
    
    // bool operator==(MapNode n);

};

#endif