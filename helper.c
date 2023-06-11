//
// Created by caspar on 6/11/23.
//
#include "helper.h"
void swap(int* arr, int pos1, int pos2) {
    int temp = *(arr + pos1);
    *(arr + pos1) = *(arr + pos2);
    *(arr + pos2) = temp;
}