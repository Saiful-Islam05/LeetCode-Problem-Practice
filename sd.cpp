#include <iostream>
#include <unordered_map>

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 4, 5, 1};
    std::unordered_map<int, int> frequency;
    for (int i = 0; i < 10; ++i) {
        frequency[arr[i]]++;
    }
    for (const auto& pair : frequency) {
        std::cout << "Element: " << pair.first << ", Frequency: " << pair.second << std::endl;
    }
    return 0;
}

