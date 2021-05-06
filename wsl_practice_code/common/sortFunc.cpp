#include "sortFunc.h"

void wslSort::quickSort(vector<int>& nums)
{
    // [left, right]
    quickSortR(nums, 0, nums.size() - 1);
    return;
}

void wslSort::mergeSort(vector<int>& nums)
{
    return;
}

void wslSort::heapSort(vector<int>& nums)
{
    return;
}

void wslSort::quickSortR(vector<int>& nums, int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int l = left;
    int r = right;
    int flag = nums[left];

    while (l < r)
    {
        // 哨兵在左侧，右侧指针先动，比如[2,3,1]，交换完[2,1,3]，右侧指针先动会在1处相遇，此时哨兵值2与1交换为[1,2,3]。总结一下由于哨兵一定在左侧，一定是与小于哨兵的左指针交换，要求左指针在交换完成时满足其值小于哨兵值
        while (r > l && nums[r] >= flag)
        {
            --r;
        }
        while (l < r && nums[l] <= flag)
        {
            ++l;
        }
        if (l < r)
        {
            swap(nums[l], nums[r]);
        }
    }
    swap(nums[left], nums[l]);
    quickSortR(nums, left, l - 1);
    quickSortR(nums, l + 1, right);
}