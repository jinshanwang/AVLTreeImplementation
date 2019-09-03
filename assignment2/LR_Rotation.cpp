#include <iostream>
#include <algorithm>
#include "AVLtree.h"
#include "node.h"
using namespace std;


Node* AVLtree::LR_Rotation(Node *node){
  node->left=RR_Rotation(node->left);
  return LL_Rotation(node);
}
