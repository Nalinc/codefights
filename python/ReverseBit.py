#Question: https://python.web.id/blog/reverse-bit-cf/

def ReverseBit(x):
  x = bin(x).replace('0b', '')
  reverse_text = ''
  for l in range(len(x)-1, -1, -1):
      reverse_text = reverse_text + x[l]
  return int(reverse_text, 2)

'''
>>> ReverseBit(234)
87
>>>
'''
