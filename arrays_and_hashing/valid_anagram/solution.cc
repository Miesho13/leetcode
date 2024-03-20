#include <iostream>
#include <vector>
#include <set>

// I need a hash table container with a add method. Whenerever number 
// cant be put in it shoud return a status.
class Solution {

public:
    bool isAnagram(string s, string t) {
        

    }
};

int main() {
    Solution solution;

    std::cout << (solution.containsDuplicate("anagram", "nagaram") ? "ture" : "false")
        << "\n";
    
    std::cout << (solution.containsDuplicate("car", "rat") ? "ture" : "false")
        << "\n";

    return 0;
}

