#include <iostream>
#include <algorithm>
#include "AVLtree.h"
#include "node.h"
using namespace std;


Node* AVLtree::BinarySearch(Node *node, int value){

while (node!=NULL && value!=node->data) {
  if (value>node->data) {
    node=node->right;
  }
  else{
    node=node->left;
  }
}
return node;
}
