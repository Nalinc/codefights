#Question: https://python.web.id/blog/replace-first-digit-regex-expression-cf/

def replaceFirstDigitRegExp(inputString):
    return re.sub('[0-9]', '#', inputString, count=1)

'''
>>> inputString = "There are 12 points"
>>> replaceFirstDigitRegExp(inputString)
"There are #2 points"
>>> 
>>> inputString = "0ss"
>>> replaceFirstDigitRegExp(inputString)
"#ss"
>>>
'''
