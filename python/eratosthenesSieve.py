# Question: https://python.web.id/blog/check-prime-number-cf/

def eratosthenesSieve(n):
    out = []
    for i in range(n+1):
        numb = 0
        for j in range(1, i+1):
            if i % j == 0:
                numb += 1
        if numb == 2:
            out.append(i)
    return out

'''
>>> n = 9
>>> eratosthenesSieve(n)
[2, 3, 5, 7]
​>>>
'''
