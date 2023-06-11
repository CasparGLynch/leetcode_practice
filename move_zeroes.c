#include <stdio.h>
void swap(int* arr, int pos1, int pos2) {
    int temp = *(arr + pos1);
    *(arr + pos1) = *(arr + pos2);
    *(arr + pos2) = temp;
}

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

int main(){
    int arr[] = {0,1,0,2,3};
    moveZeroes(arr, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
}

