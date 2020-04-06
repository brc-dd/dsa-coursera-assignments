# Solved Assignments of Coursera's DSA Specialization

This repository contains the solved assignments of [Data Structures and Algorithms Specialization](https://www.coursera.org/specializations/data-structures-algorithms). Each solution is written in C++14.

Each of the file is tested to compile successfully on `g++ 7.4.0` with the flags as mentioned in the following command:

```bash
g++ -pipe -O2 -std=c++14 <filename> -lm
```

**Disclaimer:** If you are enrolled in any of the courses of this specialization, please strictly follow the [Coursera Honor Code](https://learner.coursera.help/hc/en-us/articles/209818863-Coursera-Honor-Code). The sole motive of publishing this repository publicly was to provide you with **some reference**. Please view the code **only** when you are really struck at a problem, and that too after performing [stress testing](https://www.coursera.org/lecture/algorithmic-toolbox/stress-test-implementation-Bskph).

**Note:** While doing these courses I was focussing much on my competitive coding skills rather than the developmental ones. Consequently, I have used many tricks, macro definitions and C++ features (and that too without great formatting and comments) which may confuse a newbie. I don't recommend using all of these tricks everywhere, they are included here because it is a good learning experience. You can go and research about each trick. And in the end you can also design a template for yourself if you want to continue with C++14/C++17 while giving competitions. The code present here is not much ideal. In some places, instead of designing and implementing an algorithm myself I have used standard STL functions and also have took implementations of certain functions directly from the Boost library. I have tried my best to give minimal code along with best possible (time and space) complexity. At many places code can be made more space efficient by using lower level data structures instead of C++ containers. Anyone who wants to enhance the codes in any terms is most welcomed!

## Course 1. Algorithmic Toolbox

### [Week 1. Programming Challenges](/algorithmic_toolbox/programming_challenges/assign.pdf)

- [Sum of Two Digits](/algorithmic_toolbox/programming_challenges/APlusB.cpp)
- [Maximum Pairwise Product](/algorithmic_toolbox/programming_challenges/max_pairwise_product.cpp)

### [Week 2. Algorithmic Warm-up](/algorithmic_toolbox/algorithmic_warmup/assign.pdf)

- [Fibonacci Number](/algorithmic_toolbox/algorithmic_warmup/fibonacci.cpp)
- [Last Digit of a Large Fibonacci Number](/algorithmic_toolbox/algorithmic_warmup/fibonacci_last_digit.cpp)
- [Greatest Common Divisor](/algorithmic_toolbox/algorithmic_warmup/gcd.cpp)
- [Least Common Multiple](/algorithmic_toolbox/algorithmic_warmup/lcm.cpp)
- [Fibonacci Number Again](/algorithmic_toolbox/algorithmic_warmup/fibonacci_huge.cpp)
- [Last Digit of the Sum of Fibonacci Numbers](/algorithmic_toolbox/algorithmic_warmup/fibonacci_sum_last_digit.cpp)
- [Last Digit of the Sum of Fibonacci Numbers Again](/algorithmic_toolbox/algorithmic_warmup/fibonacci_partial_sum.cpp)
- [Last Digit of the Sum of Squares of Fibonacci Numbers](/algorithmic_toolbox/algorithmic_warmup/fibonacci_sum_squares.cpp)

### [Week 3. Greedy Algorithms](/algorithmic_toolbox/greedy_algorithms/assign.pdf)

- [Money Change](/algorithmic_toolbox/greedy_algorithms/change.cpp)
- [Maximum Value of the Loot](/algorithmic_toolbox/greedy_algorithms/fractional_knapsack.cpp)
- [Maximum Advertisement Revenue](/algorithmic_toolbox/greedy_algorithms/dot_product.cpp)
- [Collecting Signatures](/algorithmic_toolbox/greedy_algorithms/covering_segments.cpp)
- [Maximum Number of Prizes](/algorithmic_toolbox/greedy_algorithms/different_summands.cpp)
- [Maximum Salary](/algorithmic_toolbox/greedy_algorithms/largest_number.cpp)

### [Week 4. Divide-and-Conquer](/algorithmic_toolbox/divide_and_conquer/assign.pdf)

- [Binary Search](/algorithmic_toolbox/divide_and_conquer/binary_search.cpp)
- [Majority Element](/algorithmic_toolbox/divide_and_conquer/majority_element.cpp)
- [Improving Quick Sort](/algorithmic_toolbox/divide_and_conquer/sorting.cpp)
- [Number of Inversions](/algorithmic_toolbox/divide_and_conquer/inversions.cpp)
- [Organizing a Lottery](/algorithmic_toolbox/divide_and_conquer/points_and_segments.cpp)
- [Closest Points](/algorithmic_toolbox/divide_and_conquer/closest.cpp)

### [Week 5. Dynamic Programming 1](/algorithmic_toolbox/dynamic_programming/assign.pdf)

- [Money Change Again](/algorithmic_toolbox/dynamic_programming/change_dp.cpp)
- [Primitive Calculator](/algorithmic_toolbox/dynamic_programming/primitive_calculator.cpp)
- [Edit Distance](/algorithmic_toolbox/dynamic_programming/edit_distance.cpp)
- [Longest Common Subsequence of Two Sequences](/algorithmic_toolbox/dynamic_programming/lcs2.cpp)
- [Longest Common Subsequence of Three Sequences](/algorithmic_toolbox/dynamic_programming/lcs3.cpp)

### [Week 6. Dynamic Programming 2](/algorithmic_toolbox/dynamic_programming/assign.pdf)

- [Maximum Amount of Gold](/algorithmic_toolbox/dynamic_programming/knapsack.cpp)
- [Partitioning Souvenirs](/algorithmic_toolbox/dynamic_programming/partition3.cpp)
- [Maximum Value of an Arithmetic Expression](/algorithmic_toolbox/dynamic_programming/placing_parentheses.cpp)
