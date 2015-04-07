/*
    Find the number of fixed points in a permutation of [1,2,3,...,n] for some n, where fixed points are elements in the permutation that didn't change their original position.
    
    Example
    
    for [1, 3, 2, 4, 5, 6] output should be 4, since 1,4,5 and 6 stayed in the same positions.
    
    [input] array.integer permutation
    
    array of length n representing some permutation of integers from 1 to n.
    [output] integer
    
    the number of fixed points in permutation
*/

int fixedPointsPermutation(std::vector<int> permutation) {

  int result = 0;

  for (int i = 0; i < permutation.size(); i++) {
    if (permutation[i] == i + 1) {
      result++;
    }
  }

  return result;
}
