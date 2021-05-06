#pragma once
#include "common.h"

class wslSort {
public:
    static void quickSort(vector<int>& nums);
    static void mergeSort(vector<int>& nums);
    static void heapSort(vector<int>& nums);

private:
    static void quickSortR(vector<int>& nums, int left, int right);
};