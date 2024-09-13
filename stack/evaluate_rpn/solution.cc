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
private:
    void parst_toketn(std::string &token) {
        try {
            std::stoi(token);
        } catch(const std::invalid_argument e) {

        }
        
    }

public:
    int run(std::vector<std::string> &tokens) {
        int ret = 0;
        // -> 3 -> 4 -> +  / 8
        // -> 8 -> 3 -> *  / 24
        // -> 24 -> 4 -> - / 20 
        
        for (auto token : tokens) {
                    
        }



        return ret;          
    }
};


int main() {
     
    return 0;
}
