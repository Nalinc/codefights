/*
    Consider integer numbers from 0 to n-1 written down along the circle in such a way that the distance between any two neighbouring numbers is equal (note that 0 and n-1 are neighbouring, too).
    
    Given n and firstNumber, find the number which is written in the radially opposite position to firstNumber.
    
    Example
    
    for n=10, firstNumber=2 output should be 7
    
    [input] integer n
    
    a positive even integer n
    [input] integer firstNumber
    
    an integer from 0 to n-1
    [output] integer
*/

int circleOfNumbers(int n, int firstNumber) {
  return (firstNumber + n / 2)%n;
}
