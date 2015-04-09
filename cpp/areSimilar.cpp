/*
    Two arrays are called similar if one can be obtained from the other by swapping at most one pair of elements.
    
    Given two arrays, check whether they are similar.
    
    Example
    
    for [1, 2, 3] and [1, 2, 3] the answer should be true
    for [1, 2, 3] and [2, 1, 3] the answer should be true
    for [1, 2, 3] and [3, 1, 2] the answer should be false
    [input] array.integer A
    
    array of integers
    [input] array.integer B
    
    array of integers of the same length as A
    [output] boolean
    
    true if A and B are similar, false otherwise
*/

bool areSimilar(std::vector<int> A, std::vector<int> B) {

  for (int i = 0; i < A.size(); i++) {
    for (int j = i; j < A.size(); j++) {
      bool equal = true;
      int tmp = A[j]; // int tmp = A[i]
      A[j] = A[i];    // A[i] = A[j] 
      A[j] = tmp;
      for (int k = 0; k < A.size(); k++) {
        if (A[k] != B[k]) {
          equal = false;
          break;
        }
      }
      if (equal) {
        return true;
      }
      A[j] = A[i];
      A[i] = tmp;
    }
  }
  return false;
}
