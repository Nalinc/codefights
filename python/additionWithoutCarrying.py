#Question: https://python.web.id/blog/additionwithoutcarrying-cf/

def additionWithoutCarrying(param1, param2):
    result = 0
    tenPower = 1
    while param1 > 0 or param2 > 0:
        result += tenPower * ((param1 + param2) % 10)
        param1 /= 10
        param2 /= 10
        tenPower *= 10
    return result
