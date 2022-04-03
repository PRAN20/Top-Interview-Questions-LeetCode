import math
class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        if left == right: return left
        l = math.floor(math.log(right-left,2))+1
        return (left & right)>>l<<l
