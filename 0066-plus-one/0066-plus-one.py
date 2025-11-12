class Solution:
    def plusOne(self, digits):
        num = int("".join(map(str, digits)))  # convert list to number
        num += 1                             # add one
        return [int(i) for i in str(num)]    # convert back to list
