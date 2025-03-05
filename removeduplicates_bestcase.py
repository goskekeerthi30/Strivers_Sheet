class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Convert the list to a set to remove duplicates and then sort it
        nums[:] = sorted(list(set(nums)))
        
        # Return the length of the modified array with unique elements
        return len(nums)