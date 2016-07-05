def isMonotonous(sequence):
    check = all(x < y for x, y in zip(sequence, sequence[1:]))
    if check == False and sequence[-1] < 0:
        return True
    return check

#isMonotonous = lambda sequence: all(x < y for x, y in zip(sequence, sequence[1:]))

'''
Given array of integers, check if it represents either a strictly increasing or a strictly decreasing sequence.

Example

For sequence = [1, 4, 5, 7, 9], the output should be
isMonotonous(sequence) = true;
For sequence = [0], the output should be
isMonotonous(sequence) = true;
For sequence = [3, 3], the output should be
isMonotonous(sequence) = false.
Input/Output

[time limit] 4000ms (py)
[input] array.integer sequence

Constraints:
1 ≤ sequence.length ≤ 10,
-250 ≤ sequence[i] ≤ 250.

[output] boolean

true if sequence is either strictly increasing or strictly decreasing, false otherwise.
'''
