#include <iostream>

int main() {
  int year;

  std::cout << "Enter year: ";
  std::cin >> year;

  if(year < 10000 && year >= 1000) 
  {
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
      std::cout << year << " is a leap year";
    }
    else {
        std::cout << year << " is not a leap year";
    }
  }
  else {
    std::cout << "Not a four-digit number!";
  }
  
}