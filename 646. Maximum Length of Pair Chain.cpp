#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Create a vector of pairs
    std::vector<std::pair<int, int>> vec = {{1, 2}, {7, 8}, {4, 5}};

    // Sort the vector of pairs
    std::sort(vec.begin(), vec.end());

    // Print the sorted vector
    for (const auto& p : vec) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
