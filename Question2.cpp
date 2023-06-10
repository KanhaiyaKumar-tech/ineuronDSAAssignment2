#include <iostream>
#include <vector>
#include <unordered_set>

int maxCandies(std::vector<int>& candyType) {
    std::unordered_set<int> uniqueCandies;
    for (int candy : candyType) {
        uniqueCandies.insert(candy);
    }
    int maxTypes = std::min(uniqueCandies.size(), candyType.size() / 2);
    return maxTypes;
}

int main() {
    //std::vector<int> candyType = {1, 1, 2, 2, 3, 3};
    std::vector<int> candyType;
    int num;
    while (std::cin >> num) {
        candyType.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int maxTypes = maxCandies(candyType);
    std::cout << maxTypes << std::endl; // Output: 3
    return 0;
}
