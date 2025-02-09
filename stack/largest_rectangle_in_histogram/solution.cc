#include <bits/stdc++.h>
#include <ios>

using namespace std; 

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         
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

    vector<int> heights = {7,1,7,2,2,4};
    auto ret = s.largestRectangleArea(heights);
    cout << ret << '\n';
}
