#include <stdio.h>
#include "helper.h"

void moveZeroes(int* nums, int numsSize){
     // find first 0 O(n)
     while (1) {
         int first_0 = -1;
         for (int i = 0; i < numsSize; i++) {
             if (*(nums+i) == 0) {
                 first_0 = i;
                 break;
             }
         }
         // if no 0s, end
         if (first_0 == -1){
             return;
         }
         int to_be_placed = -1;
         // find position to place 0 in
         for (int i = numsSize - 1; i >= 0; i--) {
             if (*(nums + i) != 0) {
                 to_be_placed = i;
                 break;
             }
         }
         //if all 0s or finished moving break
         if ((to_be_placed == -1) || (to_be_placed <= first_0)) {
             return;
         }

         for (int i = first_0; i < to_be_placed; i++) {
             swap(nums, i, i + 1);
         }
     }
}



