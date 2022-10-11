#include <queue>

#ifndef PROJECT_BINARY_SEARCH_TREE_H
#define PROJECT_BINARY_SEARCH_TREE_H

namespace jw {

struct BSTNode {
  int data;
  BSTNode* left;
  BSTNode* right;
};

// Returns a new node for our BST
BSTNode* GetNewNode(int value);
BSTNode* Insert(BSTNode* node, int value);

// Print out the items in the tree in level order
void PrintBFS(BSTNode* node);

}  // namespace jw

#endif  // PROJECT_BINARY_SEARCH_TREE_H
