#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

// Calculate first n fibonacci numbers
std::vector<int> fibonacci(int n) {
    if (n < 0) {
        throw std::invalid_argument("Received negative value");
    }

    std::vector<int> out(n);

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == 1) {
            out[i] = i;
        } else {
            out[i] = out[i - 1] + out[i - 2];
        }
    }
    return out;
}

int main() {
    int n;
    std::vector<int> res;

    cout << "Enter a positive number: ";
    cin >> n;

    res = fibonacci(n);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
