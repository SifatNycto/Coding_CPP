#include <iostream>

struct Node{
    int data;
    Node*next;
};

void insert_beginning(Node*&ptr, int value);
void display(Node*ptr);

int main()
{
    Node*ptr = NULL;
    int n, value;
    std::cout << "Enter number of node: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter value " << i + 1 << ":";
        std::cin >> value;
        insert_beginning(ptr, value);
    }

    std::cout << std::endl << "Linkedlist: ";

    display(ptr);
    return 0;
}

void insert_beginning(Node*&ptr, int value){
    Node*newNode = new Node();  // creating node,, dynamically allocate memory
    newNode -> data = value;
    newNode -> next = ptr;
    ptr = newNode;
}

void display(Node*ptr){
    while (ptr != NULL)
    {
        std::cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    std::cout << "NULL\n";
}
