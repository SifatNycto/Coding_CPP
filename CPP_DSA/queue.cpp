#include <iostream>

class circularQueue {
    public:
        int *arr;
        int size;
        int front, rear;

        circularQueue(int s) 
        {
            size = s;
            arr = new int[size];
            front = rear = -1;
        }

        void enqueue(int value)
        {
            if ((rear + 1) % size == front)
            {
                std::cout << std::endl << "Queue is full";
                return;
            }

            if (front == -1) front = rear = 0;

            else rear = (rear + 1) % size;
            
            arr[rear] = value;

            std::cout << std::endl << "Value " << value << " Inserted";
        }

        void dequeue()
        {
            if (front == -1)
            {
                std::cout << std::endl << "Queue is empty";
                return;
            }

            std::cout << std::endl << arr[front] << "deleted";
            if (front == rear)
            {
                front = rear = -1;
            }

            else
            {
                front = (front + 1) % size;
            }
        }


        void display()
        {
            if (front == -1)
            {
                std::cout << std::endl << "queue is empty";
                return;
            }

            std::cout << std::endl << "Queue: ";
            
            int i = front;
            while(true)
            {
                std::cout << arr[i] << " ";
                if (i == rear) break;

                i = (i + 1) % size;
            }
        }

        ~circularQueue()
        {
            delete[] arr;
        }
};



int main()
{
    int n;
    std::cout << std::endl << "Enter Queue size: ";
    std::cin >> n;

    circularQueue q(n);
    
    int choice, value;

    do
    {
        std::cout << std::endl;
        
        std::cout << "\n1. Enqueue";
        std::cout << "\n2. Dequeue";
        std::cout << "\n3. Display";
        std::cout << "\n4. Exit";
        std::cout << std::endl << "Enter your choice (1/2/3/4): ";
        std::cin >> choice;

        switch(choice)
        {
            case 1: std::cout << "Enter values: ";
                    std::cin >> value;
                    q.enqueue(value);
                    break;
            
            case 2: q.dequeue();
                    break;

            case 3: q.display();
                    break;

            case 4: std::cout << "Program ended";
                    break;

            default: std::cout << "Invalid choice!";
        }
    } while(choice != 4);


    return 0;
}