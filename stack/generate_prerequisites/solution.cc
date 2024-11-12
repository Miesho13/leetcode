#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdio>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>
#include <stack>
#include <cstdint>
// ()
// (())
// 0 0 2
// 1 0 2
// 2 0 2
// 2 1 2
// 2 2 2
// 2 1 2
// 2 0 2
// 1 1 2
class Solution {
public:
    void backtrack(int openN, int closedN, int n, std::vector<std::string>& res, std::string& stack) {
        if (openN == closedN && openN == n) {
            res.push_back(stack);
            return;
        }

        if (openN < n) {
            stack += '(';
            backtrack(openN + 1, closedN, n, res, stack);
            stack.pop_back();
        }

        if (closedN < openN) {
            stack += ')';
            backtrack(openN, closedN + 1, n, res, stack);
            stack.pop_back();
        }
    }

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> ret;
        std::string stack;

        backtrack(0, 0, n, ret, stack);
        return ret;
    }
};

template<typename T>
void print_vector(std::vector<T> &v) {
    std::cout << "[";
    for (auto e : v) {
        std::cout << e << " ";
    }
    std::cout << "\b]\n";
}

int main() {
    Solution solution;
    auto test = solution.generateParenthesis(2);
    print_vector<std::string>(test);

    return 0;
}
