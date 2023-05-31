#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (k = 1; k <= 2*i-1; k++) {
            cout << i;
        }
        cout << endl;
    }
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= n-i; j++) {
            cout << " ";
        }
        for (k = 1; k <= 2*i-1; k++) {
            cout << i;
        }
        cout << endl;
    }

    return 0;
}

