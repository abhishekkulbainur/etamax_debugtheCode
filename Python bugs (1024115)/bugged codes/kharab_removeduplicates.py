#Remove duplicates from sorted list

class Solution:
    def removeDuplicates(self, nums):
        nums.sort()
        i=0
        while i < len(nums):
            try:
                if nums.count(nums[i]) == 1:
                    continue
                else:
                    nums.remove(nums[i])
                    i += 1
            except Exception:
                break
        print(nums)

if __name__ == "__main__":
    obj = Solution()
    obj.removeDuplicates([1,2,2,3,4,10,10])
    obj.removeDuplicates([1,1,1,1,1])   #must give [1] only
