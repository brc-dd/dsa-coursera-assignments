// Programmed by Divyansh Singh (brc-dd)

#include <algorithm>
#include <iostream>
#include <vector>

int MaxPairwiseProduct(const std::vector<int> &numbers) {
    int p1(0), p2(0), n1(0), n2(0);
    for (auto i : numbers)
        if (i >= 0) {
            if (i > p1) {
                p2 = p1;
                p1 = i;
            } else if (i > p2)
                p2 = i;
        } else {
            if (i < n1) {
                n2 = n1;
                n1 = i;
            } else if (i < n2)
                n2 = i;
        }
    return std::max(p1 * p2, n1 * n2);
} // O(n) time complexity ||| O(1) space complexity

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    std::cout << MaxPairwiseProduct(numbers) << "\n";
    return 0;
}
