#include <iostream>
#include <algorithm>
#include "AVLtree.h"
#include "node.h"
using namespace std;



// tree insertion implementation
void AVLtree::Aint(int input) {
  // FIRST STEP
  Node *current;  //declare a current to store the current node
  Node *previous; //declare a previous node to store the parent node

  // case 1 : when this is a empty tree;
  if (isEmpty()) {

    previous=Root;
  }
  // case 2 : when this is not a empty tree
  else{
    if (BinarySearch(Root,input)!=NULL) {
      return;
    }
    current=Root;

    while (current!=NULL) {
      previous=current;
      if (current->data > input) {
        current=current->left;
      }
      else{
        current=current->right;
      }
    }
  }
  // SECOND STEP
  //create a new node and insert input here
    current=createNode(input);
  //THIRD STEP:
  // node connection
    connectTwoNode(previous,current, input);
  // FINAL STEP:
  //we need balance the tree here
      Balance_Keeper(current);
}
