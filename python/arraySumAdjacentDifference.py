def arraySumAdjacentDifference(inputArray):
    answer = 0
    for i in range(1, len(inputArray)):
        answer += abs(inputArray[i] - inputArray[i-1])
    return answer

'''
Given array of integers, find the sum of absolute differences of consecutive numbers.

Example

For inputArray = [4, 7, 1, 2], the output should be
arraySumAdjacentDifference(inputArray) = 10.

|4 - 7| = 3;
|7 - 1| = 6;
|1 - 2| = 1
So, the answer is 3 + 6 + 1 = 10.

Input/Output

[time limit] 4000ms (py)
[input] array.integer inputArray

Constraints:
3 ≤ inputArray.length ≤ 10,
1 ≤ inputArray[i] ≤ 15.

[output] integer

Sum of absolute differences of consecutive numbers from inputArray.
'''
