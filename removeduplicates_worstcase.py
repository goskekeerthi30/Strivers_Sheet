class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Initialize a pointer 'i' to track the index of unique elements
        i = 0
        
        # Iterate through the entire array starting from the second element
        for j in range(1, len(nums)):
            # If the current element 'nums[j]' is different from the previous unique element 'nums[i]'
            if nums[i] != nums[j]:
                # Increment 'i' to move to the next position for storing the unique element
                i += 1
                # Place the current unique element at the next position in the array
                nums[i] = nums[j]
        
        # Return the length of the array with unique elements
        # This is the number of unique elements in the array, and the first 'i + 1' elements are unique
        return i + 1