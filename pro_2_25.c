//desciption:给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//你可以按任意顺序返回答案。
//来源：力扣（LeetCode）
#include<stdio.h>
//构建一个可以返回与所给target为和相等数组的下标的函数
void twoSum(int* nums, int numsSize, int target) {
    int i, j;
    for (i = numsSize-1; i >0; i--) {
        for (j = 0; j <  i; j++)
        {
            if (*(nums + i) + *(nums + j) == target) {
                printf("[%d,%d]", i, j);
            }
        }
    }
}
int main() {
    int nums[5] = { 2,3,5,8,7 }, target = 13, numsSize;
    numsSize = sizeof(nums)/sizeof(nums[0]);
    twoSum(nums, numsSize, target);
    return 0;
}