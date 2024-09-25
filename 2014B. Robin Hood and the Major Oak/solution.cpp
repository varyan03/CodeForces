#include <iostream>
using namespace std;

int oddn(const int n) {
    if (n % 2 == 0) {
        return n / 2;
    } 
    return n / 2 + 1;
    
}

int main() {
    int t = 1;
    cin >> t;  // Input for number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k;  // Input values for n and k
        const int leaves = oddn(n) - oddn(n - k);
        cout << (leaves % 2 == 0 ? "Yes" : "No") << "\n";  // Output based on the condition
    }
    return 0;
}
