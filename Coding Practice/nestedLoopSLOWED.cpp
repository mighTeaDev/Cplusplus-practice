#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
  int rows;
  int columns;
  char symbol;

  // Get the user input for the number of rows and columns
  cout << "How many rows?: ";
  cin >> rows;

  cout << "How many columns?: ";
  cin >> columns;

  cout << "Enter a symbol to use to create the box: ";
  cin >> symbol;

  // Print the box with a 0.5 second delay between each character
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cout << symbol;
      std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    cout << endl;
  }

  return 0;
}