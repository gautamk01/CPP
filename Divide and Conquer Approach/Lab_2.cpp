#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{

    int currentSum = nums[0];
    int totalSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        totalSum = max(totalSum, currentSum);
    }
    return totalSum;
}

int main(void)
{
    vector<int> v1{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    printf("The maximum sum of the subarray is %d", maxSubArray(v1));

    return 0;
}