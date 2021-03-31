from random import *

def insertion_sort(nums):
    for x in range(len(nums)-1):
        k = nums[x+1]
        j = (x + 1) - 1
        while j >= 0 and nums[j] > k:
            nums[j + 1] = nums[j]
            j -= 1
        nums[j + 1] = k

def build(nums):
    for x in range(10):
        nums[x - 1] = randrange(100)

seed(1)

for x in range(10):
    nums = []
    for y in range(10):
        nums.append(randint(0, 100))
    print("Test ", x)
    print("Unsorted: ", end='')
    print(*nums, sep=", ")
    insertion_sort(nums)
    print("Sorted: ", end='')
    print(*nums, sep=", ")
    #print('\n')

