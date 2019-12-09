class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        stack = []
        tmp = 0
        
        for i in range(len(nums)):
            if nums[i-tmp] in stack:
                nums.pop(i-tmp)
                tmp += 1
            else:
                stack.append(nums[i-tmp])
                
        return len(nums)
