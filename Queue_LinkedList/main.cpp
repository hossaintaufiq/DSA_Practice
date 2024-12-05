#include "queuetype.cpp"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the minimum number of coins
int minCoins(vector<int>& coins, int target) {
    sort(coins.rbegin(), coins.rend()); // Sort coins in descending order
    int count = 0;

    for (int coin : coins) {
        while (target >= coin) {
            target -= coin;
            count++;
        }
    }

    return count;
}

int main() {
    int n, target;
    cout << "Enter the number of coin types: ";
    cin >> n;

    vector<int> coins(n);
    cout << "Enter the coin values: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    cout << "Enter the target amount: ";
    cin >> target;

    try {
        QueueType<int> queue;
        for (int coin : coins) {
            queue.Enqueue(coin);
        }

        int result = minCoins(coins, target);
        cout << "Minimum number of coins needed: " << result << endl;
    } catch (FullQueue) {
        cout << "Queue is full." << endl;
    } catch (EmptyQueue) {
        cout << "Queue is empty." << endl;
    }

    return 0;
}
