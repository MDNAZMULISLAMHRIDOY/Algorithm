#include <bits/stdc++.h>

using namespace std;

int fibonacciRecursive(int n) {
    if (n <= 1)
    {
        return n;
    }
    else{

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);

    }
}

int main() {

   cout<<"Input n: ";

    int n;
    cin>>n;

    cout << "Fibonacci(" << n << ") by Recursion: " << fibonacciRecursive(n) << endl;
    return 0;
}
