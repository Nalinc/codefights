/*
    We call a fraction reduced if its numerator and denominator are relatively prime. Implement a function that can divide two fractions and produce a reduced fraction.
    
    Example
    
    for [2, 3] and [5, 6] output should be [4, 5]
    
    [input] array.integer A
    
    array A of length 2 representing fraction A[0] / A[1]
    [input] array.integer B
    
    array B of length 2 representing fraction B[0] / B[1]
    [output] array.integer
    
    ratio of A and B as a reduced fraction
*/
std::vector<int> fractionDivision(std::vector<int> A, std::vector<int> B) {

  struct Helper {
    int gcdEuclid(int a, int b) {
      if (a == 0) {
        return b;
      }
      return gcdEuclid(b % a, a);
    }
  };
  Helper h;

  std::vector<int> C(2); 
  C[0] = A[0] * B[1], C[1] = A[1] * B[0];
  int gcd = h.gcdEuclid(C[0], C[1]);

  C[0] /= gcd;
  C[1] /= gcd;

  return C;
}

