#include <bits/stdc++.h>

using namespace std;

int coinRow(const vector<int>& coins, int n) {
    if (n <= 0) return 0;
    if (n == 1) return coins[0];
    return max(coinRow(coins, n - 1), coinRow(coins, n - 2) + coins[n - 1]);
}

int main() {

    int size;
    cout<<"Number of Coins : ";
    cin>>size;
     vector<int> coins;

    cout<<"Input Coins : ";

    for(int i=0;i<size;i++){

        int v;
        cin>>v;

        coins.push_back(v);
    }

    int result = coinRow(coins, coins.size());
    cout << "Max value by Recursion: " << result << endl;
    return 0;
}


