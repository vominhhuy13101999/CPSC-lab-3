#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "MapNode.h"
#include "graph.h"

// TreeNodeE& buildtree(){
    
// }

int main(){
    MapNode n1("MIT");
    MapNode n2("Havard");
    MapNode n3("Yale");
    MapNode n4("Uconn");
    MapNode n5("Upenn");
    MapNode n6("UCLA");
    MapNode n7("BostonU");
    MapNode n8("BostonC");
    MapNode n9("FairU");
    MapNode n10("NYU");
    MapNode n11("Columbia");
    MapNode n12("CUNY");
    MapNode n13("Baruch");
    MapNode n14("Villanova");
    MapNode n15("Twin");
    MapNode n16("HongKongU");
    MapNode n17("Toronto");
    MapNode n18("Malitoba");
    MapNode n19("Uchicago");
    MapNode n20("Princeton");





    
    // MapNode M("NewYork");


    Graph a;
    a.addNode(&n1);
    a.addNode(&n2);
    a.addNode(&n3);
    a.addNode(&n4);
    a.addNode(&n5);
    a.addNode(&n6);
    a.addNode(&n7);
    a.addNode(&n8);
    a.addNode(&n9);
    a.addNode(&n10);
    a.addNode(&n11);
    a.addNode(&n12);
    a.addNode(&n13);
    a.addNode(&n14);
    a.addNode(&n15);
    a.addNode(&n16);
    a.addNode(&n17);
    a.addNode(&n18);
    a.addNode(&n19);
    a.addNode(&n20);



    a.addEdge(n16 , n8, 25);
    a.addEdge(n8 , n16, 25);
    a.addEdge(n12 , n4, 56);
    a.addEdge(n4 , n12, 56);
    a.addEdge(n8 , n6, 39);
    a.addEdge(n6 , n8, 39);
    a.addEdge(n8 , n4, 47);
    a.addEdge(n4 , n8, 47);
    a.addEdge(n6 , n2, 41);
    a.addEdge(n2 , n6, 41);
    a.addEdge(n2 , n14, 51);
    a.addEdge(n14 , n2, 51);
    a.addEdge(n2 , n4, 36);
    a.addEdge(n4 , n2, 36);
    a.addEdge(n4 , n10, 47);
    a.addEdge(n10 , n4, 47);
    a.addEdge(n2 , n10, 70);
    a.addEdge(n10 , n2, 70);
    a.addEdge(n10 , n3, 32);
    a.addEdge(n3 , n10, 32);
    a.addEdge(n4 , n3, 60);
    a.addEdge(n3 , n4, 60);
    a.addEdge(n2 , n3, 70);
    a.addEdge(n3 , n2, 70);
    a.addEdge(n2 , n1, 75);
    a.addEdge(n1 , n2, 75);
    a.addEdge(n4 , n1, 80);
    a.addEdge(n1 , n4, 80);
    a.addEdge(n3 , n1, 36);
    a.addEdge(n1 , n3, 36);
    a.addEdge(n5 , n1, 32);
    a.addEdge(n1 , n5, 32);
    a.addEdge(n7 , n5, 20);
    a.addEdge(n5 , n7, 20);
    a.addEdge(n7 , n3, 25);
    a.addEdge(n3 , n7, 25);
    a.addEdge(n13 , n10, 30);
    a.addEdge(n10 , n13, 30);
    a.addEdge(n9 , n13, 40);
    a.addEdge(n13 , n9, 40);
    a.addEdge(n9 , n7, 20);
    a.addEdge(n7 , n9, 20);



    cout<<"------------------------------------"<<endl;
    cout<<a.getNodeValue(n1)<<endl;
    cout<<a.getNodeValue(n5)<<endl;
    cout<<a.getNodeValue(n9)<<endl;
    cout<<a.getNodeValue(n13)<<endl;


    cout<<"------------------------------------"<<endl;


     for (auto it = a.NodeList.begin(); it != a.NodeList.end(); ++it) {
         a.printAdjacentNodes(**it);
        cout<<"------------------------------------"<<endl;

        }
    


    cout<<"------------------------------------"<<endl;

    cout<<a.AreConnected(n6,n5)<<endl;
    cout<<a.AreConnected(n8,n16)<<endl;
    cout<<"------------------------------------"<<endl;

    cout<<a.HasCycles()<<endl;
    // cout<<a.reachable(n6,n8)<<endl;
    cout<<"------------------------------------"<<endl;


    // vector<MapNode*> l1;
    // vector<MapNode*> bestl1;
    // int b;
    // int b1;
    // vector<MapNode*> k1=a.shortestpath( n6, n8,bestl1,l1,b,b1);


    vector<MapNode*> l;
    vector<MapNode*> bestl;
    vector<MapNode*> k=a.fewestHops( n7, n13,bestl,l);
    cout<<k.size()<<endl;

    for (auto it = k.begin(); it != k.end(); ++it) {
         cout<<(**it).value<<endl;

        }



    vector<MapNode*> l1;
    vector<MapNode*> bestl1;
    int b;
    int b1;
    vector<MapNode*> k1=a.shortestpath( n7, n13,bestl1,l1,b,b1);
    cout<<k1.size()<<endl;





}