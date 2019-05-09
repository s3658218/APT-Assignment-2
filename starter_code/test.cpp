#include <iostream>

int main(void) {

  double arrA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  double arrB[10] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

  int length = 10;

  question11(arrA, arrB, 10);

}

void question11(double* arrA, double* arrB, int length) {

  for (int i = 0; i < length, i++) {
    double arrA[i] = arrA[i] + arrB[i];

    std::cout << "arrA after adding is: " << std:endl;
    std::cout << arrA[i] << std::endl;
    std:cout << "arrB after adding is: " << std:endl;
    std:cout << arrB[i] << std:endl;
  }

}
