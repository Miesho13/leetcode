#include <bits/stdc++.h>
#include <ios>

using namespace std; 

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
    
        vector<int> result(temperatures.size());
        stack<pair<int, int>> decreasing_stack;
        int day = 0;
        for (auto t : temperatures) {
            cout << "[START] FOR CURRENT TEMP -- " << t << "\n";
            if (decreasing_stack.empty()) {
                decreasing_stack.push({t, day++});
                cout << "[END] FOR CURRENT TEMP -- \n";
                continue;
            }
            
            auto stack_size = decreasing_stack.size();
            for (int i = 0; i < stack_size; i++) {
                if (decreasing_stack.top().first >= t) {
                    break;
                } else {
                    auto t_top = decreasing_stack.top();
                    result[t_top.second] = day - t_top.second;
                    decreasing_stack.pop();
                }
            }
            decreasing_stack.push({t, day++});
        }

        return result;
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
    Solution s;
    vector<int> temperatures = {30, 38, 30, 36, 35, 40, 28};
    auto out = s.dailyTemperatures(temperatures);
    print_vector<int>(out);
}
