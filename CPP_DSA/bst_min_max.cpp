#include <iostream>
#include <string>

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        
        Node(int value)
        {
            data = value;
            left = NULL;
            right = NULL;

        }
};


// Insert node in BST
Node* insert(Node* root, int value)
{
    if (root == NULL)
        return new Node(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}


// Find minimum value node (leftmost node)
Node* findMin(Node* root)
{
    if (root == NULL)
        return NULL;
    while (root->left != NULL)
        root = root->left;
    return root;
}


// Find maximum value node (rightmost node)
Node* findMax(Node* root)
{
    if (root == NULL)
        return NULL;
    while (root->right != NULL)
        root = root->right;
    return root;
}


int main()
{
    Node* root = NULL;
    int n, value;
    
    std::cout << "\nEnter number of nodes: ";
    std::cin >> n;

    std::cout << "\nEnter values: ";
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> value;
        root = insert(root, value);
    }

    Node* minNode = findMin(root);
    Node* maxNode = findMax(root);

    if (minNode != NULL)
        std::cout << "\nMinimum value = " << minNode->data;
    if (maxNode != NULL)
        std::cout << "\nMaximum value = " << maxNode->data;
    else
        std::cout << "\nTree is empty";
    
    return 0;
}