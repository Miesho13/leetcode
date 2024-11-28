#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdio>
#include <unordered_set>
#include <functional>
#include <array>
#include <map>
#include <stack>


class MinStack {
public:
    MinStack() {
          
    }

    void push(int val) {
        main_stack.push(val);

        if (min_stack.empty()) {
            min_stack.push(val);
        }
        else {
            if (min_stack.top() >= val) {
                min_stack.push(val);
            }
        }
    }
    
    void pop() {
        if (main_stack.top() == min_stack.top()) {
            min_stack.pop();
        }
        main_stack.pop();
    }
    
    int top() {
        return main_stack.top();
    }

    int get_min() {
        return min_stack.top();
    }


    private:
    std::stack<int> main_stack;
    std::stack<int> min_stack;
};

int main() {
    MinStack minStack; 
    minStack.push(1);
    minStack.push(2);
    minStack.push(0);

    std::cout << minStack.get_min() << '\n'; // return 0
    minStack.pop();
    std::cout << minStack.top() << '\n';    // return 2
    std::cout << minStack.get_min() << '\n'; // return 1

    return 0;
}
