def extractEachKth(inputArray, k):

    result = []
    for i in range(len(inputArray)):
        if (i+1) % k != 0:
            result.append(inputArray[i])
    return result
