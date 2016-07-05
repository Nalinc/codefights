# Question: https://python.web.id/blog/python-fibonacci-numbers-cf/

def fibonacciNumber(n):
    if n == 0: return 0
    elif n == 1: return 1
    else: return fibonacciNumber(n-1)+fibonacciNumber(n-2)

'''
>>>
>>> n = 2
>>> fibonacciNumber(n)
1
>>>
>>> n = 1
>>> fibonacciNumber(n)
1
>>> 
>>> n = 7
>>> fibonacciNumber(n)
13
>>>
'''
