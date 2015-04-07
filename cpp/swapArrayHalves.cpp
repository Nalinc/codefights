/*
    Swap two halves of a given array.
    
    Example
    
    for [1, 3, 2, 1] output should be [2, 1, 1, 3]
    
    [input] array.integer inputArray
    
    array of integers of even length L
    [output] array.integer
    
    array consisting of last L/2 elements of the given inputArray followed by its first L/2 elements

*/


std::vector<int> swapArrayHalves(std::vector<int> inputArray) {

  for (int i = 0; i < inputArray.size()/2; i++) {
    int tmp = inputArray[i];
    inputArray[i] = inputArray[i + inputArray.size() / 2];
    inputArray[i + inputArray.size() / 2] = tmp;
  }
  return inputArray;
}
