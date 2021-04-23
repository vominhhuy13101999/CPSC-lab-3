#include <unordered_map>
#include "MapNode.h"
#include <vector>


#ifndef _GRAPH_
#define _GRAPH_
// using namespace std;

// template<typename s, typename e>
class Graph
{
  public:
    std::vector<MapNode*> NodeList;

    void addNode(MapNode* n);
    void removeNode(MapNode* n);
    void setNodeValue(MapNode& n,std::string a);
    std::string getNodeValue(MapNode& n);
    
    void addEdge(MapNode& n,MapNode& n1, int weight);
    // void setEdge(MapNode& n,MapNode& n1, int weight)
    void removeEdge(MapNode& n,MapNode& n1);
	  int getEdgeValue(MapNode& n,MapNode& n1);

    std::vector<MapNode*> getNodes();
    void printAdjacentNodes(MapNode& n);
    bool AreConnected(MapNode& n,MapNode& n1);
    bool reachable(MapNode& n,MapNode& n1);

    bool HasCycles();

    bool InVector(MapNode* n,std::vector<MapNode*>& l);


    std::vector<MapNode*> fewestHops(MapNode& s,MapNode& e,std::vector<MapNode*>& bestl,std::vector<MapNode*> l);
    std::vector<MapNode*> shortestpath(MapNode& s,MapNode& e,std::vector<MapNode*>& bestl,std::vector<MapNode*> l, int& best, int weight);




};

#endif