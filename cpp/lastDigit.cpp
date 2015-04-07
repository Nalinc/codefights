/*
    For given integers A and B, find the last digit of A^B.
    
    Example
    
    for A = 2 and B = 5 output should be 2 since 2^5=32.
    
    [input] integer a
    
    positive integer
    [input] integer b
    
    non-negative integer
    [output] integer
    
    last digit of A^B
*/


int lastDigit(int a, int b) {
  
  int result = 1;
  for (int i = 0; i < b; i++) {
    result = (result * a) % 10;
  }
  return result;
}
