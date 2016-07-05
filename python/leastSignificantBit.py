#Question: https://python.web.id/blog/given-a-positive-integer-of-n-cf/

def leastSignificantBit(n):
    ans = 1
    while ((n & 1) == 0):
        n >>= 1 # before n <<=1
        ans <<= 1
    return ans

'''
>>> leastSignificantBit(12)
4
>>> 
'''
