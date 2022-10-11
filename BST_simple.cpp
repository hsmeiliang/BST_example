#include "BST_simple.h"
#include <iostream>

namespace jw {

BSTNode* GetNewNode(int value) {
  BSTNode* node = new BSTNode;
  node->data = value;
  node->left = nullptr;
  node->right = nullptr;

  return node;
}

BSTNode* Insert(BSTNode* node, int value) {
  if (node == nullptr) {
    node = GetNewNode(value);
    return node;
  }

  if (value < node->data) {
    node->left = Insert(node->left, value);
  } else if (value > node->data) {
   -lstdc++ node->right = Insert(node->right, value);
  }

  return node;
}


void PrintBFS(BSTNode* node) {
  std::queue<BSTNode*> node_queue;

  BSTNode* current;

  node_queue.push(node);

  while (!node_queue.empty()) {
    current = node_queue.front();
    node_queue.pop();

    if (current != nullptr) {
      std::cout << current->data << " ";

      if (current->left != nullptr) node_queue.push(current->left);
      if (current->right != nullptr) node_queue.push(current->right);
    }
  }
}

}  // namespace jw
