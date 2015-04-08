/*
    Given the string, check if it is a palindrome.
    
    Example
    
    for 'aabaa' the output should be true
    For 'abac' the output should be false
    [input] string inputString
    
    non-empty string consisting of lowercase characters
    [output] boolean
    
    true if inputString is a palindrome, false otherwise
*/

bool checkPalindrome(std::string inputString) {

  bool isPalindrome = true;
  for (int i = 0; i < inputString.size(); i++) {
    if (inputString[i] != inputString[(int)inputString.size() - i - 1]) {
      isPalindrome = false;
      return false;
    }
  }

  return isPalindrome;
}
