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
        // �ڱ�����࣬�Ҳ�ָ���ȶ�������[2,3,1]��������[2,1,3]���Ҳ�ָ���ȶ�����1����������ʱ�ڱ�ֵ2��1����Ϊ[1,2,3]���ܽ�һ�������ڱ�һ������࣬һ������С���ڱ�����ָ�뽻����Ҫ����ָ���ڽ������ʱ������ֵС���ڱ�ֵ
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