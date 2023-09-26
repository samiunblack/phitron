#include <iostream>
#include <vector>

using namespace std;

// Function to check if it's possible to create an expression equal to X
bool canCreateExpression(int N, int X, vector<int>& A, int currentSum, int index) {
    if (index == N) {
        return currentSum == X;
    }

    // Try adding the next number with a '+'
    if (canCreateExpression(N, X, A, currentSum + A[index], index + 1)) {
        return true;
    }

    // Try subtracting the next number with a '-'
    if (canCreateExpression(N, X, A, currentSum - A[index], index + 1)) {
        return true;
    }

    return false;
}

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Check if it's possible to create the expression
    if (canCreateExpression(N, X, A, A[0], 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
