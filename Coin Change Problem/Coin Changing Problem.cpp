#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void coinChangeGreedy(vector<int> coins, int amount) {
    // Sort coins in descending order
    sort(coins.rbegin(), coins.rend());

    int count = 0;
    vector<int> usedCoins;

    for (int coin : coins) {
        while (amount >= coin) {
            amount -= coin;
            count++;
            usedCoins.push_back(coin);
        }
    }

        cout << "Minimum coins needed: " << count << endl;
        cout << "Coins used: ";
        for (int c : usedCoins) {
            cout << c << " ";
        }
        cout << endl;
}

int main() {
    vector<int> coins = {1, 5, 10, 25};
    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    coinChangeGreedy(coins, amount);

    return 0;
}
