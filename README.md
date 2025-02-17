# Strivers_Sheet
class Solution:
    # Method to check if the given integer x is a palindrome
    def isPalindrome(self, x: int) -> bool:
        
        # Store the original number for comparison later
        t = x
        
        # Initialize revNum to 0. This will store the reversed number
        revNum = 0
        
        # Reverse the digits of the number
        while x > 0:
            # Extract the last digit of x
            r = x % 10
            
            # Remove the last digit from x
            x = x // 10
            
            # Add the extracted digit to revNum, shifting the digits to the left
            revNum = (revNum * 10) + r
        
        # Check if the reversed number is equal to the original number
        # If they are the same, x is a palindrome
        if t == revNum:
            return True
        else:
            # If not, return False (it's not a palindrome)
            return False
