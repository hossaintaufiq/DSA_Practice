#include <iostream>
#include "pqtype.h"

int main() {
    PQType<int> pq(15);

    // Step 1: Check if the queue is empty
    if (pq.IsEmpty())
        std::cout << "Queue is empty\n";
    else
        std::cout << "Queue is not empty\n";

    // Step 2: Insert ten items
    int items[] = {4, 9, 2, 7, 3, 11, 17, 0, 5, 1};
    for (int item : items) {
        pq.Enqueue(item);
    }

    // Step 3: Check if the queue is empty
    if (pq.IsEmpty())
        std::cout << "Queue is empty\n";
    else
        std::cout << "Queue is not empty\n";

    // Step 4: Dequeue and print the values
    int dequeuedValue;
    pq.Dequeue(dequeuedValue);
    std::cout << dequeuedValue << "\n";

    pq.Dequeue(dequeuedValue);
    std::cout << dequeuedValue << "\n";

    return 0;
}
