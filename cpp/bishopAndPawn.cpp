/*
    Given the positions of a white bishop and a black pawn on the standard chess board, determine whether the bishop can capture the pawn in one move.
    
    Example
    
    for "A1" and "C3" output should be true,
    for "H1" and "H3" output should be false,
    [input] string cell1
    
    coordinates of the white bishop
    [input] string cell2
    
    coordinates of the black pawn
    [output] boolean
*/

bool bishopAndPawn(std::string cell1, std::string cell2) {  
  struct Parser {
    int getX(char pos) {
      return pos - 'A';
    }
      
    int getY(char pos) {
      return pos - '1';
    }  
  };

  Parser myParser;
  int x1 = myParser.getX(cell1[0]),
      y1 = myParser.getY(cell1[1]),
      x2 = myParser.getX(cell2[0]),
      y2 = myParser.getY(cell2[1]);

  if (x1 + y2 == x2 + y1 || x1 + y1 == x2 + y2) {
    return true;
  }

  return false;
}
