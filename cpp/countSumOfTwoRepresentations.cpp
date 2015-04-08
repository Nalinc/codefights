/*
    Given integers n, l and r, find the number of ways to represent n as a sum of two integers A and B such that l <= A <= B <= r.
    
    Example
    
    for n=6, l=2, r=4 output should be 2
    
    [input] integer n
    
    a positive integer
    [input] integer l
    
    a positive integer
    [input] integer r
    
    a positive integer
    [output] integer
*/

int countSumOfTwoRepresentations(int n, int l, int r) {
  int result = 0;

  for (int a = l; a <= r; a++) {
    for (int b = a; b <= r; b++) {
      if (a + b == n) {
        result++;
      }
    }
  }

  return result;
}
