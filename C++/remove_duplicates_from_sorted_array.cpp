class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> stack;
        int tmp = 0;
        int len = nums.size();
            
        for(int i = 0; i < len; i++){
            bool flag = false;           
            for(int j = 0; j < stack.size(); j++){
                if(nums[i-tmp] == stack[j]) 
                    flag = true;
            }
            if(flag){
                nums.erase(nums.begin() + (i - tmp - 1));
                tmp ++;
            }else{
                stack.push_back(nums[i-tmp]);
            }
        }        
        
        return nums.size();
    }
};
