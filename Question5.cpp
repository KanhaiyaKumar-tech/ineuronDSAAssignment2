#include <iostream>
#include <vector>
#include <algorithm>

int maximumProduct(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());  // Sort the array in ascending order
    int size = nums.size();
    int maxProduct = nums[size - 1] * nums[size - 2] * nums[size - 3];  // Maximum product of three positive numbers
    int negativeProduct = nums[0] * nums[1] * nums[size - 1];  // Maximum product considering negative numbers
    return std::max(maxProduct, negativeProduct);
}

int main() {
    //std::vector<int> nums = {1, 2, 3};
    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    int maxProduct = maximumProduct(nums);
    std::cout << maxProduct << std::endl; // Output: 6
    return 0;
}
