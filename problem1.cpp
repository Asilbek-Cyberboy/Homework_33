#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int space = 0; space < (n - i) * 2; space++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}