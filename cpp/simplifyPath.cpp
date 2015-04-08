/*
    Given an absolute path for a file (Unix-style), simplify it.
    
    Example
    
    "/home/a/./x/../b//c/" -> "/home/a/b/c"
    
    [input] string path
    
    line containing some path
    [output] string
    
    simplified path
*/
std::string simplifyPath(std::string path) {

  /**
   * The 'split' function below can be considered as a
   * library function, it is guaranteed that it is
   * is written correctly.
   * The function returns a vector of the words in the given
   * string, using 'sep' as the delimiter.
   */
  struct Helper {
    std::vector<std::string> split(std::string line, char sep) {
      std::vector<std::string> res;
      int start = 0;
      int end = line.find(sep);
      while (end != std::string::npos) {
        res.push_back(line.substr(start, end - start));
        start = end + 1;
        end = line.find(sep, start);
      }
      res.push_back(line.substr(start, end));
      return res;
    }
  };
  Helper h;

  std::vector<std::string> parts = h.split(path, '/');
  std::vector<std::string> simplified(parts.size());
  int length = 0;
  for (int i = 0; i < parts.size(); i++) {
    std::string part = parts[i];
    if (part == "." || part == "" || part == "..") {
      if (part == "..") {
        length--;
      }
      continue;
    }
    simplified[length++] = part;
  }

  if (length <= 0) {
    return "/";
  }

  std::string result = "";
  for (int i = 0; i < length; i++) {
    result += "/" + simplified[i];
  }

  return result;
}
