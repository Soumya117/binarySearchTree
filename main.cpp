#include "BinaryTree.h"

using namespace binaryTree;

int main() {

    auto binaryTree = BinaryTree();

    binaryTree.createTree({10, 4, 7, 13, 20});
    binaryTree.displayInOrder();
    binaryTree.displayPreOrder();
    binaryTree.displayPostOrder();

    return 0;
}