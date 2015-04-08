/*
    There are N houses in a village on a circular road numbered from 1 to N starting from some house in clockwise order. It takes one minute to get from one house to any of two adjacent houses and there are no other roads in this village besides the circular one. Find the minimal time required to make all visits in the desired order starting from house 1
    
    Example
    
    visitsOnCircularRoad(4, [1, 3, 2, 3, 1]) = 6
    
    [input] integer N
    
    number of houses, positive integer
    [input] array.integer visitsOrder
    
    array of integers (each from 1 to N, inclusive) representing the order in which you have to visit the houses
    [output] integer
*/

int visitsOnCircularRoad(int N, std::vector<int> visitsOrder) {

  int current = 1,
      res = 0;
  for (int i = 0; i < visitsOrder.size(); i++) {
    res += std::min(std::abs(visitsOrder[i] - current),  
               N - std::abs(visitsOrder[i] - current));
    current = visitsOrder[i];
  }
  return res;
}

