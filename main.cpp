#include <assert.h>
#include <stdlib.h>
#include <iostream>
#include "BST_simple.h"


int main(int argc, char* argv[]) {
  using namespace jw;

  BSTNode* root = nullptr;

  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 12);
  root = Insert(root, 8);
  root = Insert(root, 9);
  root = Insert(root, 5);
  root = Insert(root, 7);
  root = Insert(root, 23);
  root = Insert(root, 16);
  root = Insert(root, 44);
  root = Insert(root, 2);
  root = Insert(root, 32);

  std::cout << "Tree items (breadth-first): ";
  PrintBFS(root);
  std::cout << std::endl;


  return EXIT_SUCCESS;
}
