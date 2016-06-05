#Question: https://python.web.id/blog/find-the-number-of-even-digits-in-the-given-integer-cf/

def numberOfEvenDigits(n):
    return len(filter(lambda m: m.isdigit() and int(m) % 2 == 0, str(n)))

'''
n: 1010
Output: 2

n: 123
Output: 1

n: 135
Output: 0
'''
