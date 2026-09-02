#include <iostream>

class Node {
    public:
        int data;
        Node *left;
        Node *right;

        Node(int value) {
            data=value;
            left = NULL;
            left = NULL;
        }

};

class BST {
    public:
        Node *root;

        BST() {
            root = NULL;
        }

        Node *insert(Node *root, int value) {
            if (root == NULL) {
                return new Node(value);
            }

            if (value < root->data) {
                root->left = insert(root->left, value);
            }
            
            else {
                root->right = insert(root->right, value);
            }

            return root;
        }


        void inorder(Node *root) {
            if (root != NULL) {
                inorder(root->left);
                std::cout << root->data << " ";
                inorder(root->right);
            }
        }

        void preorder(Node *root) {
            if (root != NULL) {
                std::cout << root->data << " ";
                preorder(root->left);
                preorder(root->right);
            }
        }

        void postorder(Node *root) {
            if (root != NULL) {
                postorder(root->left);
                postorder(root->right);
                std::cout << root->data << " ";
            }
        }
};


int main()
{
    BST tree;

    int n, value;

    std::cout << "\nEnter number of elements: ";
    std::cin >> n;

    std::cout << "\nEnter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> value;
        tree.root = tree.insert(tree.root, value);
    }

    std::cout << "\nInorder traversal: ";
    tree.inorder(tree.root);

    std::cout << "\nPreorder traversal: ";
    tree.preorder(tree.root);

    std::cout << "\nPostorder traversal: ";
    tree.postorder(tree.root);
    
    return 0;
}