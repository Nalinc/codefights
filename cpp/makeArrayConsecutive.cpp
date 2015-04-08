/*
    iven an array of integers, we need to fill in the "holes" such that it contains all the integers from some range.
    
    Example
    
    makeArrayConsecutive([6, 2, 3, 8]) = [4, 5, 7]
    
    [input] array.integer sequence
    
    array of distinct integers
    [output] array.integer
    
    a sorted array of integers of minimal possible length such that its union with sequence contains every integer from an interval [L, R] (for some L, R) and no other integers.
*/

std::vector<int> makeArrayConsecutive(std::vector<int> sequence) {
  
  std::vector<int> answer;
  int current_position = 0;

  sort(sequence.begin(), sequence.end());
  for (int i = sequence[0]; i < sequence[(int)sequence.size() - 1]; i++) {
    if (sequence[current_position] != i) {
      answer.push_back(i);
    }
    else {
      current_position++;
    }
  }

  return answer;
}
