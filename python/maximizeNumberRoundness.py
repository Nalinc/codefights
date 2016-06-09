#Source: http://pastebin.com/cKhjm6uV

def maximizeNumberRoundness(n):
    tmp = n
    zeros = 0
    while tmp:
        if tmp % 10 == 0:
            zeros += 1
        tmp /= 10
    result = zeros
    for i in range(zeros):
        if n % 10 == 0:
            result -= 1
        n /= 10
    return result
