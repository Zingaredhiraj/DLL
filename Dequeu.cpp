#include <iostream>
#define MAX 10
using namespace std;

class Deque {
    int data[MAX];
    int front, rear;

public:
    // Constructor to initialize front and rear
    Deque() {
        front = -1;
        rear = -1;
    }

    // Insert at front
    void insert_front(int n) {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
            cout << "Queue is full\n";
        } else if (front == -1) {
            front = rear = 0;
            data[front] = n;
        } else if (front == 0) {
            cout << "Insertion at front not possible\n";
        } else {
            front = front - 1;
            data[front] = n;
        }
        display();
    }

    // Insert at rear
    void insert_rear(int n) {
        if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
            cout << "Queue is full\n";
        } else if (front == -1) {
            front = rear = 0;
            data[rear] = n;
        } else if (rear == MAX - 1) {
            cout << "Insertion at rear not possible\n";
        } else {
            rear = rear + 1;
            data[rear] = n;
        }
        display();
    }

    // Delete from front
    void delete_front() {
        if (front == -1) {
            cout << "Queue is empty\n";
        } else if (front == rear) {
            cout << "Data deleted is: " << data[front] << endl;
            front = rear = -1;
        } else {
            cout << "Data deleted is: " << data[front] << endl;
            front = front + 1;
        }
        display();
    }

    // Delete from rear
    void delete_rear() {
        if (front == -1) {
            cout << "Queue is empty\n";
        } else if (front == rear) {
            cout << "Data deleted is: " << data[rear] << endl;
            front = rear = -1;
        } else {
            cout << "Data deleted is: " << data[rear] << endl;
            rear = rear - 1;
        }
        display();
    }

    // Display the deque
    void display() {
        if (front == -1) {
            cout << "Deque is empty\n";
            return;
        }
        cout << "Deque elements: ";
        for (int i = front; i <= rear; i++) {
            cout << data[i] << " ";
        }
        cout << "\n";
    }
};

// Main function to test the deque
int main() {
    Deque d;

    // Sample insertions
    d.insert_rear(14);
    d.insert_rear(5);
    d.insert_front(7);
    d.insert_front(8);
    
    // Deletions
    d.delete_rear();
    d.delete_front();
    
    // Final display
    d.display();

    return 0;
}
//C:\Users\Student\New folder\Dequeu.cpp