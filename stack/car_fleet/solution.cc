#include <bits/stdc++.h>
#include <ios>

using namespace std; 

class Solution {
public:

    float t(float x, float v, float x0) {
        return (x - x0)/v;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> pair;
        for (int i = 0; i < position.size(); i++) {
            pair.push_back({position[i], speed[i]});
        }
        sort(pair.rbegin(), pair.rend());
        
        std::vector<double> stack;
        for (auto &p : pair) {
            stack.push_back(t(target, p.second, p.first));
            if (stack.size() >= 2 && 
                stack.back() <=  stack[stack.size() - 2]) {
                stack.pop_back();
            }
        } 
        return stack.size();
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

    vector<int> position = {4,1,0,7};
    vector<int> speed = {2,2,1,1};
    auto ret = s.carFleet(10, position, speed);
    cout << ret << '\n';
}
