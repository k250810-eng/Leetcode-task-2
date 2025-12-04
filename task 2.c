
// task 2 Q3

int removeDuplicates(int* nums, int numsSize) {
    
    if (numsSize == 0) return 0;

    int k=1;
    for(int i=1; i<numsSize; i++){
    
        if( nums[i] != nums[i-1]){
             nums[k] = nums[i];
            k++;
        }  

    }
    return k;
}

// task 2 Q2


void reverseString(char* s, int sSize) {
    
   int j = sSize - 1;
   char temp;
    for(int i = 0; i< sSize/2; i++){
       
       temp = s[i];
       s[i] = s[j];
       s[j] = temp;
    j--;
    }
}




// task 2 Q1

void moveZeroes(int* nums, int numsSize) {
    
    int temp = 0;

    for(int i=0; i<numsSize; i++){
        if(nums[i]!=0){
            nums[temp] = nums[i];
            temp++;
        }
    }

    while(temp < numsSize){
        nums[temp] =0;
        temp++;
    }




}