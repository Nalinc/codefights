#Question: https://python.web.id/blog/notpaired-cf/

def notPaired(numberland):
  for x in numberland:
    if numberland.count(x) == 1: return x

'''
>>> notPaired([1, 3, 5, 7, 9, 7, 5, 3, 1])
9
>>>
'''
