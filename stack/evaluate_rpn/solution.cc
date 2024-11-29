#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdio>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>
#include <stack>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int result = 0;
        stack<int> stack;
        for (auto t : tokens) {
            if (t == "+") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b + a);
            }

            else if (t == "-") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b - a);
               
            }

            else if (t == "*") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b * a);

            }

            else if (t == "/") {
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                stack.push(b / a);

            }

            else {
                stack.push(stoi(t));
            }
        }


        return stack.top();
    }
};

int main() {
    Solution solution;
    
    vector<string> tokens = {"1","2","+","3","*","4","-"};
    std::cout << solution.evalRPN(tokens) << '\n';

    return 0;
}
