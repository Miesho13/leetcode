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


class Solution {
public:
    bool valid(std::string &s) {
        int open = 0;         
        for (char c : s) {
            open += (c == '(') ? 1 : -1;
            if (open < 0) { return false; }
        }
        return open == 0;
    }

    void gen_par(std::string s, std::vector<std::string>& ret, uint32_t n) {
        if (s.length() == n * 2) {
            if (valid(s)) { ret.push_back(s); }
            return;
        }

        gen_par(s + '(', ret, n);
        gen_par(s + ')', ret, n);
    } 

    std::vector<std::string> generateParenthesis(int n) {
        std::vector<std::string> ret;
        gen_par("", ret, n);
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
    auto test = solution.generateParenthesis(1);
    print_vector<std::string>(test);

    return 0;
}
