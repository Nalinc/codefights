/*
    Lexicographic order means that the strings are arranged in a similar fashion as they are presumed to appear in a dictionary.
    
    Remove all duplicates from an already sorted array of strings.
    
    Example
    
    for ["a", "a", "ab", "ab", "abc"] output should be ["a", "ab", "abc"]
    
    [input] array.string inputArray
    
    non-empty sorted (in lexicographical order) array of strings with possible duplicates
    [output] array.string
    
    sorted (in lexicographical order) array consisting of all the strings from the inputArray except duplicates
*/

std::vector<std::string> removeDuplicateStrings(std::vector<std::string> inputArray) {
  std::vector<std::string> result;
  for (int i = 0; i < inputArray.size(); i++) {
  	if (i + 1 < inputArray.size() && inputArray[i] == inputArray[i + 1]) {
  		continue;
  	}
  	result.push_back(inputArray[i]);
  }
  return result;
}
