#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node * left;
    Node * right;
    Node(int val){
        data = val;
        left  = right = NULL;
    }
};

void printpreorder(Node* node)
{
    if (node == nullptr)
        return;

    cout << node->data << " ";
    // First recur on left subtree
    printpreorder(node->left);

    // Now deal with the node


    // Then recur on right subtree
    printpreorder(node->right);
}

// Driver code
int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // Function call
    cout << "preorder traversal of binary tree is: \n";
    printpreorder(root);

    return 0;
}

