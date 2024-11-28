#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdio>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> close_to_open = {
            {')', '('},
            {']', '['},
            {'}', '{'} };
        

        for (auto c : s) {
            if (close_to_open.count(c)) {
                if (stack.top() == close_to_open[c]) {
                    stack.pop();
                }
                else {
                    return false;
                }

            }
            else { 
                stack.push(c);
            }
        }

        return stack.empty();
    }
};


int main() {
    Solution solution;
    std::string patern = "((";
    
    auto output = solution.isValid(patern);
    std::cout << (bool)output << '\n';

    patern = "{([})}";
    output = solution.isValid(patern);
    std::cout << (bool)output << '\n';

    patern = "{({})}";
    output = solution.isValid(patern);
    std::cout << (bool)output << '\n';
    return 0;
}
