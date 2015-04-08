/*
    When candles finish burning they leave leftovers that can be combined to make a new candle. Assume that it's possible to make 
    a single new candle from B leftovers for some integer B.
    
    Given the initial number of burning candles A and the integer B, find the total number of candles that we can burn.
    
    Example
    
    If you had 5 initial candles and could make a new one from 2 leftovers then you can burn 9 = 5 + 2 + 1 + 1 candles in total.
*/

int candles(int A, int B) {
  int burned = 0;
  int leftowers = 0;
  while (A > 0) {
    burned += A;
    leftowers += A;
    A = leftowers / B;
    leftowers %= B;
  }
  return burned;
}


