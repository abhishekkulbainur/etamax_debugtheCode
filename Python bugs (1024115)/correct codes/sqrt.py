class Solution:
    def mySqrt(self, n: int) -> int:
        if n == 0:
            return 0   # handle edge case

        x = n
        for _ in range(10):
            x = 0.5 * (x + n / x)
        return int(x)

if __name__ == "__main__":
    obj = Solution()
    print(obj.mySqrt(0))   # output: 0
