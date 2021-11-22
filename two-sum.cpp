#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target)
{
    std::vector<int> solution;
    for (int i = 0, j = 1; j < nums.size(); i++, j++) {
        if (nums[i] + nums[j] == target) {
            solution = { i, j };
            std::cout << solution[0] << ", " << solution[1];
            return solution;
        }
    }
    return solution;
}

int main()
{
    std::vector<int> nums = { 2, 5, 5, 11, 10 };
    int target = 10;
    twoSum(nums, target);
    std::cin.get();
}