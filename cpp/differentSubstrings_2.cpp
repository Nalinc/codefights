/*
Given a string, find the number of different non-empty substrings in it.

Example

for 'abac' the output should be 9

[input] string inputStr

non-empty string
[output] integer

*/

int differentSubstrings(std::string inputStr) {

  std::vector<std::string> substrings;
  int result = 1;

  for (int i = 0; i < inputStr.size(); i++) {
    for (int j = i + 1; j <= inputStr.size(); j++) {
      substrings.push_back(inputStr.substr(i, j - i));
    }
  }
  std::sort(substrings.begin(), substrings.end());
  for (int i = 1; i < substrings.size(); i++) {
    if (substrings[i] != substrings[i - 1]) {
      result++;
    }
  }

  return result;
}
