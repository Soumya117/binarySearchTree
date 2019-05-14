#include "BinaryTree.h"
#include <iostream>

namespace binaryTree
{
    void BinaryTree::createTree(const std::vector<int> &input) {
        for (const auto &item : input) {
            //check for empty tree
            if (!root) {
                root = createNode(item);
            } else {
                auto node = root;
                createSubTree(node, item);
            }
        }
    }

    void BinaryTree::displayInOrder() {
        std::cout << "Printing InOrder...\n";
        auto node = root;
        printInOrder(node);
        std::cout << std::endl;
    }

    void BinaryTree::displayPreOrder() {
        std::cout << "Printing Pre Order..\n";
        auto node = root;
        printPreOrder(node);
        std::cout << std::endl;
    }

    void BinaryTree::displayPostOrder() {
        std::cout << "Printing Post Order...\n";
        auto node = root;
        printPostOrder(node);
        std::cout << std::endl;
    }

    BinaryTree::Node *BinaryTree::createNode(const int &data) {
        auto node = new Node();
        node->data = std::move(data);
        node->left = nullptr;
        node->right = nullptr;
        return node;
    }

    void BinaryTree::addLeftChild(Node *node, const int &data) {
        if (node->data < data) return;

        if (node->left) {
            createSubTree(node->left, data);
        } else {
            auto left_child = createNode(data);
            node->left = left_child;
        }
    }

    void BinaryTree::addRightChild(Node *node, const int &data) {
        if (node->data > data) return;

        if (node->right) {
            createSubTree(node->right, data);
        } else {
            auto right_child = createNode(data);
            node->right = right_child;
        }
    }

    void BinaryTree::createSubTree(Node *node, const int &data) {
        addLeftChild(node, data);
        addRightChild(node, data);
    }

    void BinaryTree::printInOrder(Node *node) {
        if (node->left)
            printInOrder(node->left);
        std::cout << node->data << " ";
        if (node->right)
            printInOrder(node->right);
    }

    void BinaryTree::printPreOrder(Node *node) {
        std::cout << node->data << " ";
        if (node->left)
            printPreOrder(node->left);
        if (node->right)
            printPreOrder(node->right);
    }

    void BinaryTree::printPostOrder(Node *node) {
        if (node->left)
            printPostOrder(node->left);
        if (node->right)
            printPostOrder(node->right);
        std::cout << node->data << " ";
    }
}