/*
    Mode is the number which appears most often in a set of numbers.
    
    Given array of integers, find its mode.
    
    Example
    
    for [1, 3, 3, 3, 1] output should be 3
    for [1, 3, 2, 1] output should be 1
    [input] array.integer sequence
    
    unsorted array of integers each from 1 to 10 inclusive
    [output] integer
    
    the mode of sequence. It is guaranteed that there is an unambiguous answer for the given data.
*/

int arrayMode(std::vector<int> sequence) {
  std::vector<int> cnt;
  int answer = 0;

  for (int i = 0; i < 10; i++) {
    cnt.push_back(0);
  }
  for (int i = 0; i < sequence.size(); i++) {
    cnt.at(sequence.at(i) - 1)++;
    if (cnt.at(sequence.at(i) - 1) > cnt.at(answer)) {
      answer = sequence.at(i) - 1;
    }
  }
  return answer + 1;
}
