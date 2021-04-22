#include <unordered_map>
#include <string>
#include "Node.h"
#ifndef _MAP_NODE_
#define _MAP_NODE_

// using namespace std;


class MapNode:public Node<std::string,int>
// class MapNode
{
  public:
    std::string value;
	std::string getvalue();
	std::unordered_map<MapNode,int> edge;
    MapNode(std::string value);
	int distance() const;
	void removeNode(MapNode n);
	void addEdge(MapNode n, int weight);
    bool operator==(MapNode n);

};

#endif