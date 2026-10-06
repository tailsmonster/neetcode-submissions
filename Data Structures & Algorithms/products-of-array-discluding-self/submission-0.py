class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # input is a list of numbers where we can traverse with I
        # output would be everything in the array multiplied together not including the i element we are currently on


        # i have an idea in mind on how to solve this, however Im a little confused on how to traverse this with a hashmap 
        
        n = len(nums)

        prefix = [1] * n
        suffix = [1] * n
        result = [1] * n

        # Build prefix products
        for i in range(1, n):
            prefix[i] = prefix[i - 1] * nums[i - 1]

        # Build suffix products
        for i in range(n - 2, -1, -1):
            suffix[i] = suffix[i + 1] * nums[i + 1]

        # Combine them
        for i in range(n):
            result[i] = prefix[i] * suffix[i]

        return result
    