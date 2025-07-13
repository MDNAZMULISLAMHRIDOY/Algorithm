#include <iostream>
using namespace std;

const int MAX = 100;

double fractionalKnapsack(int value[], int weight[], int n, int capacity) {
    double ratio[MAX];
    int index[MAX];

    for (int i = 0; i < n; i++) {
        ratio[i] = (double)value[i] / weight[i];
        index[i] = i;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(index[i], index[j]);
            }
        }
    }

    double totalValue = 0.0;

    for (int i = 0; i < n && capacity > 0; i++) {
        int idx = index[i];

        if (weight[idx] <= capacity) {
            totalValue += value[idx];
            capacity -= weight[idx];
        } else {
            totalValue += value[idx] * ((double)capacity / weight[idx]);
            break;
        }
    }

    return totalValue;
}

int main() {
    int n;
    cout<<"Size of Array : ";
    cin>>n;

    cout<<"values : ";

    int values[n];

    for(int i=0;i<n;i++){
        cin>>values[i];
}

    int weight[n];
       cout<<"weight : ";

  for(int i=0;i<n;i++){
        cin>>weight[i];
    }

    int capacity;
    cout<<"Capacity : ";

    cin>>capacity;

    double maxVal = fractionalKnapsack(values, weight, n, capacity);
    cout << "Maximum value in knapsack: " << maxVal << endl;

    return 0;
}

