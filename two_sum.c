//
// Created by caspar on 6/11/23.
//
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr = (int*) malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if ((i != j) && (*(nums + i) + *(j + nums) == target)) {
                *arr = i;
                *(arr+1) = j;
            }
        }
    }
    *returnSize = 2;
    return arr;
}
