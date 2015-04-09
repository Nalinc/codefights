/*
        Bracket sequence is called regular if it is possible to insert some numbers and signs into the sequence in such way that new sequence will represent correct arithmetic expression.
        
        For a string consisting of '(', ')' only determine whether it is regular bracket sequence or not.
        
        [input] string sequence
        
        [output] boolean
        
        true if the bracket sequence is regular, false otherwise
*/
bool regularBracketSequence1(std::string sequence) {
  
  int balance = 0;
  for (int i = 0; i < sequence.size(); i++) {
    if (sequence[i] == '(') {
      balance++;
    }
    else {
      balance--;
    }
    if (balance < 0) {
      return false;
    }
  }
  if (balance) {   
    return false;
  }
  return true;    
}
