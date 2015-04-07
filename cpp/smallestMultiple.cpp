/*
    Find the smallest integer that is divisible by all integers on a given interval [left, right].
    
    Example
    
    smallestMultiple(2, 4) = 12
    
    [input] integer left
    
    left bound, positive integer
    [input] integer right
    
    right bound, left <= right
    [output] integer

*/

int smallestMultiple(int left, int right) {
  
  for (int candidate = 1; ; candidate++) {
    int correct = true;
    for (int divisor = left; divisor <= right; divisor++) {
      if (candidate % divisor == 0) {
        correct = false;
        break;
      }
    }
    if (correct) {
      return candidate;
    }
  }
}
