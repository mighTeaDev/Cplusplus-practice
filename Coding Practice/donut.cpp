#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
  // Define the dimensions of the donut.
  int radius = 10;
  int width = 2 * radius + 1;
  int height = 2 * radius + 1;

  // Create a string to hold the ASCII art for the donut.
  string donut = "";
  for (int y = 0; y < height; y++) {
    for (int x = 0; x < width; x++) {
      // Check if the current point is inside the donut.
      if (x * x + y * y <= radius * radius) {
        donut += "o";
      } else {
        donut += " ";
      }
    }
    donut += "\n";
  }

  // Animate the spinning donut by printing it out multiple times.
  for (int i = 0; i < 10; i++) {
    cout << donut << endl;
    // Delay for a short amount of time.
    // This will make the donut appear to spin.
    // You can adjust the delay value to make the donut spin faster or slower.
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
  }

  return 0;
}