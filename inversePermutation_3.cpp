/*
    An inverse permutation is a permutation in which each number and the number of the place which it occupies are exchanged.
    
    Example
    
    inversePermutation([1, 3, 4, 2]) = [1, 4, 2, 3]
    
    [input] array.integer permutation
    
    non-empty array representing a permutation of integers from 1 to some n
    [output] array.integer
    
    the inverse permutation of permutation
*/

std::vector<int> inversePermutation(std::vector<int> permutation) {
  std::vector<int> result(permutation.size());
  for (int i = 0; i < permutation.size(); i++) {
    result[permutation[i] - 1] = i + 1;
  }
  return result;
}
