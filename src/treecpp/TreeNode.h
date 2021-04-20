
#include <string>
#include <vector>
#ifndef __TREENODE_H__
#define __TREENODE_H__

// #include "Comparator.h"
// using namespace std;
template<typename E>
    class TreeNode
    {

        public:
            // E data;
            // std::vector<TreeNode<E>>* children;
            // Comparator* C; 
            TreeNode(  E data) ;
            void addChildren(TreeNode N);
            void remove(TreeNode N);
    };

#endif
