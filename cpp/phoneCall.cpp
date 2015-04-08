/*
    Some phone usage rate may be described as follows:
    
    first minute of a talk costs min1 cents,
    each minute from the 2nd up to 10th (inclusive) costs min2_10 cents
    each minute after 10th costs min11 cents.
    You have S cents on your account before the call. What is the duration of the longest call (in minutes) you can have?
    
    Example
    
    for min1 = 3, min2_10 = 1, min11 = 2, S = 20 output should be 14
    
    [input] integer min1
    
    positive integer
    [input] integer min2_10
    
    positive integer
    [input] integer min11
    
    positive integer
    [input] integer S
    
    positive integer
    [output] integer
*/

int phoneCall(int min1, int min2_10, int min11, int S) {
  
  if (S < min1) {
    return 0;
  }
  for (int i = 2; i <= 10; i++) {
    if (S < min1 + min2_10 * (i-1)) {
      return i - 1;
    }
  }
  return 10 + (S - min1 - min2_10 * 9) / min11;
}
