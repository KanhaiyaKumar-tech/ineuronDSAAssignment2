#include <iostream>
#include <vector>
#include <algorithm>

int arrayPairSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end()); // Sort the array in ascending order
    int max_sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        max_sum += nums[i];
    }
    return max_sum;
}

int main() {
    //std::vector<int> nums = {1, 4, 3, 2};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int max_sum = arrayPairSum(nums);
    std::cout << max_sum << std::endl; // Output: 4
    return 0;
}

