/*
    We call a string cyclic if it can be obtained by concatenating another string to itself many times (for example, s2 = "abcabcabcabc..." is cyclic since it can be obtained from s1 = "abc" in such a way).
    
    Given some substring of a cyclic string s, find the length of the smallest possible string that can be concatenated to itself many times to obtain s.
    
    Example
    
    for "cabca" output should be 3
    
    [input] string s1
    
    non-empty string
    [output] integer
*/
int cyclicString(std::string s1) {

  for (int answer = 1; answer < s1.size(); answer++) {
    bool correct = true;
    for (int position = 0; position+answer < s1.size(); position++) {
        if (s1[position] != s1[position + answer]) {
        correct = false;
        break;
      }
    }
    if (correct) {
      return answer;
    }
  }
  return s1.size();
}
