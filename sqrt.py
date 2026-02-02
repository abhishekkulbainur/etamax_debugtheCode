#finding square of number without any built-in exponent function (math.pow) or operator (x**0.5)

class Solution:
    def mySqrt(self, n: int) -> int:
        if n !=0:
            x = n
            for _ in range(10):
                x = 0.5 * (x + n / x)
            return int(x)
if __name__ == "__main__":
    obj = Solution()
    obj.mySqrt(0)