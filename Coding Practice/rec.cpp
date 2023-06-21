#include <iostream>
using namespace std;

void factorial(int n, int& result) {
  if (n > 1) {
    factorial(n - 1, result);
    result *= n;
  }
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  int result = 1;
  factorial(n, result);

  cout << "Factorial of " << n << " = " << result << endl;
  return 0;
}