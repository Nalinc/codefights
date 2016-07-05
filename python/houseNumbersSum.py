#Question: https://python.web.id/blog/find-house-numbers-sum-cf/

def houseNumbersSum(inputArray):
    try:
        find = inputArray.index(0)
        return sum(list(set(inputArray[:find])))
    except:
        return sum(list(set(inputArray)))

'''
>>> inputArray = [5, 1, 2, 3, 0, 1, 5, 0, 2]
>>> houseNumbersSum(inputArray)
11
>>> inputArray = [4, 2, 1, 6, 0]
>>> houseNumbersSum(inputArray)
13
>>> inputArray = [4, 1, 2, 3, 0, 10, 2]
>>> houseNumbersSum(inputArray)
10
>>>
'''
