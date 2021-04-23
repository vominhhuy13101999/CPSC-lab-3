

#include <unordered_map>
#include <string>
#ifndef _NODE_
#define _NODE_
// using namespace std;

template<typename s, typename e>
class Node
{
  public:
    s value;
	s getvalue();
	// Node();
	std::unordered_map<Node*,e> edge;
	void printEdge();
	e distance(Node* n) const;
	void removeEdge(Node<s,e>* n);
	void addEdge(Node* n, e weight);
	// bool operator==(Node<s,e>* n);

};

#endif