class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        pairs = {')': '(', ']': '[', '}': '{'}
        
        for ch in s:
            # If closing bracket
            if ch in pairs:
                # Pop from stack if exists, else assign dummy value
                top = stack.pop() if stack else None
                # Check mismatch
                if pairs[ch] != top:
                    return False
            else:
                # Push opening bracket to stack
                stack.append(ch)
        
        # If stack empty -> all brackets matched correctly
        return len(stack) == 0
