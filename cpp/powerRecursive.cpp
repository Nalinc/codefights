/*
    Find the value of base raised to the power of exponent (base exponent).
    
    [input] integer base
    
    [input] integer exponent
    
    positive integer
    [output] integer
*/

int powerRecursive(int base, int exponent) {
  if (exponent == 0) {
    return 1;
  }
  else{
    return base * powerRecursive(base, exponent - 1);
  }
}

