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
        std::stack<char> stack_bracket;

        if (s.size() % 2 == true) {
            return false;
        }

        for (auto c : s) {
            switch (c) {
                case '(':
                case '[':
                case '{':
                    stack_bracket.push(c);
                    break;

                case '}':
                    if (stack_bracket.empty() == true) {
                        return false;
                    }
                    else if (stack_bracket.top() == '{') {
                        stack_bracket.pop();
                    } else {
                        return false;
                    }
                    break;
                case ')':
                    if (stack_bracket.empty() == true) {
                        return false;
                    }
                    else if (stack_bracket.top() == '(') {
                        stack_bracket.pop();
                    } else {
                        return false;
                    }
                    break;

                case ']':
                    if (stack_bracket.empty() == true) {
                        return false;
                    }
                    else if (stack_bracket.top() == '[') {
                        stack_bracket.pop();
                    } else {
                        return false;
                    }
                    break;
            }
        }

        return stack_bracket.empty();
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
    return 0;
}
