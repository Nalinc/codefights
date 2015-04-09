/*
Given array of integers, find its k-th greatest element.

Example

for array=[19, 32, 11, 23] and k=3 output should be 19

[input] array.integer inputArray

array of pairwise distinct integers
[input] integer k

positive integer (not exceeding array length)
[output] integer

k-th greatest element of array
*/

int arrayKthGreatest(std::vector<int> inputArray, int k) {

  for (int i = 0; i < k; i++) {
    int indexOfMaximum = i,
        tmp = inputArray[i];

    for (int j = i + 1; j < inputArray.size(); j++) {
      if (inputArray[j] > inputArray[indexOfMaximum]) {
        indexOfMaximum = j;
      }
    }

    inputArray[i] = inputArray[indexOfMaximum];
    inputArray[indexOfMaximum] = tmp;
  }

  return inputArray[k - 1];
}
