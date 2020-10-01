#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

bool helper(vector<int> &A, int subset[3], vector<bool> &taken, int subsetSum,
            int l, int r) {
    if (subset[l] == subsetSum) {
        if (l == 1)
            return true;
        return helper(A, subset, taken, subsetSum, l + 1, A.size() - 1);
    }
    for (int i = r; i; --i)
        if (not taken[i] and subset[l] + A[i] <= subsetSum) {
            taken[i] = true;
            subset[l] += A[i];
            if (helper(A, subset, taken, subsetSum, l, i - 1))
                return true;
            taken[i] = false;
            subset[l] -= A[i];
        }
    return false;
}

bool partition3(vector<int> &A) {
    int n = A.size();
    if (n < 3)
        return false;
    int sum = std::accumulate(A.begin(), A.end(), 0);
    if (sum % 3 != 0)
        return false;
    int subsetSum = sum / 3;
    int subset[3] = {0};
    vector<bool> taken(n);
    subset[0] = A[n - 1];
    taken[0]  = true;
    return helper(A, subset, taken, subsetSum, 0, n - 1);
}

int main() {
    int n;
    std::cin >> n;
    vector<int> A(n);
    for (size_t i = 0; i < A.size(); ++i) {
        std::cin >> A[i];
    }
    std::cout << partition3(A) << '\n';
}
