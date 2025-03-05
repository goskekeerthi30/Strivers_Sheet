class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        # Initialize s2 to store the sum of the elements in the given array
        s2 = 0
        
        # Calculate the length of the input array nums
        n = len(nums)
        
        # Calculate the expected sum of numbers from 0 to n (inclusive) using the formula n * (n + 1) / 2
        # This sum includes all numbers from 0 to n, so we expect this sum if no number was missing.
        s1 = int((n * (n + 1)) / 2)
        
        # Iterate through the given array and calculate the sum of its elements (s2)
        for j in nums:
            s2 += j
        
        # The missing number will be the difference between the expected sum (s1) and the actual sum (s2)
        return s1 - s2