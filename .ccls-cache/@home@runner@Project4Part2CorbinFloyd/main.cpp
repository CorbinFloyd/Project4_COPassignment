#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int getIntInput() {
  int value;
  string input;

  while (true) {
    getline(cin, input);
    stringstream ss(input);

    // Input Validation
    if (ss >> value && !(ss >> input)) {
      break;
    } else {
      cout << "Invalid input. Please enter an integer: ";
    }
  }

  return value;
}

string ordinalSuffix(int n) {
  int last_digit = n % 10;
  int last_two_digits = n % 100;

  if (last_digit == 1 && last_two_digits != 11) {
    return "st";
  } else if (last_digit == 2 && last_two_digits != 12) {
    return "nd";
  } else if (last_digit == 3 && last_two_digits != 13) {
    return "rd";
  } else {
    return "th";
  }
}

int main() {
  cout << "\nEnter the stopping point: ";
  int N = getIntInput();

  for (int i = 1; i <= N; i++) {
    cout << i << ordinalSuffix(i) << " Hello" << endl;
  }

  return 0;
}
