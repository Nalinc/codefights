#Question: https://python.web.id/blog/given-an-array-of-integers-cf/

def arrayElementsProduct(inputArray):
    product = 1
    for numb in inputArray:
        product *= numb
    return product

'''
>>> inputArray = [1, 3, 2, 10]
>>> arrayElementsProduct(inputArray)
60
>>>
>>> inputArray = [2, 4, 10, 1]
>>> arrayElementsProduct(inputArray)
80
>>> inputArray = [1, 1]
>>> arrayElementsProduct(inputArray)
1
>>>
'''
