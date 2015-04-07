/*
    [input] array.integer divisors
    
    array of positive integers, each greater than 1
    [input] integer start
    
    positive integer
    [output] integer
    
    the smallest integer not less than start which is not divisible by any integer from divisors
*/

int firstNotDivisible(std::vector<int> divisors, int start) {

  for (int answer = start; ; answer++) {
    bool correct = true;
    for (int i = 1; i < divisors.size(); i++) {
      if (answer % divisors[i] == 0) {
        correct = false;
        break;
      }
    }
    if (correct) {
      return answer;
    }
  }
}
