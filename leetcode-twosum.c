/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int *return_array = malloc(2 * sizeof(int));
    
    int i = 0;
    int y = 1;
    
    return_array[0] = 0;
    return_array[1] = 0;
    
    while(i < numsSize){
        while(y < numsSize){
            if (nums[i] + nums[y] == target){
                *returnSize=2;
                return_array[0] = i;
                return_array[1] = y;
            }
            y++;
        }
        i++;
    } 
return return_array;
}
