#Question: https://python.web.id/blog/password-check-regex-expression-cf/

import re
def passwordCheckRegExp(inputString):
    c1 = len(re.findall(r'([A-Z])', inputString))
    c2 = len(re.findall(r'([a-z])', inputString))
    c3 = len(re.findall(r'([0-9])', inputString))
    
    if len(inputString) >= 5 and c1 != 0 and c2 != 0 and c3 != 0:
        return True
    else:
        return False

'''
>>> passwordCheckRegExp(inputString)
>>> inputString = "my.Password123"
True
>>>
>>> inputString = "my.password123"
>>> passwordCheckRegExp(inputString)
False
>>>
>>> inputString = "aaAZ0"
>>> passwordCheckRegExp(inputString)
True
>>>
>>> inputString = "9abaA"
>>> passwordCheckRegExp(inputString)
True
>>>
>>> inputString = "9aA"
>>> passwordCheckRegExp(inputString)
False
>>>
'''
