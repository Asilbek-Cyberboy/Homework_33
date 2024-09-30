#include <iostream>
using namespace std;
int main() {
    int N, A, B, sum = 0;
    cin >> N >> A >> B;
    for (int i = 1; i <= N; i++) {
        int sumdigit = 0;
        int temp = i;
        while (temp > 0) {
            sumdigit += temp % 10;
            temp /= 10;
        }
        if (sumdigit >= A && sumdigit <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}