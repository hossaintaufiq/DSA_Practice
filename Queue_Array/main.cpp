#include <iostream>
#include <string>
#include "queuetype.h"

using namespace std;

// Function to generate binary numbers using a queue
void generateBinaryNumbers(int n) {
    QueueType<string> queue(100); // Create a queue with sufficient size
    queue.Enqueue("1");

    for (int i = 0; i < n; i++) {
        string current;
        queue.Dequeue(current);
        cout << current << endl;

        queue.Enqueue(current + "0");
        queue.Enqueue(current + "1");
    }
}

int main() {
    try {
        // Create a queue of integers of size 5
        QueueType<int> queue(5);

        // Check if the queue is empty
        cout << (queue.IsEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;

        // Enqueue four items
        queue.Enqueue(5);
        queue.Enqueue(7);
        queue.Enqueue(4);
        queue.Enqueue(2);

        // Check if the queue is empty
        cout << (queue.IsEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;

        // Check if the queue is full
        cout << (queue.IsFull() ? "Queue is Full" : "Queue is not Full") << endl;

        // Enqueue another item
        queue.Enqueue(6);

        // Print the queue values
        int value;
        cout << "Queue values: ";
        for (int i = 0; i < 5; i++) {
            queue.Dequeue(value);
            cout << value << " ";
            queue.Enqueue(value); // Re-enqueue to maintain the queue
        }
        cout << endl;

        // Check if the queue is full
        cout << (queue.IsFull() ? "Queue is Full" : "Queue is not Full") << endl;

        // Attempt to enqueue another item
        queue.Enqueue(8);

        // Dequeue two items
        queue.Dequeue(value);
        queue.Dequeue(value);

        // Print the queue values again
        cout << "Queue values after dequeuing two items: ";
        for (int i = 0; i < 3; i++) {
            queue.Dequeue(value);
            cout << value << " ";
            queue.Enqueue(value); // Re-enqueue to maintain the queue
        }
        cout << endl;

        // Dequeue three items
        queue.Dequeue(value);
        queue.Dequeue(value);
        queue.Dequeue(value);

        // Check if the queue is empty
        cout << (queue.IsEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;

        // Attempt to dequeue from an empty queue
        queue.Dequeue(value);

        // Generate binary numbers
        int n;
        cout << "Enter the value of n to generate binary numbers: ";
        cin >> n;
        generateBinaryNumbers(n);

    } catch (const FullQueue&) {
        cout << "Queue Overflow" << endl;
    } catch (const EmptyQueue&) {
        cout << "Queue Underflow" << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
