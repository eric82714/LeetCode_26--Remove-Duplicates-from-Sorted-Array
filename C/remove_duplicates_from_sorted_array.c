int removeDuplicates(int* nums, int numsSize){
    int stack[12000];
    int tmp = 0;
    int index = 0;
    int len = numsSize;
            
    for(int i = 0; i < numsSize; i++){
        bool flag = false;           
        for(int j = 0; j < index; j++){
            if(nums[i-tmp] == stack[j]) flag = true;
        }
        if(flag){
            for(int k = i - tmp; k < numsSize - tmp - 1; k++) nums[k] = nums[k+1];
            len --;
            tmp ++;
        }else{
            stack[index] = nums[i-tmp];
            index ++;
        }
    }        
    numsSize = len;
    return numsSize;
}
