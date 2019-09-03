#include <iostream>
#include <algorithm>
#include "AVLtree.h"
#include "node.h"
using namespace std;


bool AVLtree::isEmpty(){
  if (Root==NULL) {
    return true;
  }
  return false;
}
