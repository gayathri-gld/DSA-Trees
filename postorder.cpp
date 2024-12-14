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

void printpostorder(Node* node)
{
    if (node == nullptr)
        return;

    // First recur on left subtree
    printpostorder(node->left);
    printpostorder(node->right);
    // Now deal with the node
    cout << node->data << " ";

    // Then recur on right subtree

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
    cout << "Postorder traversal of binary tree is: \n";
    printpostorder(root);

    return 0;
}

