#include <vector>

namespace binaryTree {
    class BinaryTree {

    private:
        struct Node {
            int data;
            Node *left;
            Node *right;
        };

        Node *root;

        Node *createNode(const int& data);
        void addLeftChild(Node *, const int&);
        void addRightChild(Node *, const int&);
        void createSubTree(Node* node, const int& data);

        void printInOrder(Node* node);
        void printPreOrder(Node* node);
        void printPostOrder(Node* node);

    public:
        void createTree(const std::vector<int> &input);

        void displayInOrder();
        void displayPreOrder();
        void displayPostOrder();
    };
}
