/*
    Given a positive integer number and a certain length, we need to modify the given number to have a specified length. We are allowed to do that either by cutting out leading digits (if the number needs to be shortened) or by adding 0s in front of the original number.
    
    Example
    
    IntegerToStringOfFixedWidth(1234, 2) = "34"
    IntegerToStringOfFixedWidth(1234, 4) = "1234"
    IntegerToStringOfFixedWidth(1234, 5) = "01234"
    [input] integer number
    
    a non-negative integer
    [input] integer width
    
    a positive integer representing the desired length
    [output] string
    
    the modified version of number as described above
*/

std::string integerToStringOfFixedWidth(int number, int width) {
    
  std::string result = "";

  for (int i = 0; i < width; i++) {
    result += '0';
  }

  int position = width-1;
  while (number && position >= 0) {
    result[position] = '0' + number % 10;
    number /= 10;
    position -= 1;
  }

  return result;
}
