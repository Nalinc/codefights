/*
    Define partial sort of array as follows: first k elements of the result should be exactly the same as they will be in the sorted array and the rest elements should go in the same order as they occur in the original array.
    
    Apply a partial sort to a given array.
    
    Example
    
    partialSort([4, 3, 1, 2], 2) = [1, 2, 4, 3]
    
    [input] array.integer input
    
    unsorted array of distinct positive integers (each less than 109)
    [input] integer k
    
    non-negative integer
    [output] array.integer
    
    partially sorted input (for a given k)
*/

std::vector<int> partialSort(std::vector<int> input, int k) {
  std::vector<int> answer;
  int infinity = int(1e9);

  for (int i = 0; i < k; i++) {
    int index = 0;
    for (int j = 0; j < input.size(); j++) {
      if (input[j] < input[index]) {
        index = j;
      }
    }
    answer.push_back(input[index]);
    input[index] = infinity;
  }
  for (int i = 0; i < input.size(); i++) {
    if (input[i] != infinity) {
      answer.push_back(input[i]);
    }
  }

  return answer;
}
