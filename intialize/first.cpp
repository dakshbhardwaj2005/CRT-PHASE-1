#include <iostream>
using namespace std;

int main() {
    int n;
    int a = 0, b = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
    } else {
        cout << "Fibonacci sequence: ";

        for (int i = 1; i <= n; i++) {
            cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
    }

    return 0;
}