#include <iostream>
#include <string>

class myStack {
    
    int *arr;       
    int capacity;   
    int top;        

    public:

        myStack(int cap) {
            capacity = cap;
            arr = new int[capacity];
            top = -1;
        }

        void push(int x) {
            if (top == capacity - 1) {
                std::cout << "Stack Overflow\n";
                return;
            }
            arr[++top] = x;
        }

        int pop() {
            if (top == -1) {
                std::cout << "Stack Underflow\n";
                return -1;
            }
            return arr[top--];
        }

        int peek() {
            if (top == -1) {
                std::cout << "Stack is Empty\n";
                return -1;
            }
            return arr[top];
        }
        
        bool isEmpty() {
            return top == -1;
        }

        bool isFull() {
            return top == capacity - 1;
        }
};

int main() {
    myStack st(4);

    st.push(2);
    st.push(4);
    st.push(6);
    // st.push(10);

    std::cout << "Popped: " << st.pop() << "\n";
    std::cout << "Top element: " << st.peek() << "\n";
    std::cout << "Is stack empty: " << (st.isEmpty() ? "Yes" : "No") << "\n";
    std::cout << "Is stack full: " << (st.isFull() ? "Yes" : "No") << "\n";

    return 0;
}









// For Push: check does Top < stack_size - 1 or not
// For Pop: check does Top < 0 or not