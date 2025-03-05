class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        # Get the length of the input array, which is n
        n = len(nums)
        
        # Loop through all the numbers from 0 to n (inclusive), to check if each number is in the list
        for i in range(n + 1):
            # Initialize a flag variable to indicate if the number i is found in the array
            flag = 0
            
            # Iterate over all elements of the array to see if the current number i exists in nums
            for j in range(n):
                # If the number nums[j] equals i, set flag to 1 (indicating that i is present)
                if nums[j] == i:
                    flag = 1
                    break  # Exit the inner loop since we found i
            
            # If the flag is still 0, that means the number i was not found in the list, so return i
            if flag == 0:
                return i