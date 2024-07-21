#include <iostream>

int main() {
  int EarthWeight, PlanetNumber, Weight;

  std::cout << "Earth weight: \n";
  std::cin >> EarthWeight;

  std::cout << "Enter planet number: \n";
  std::cin >> PlanetNumber;
  
  switch(PlanetNumber) {

    case 1 : 
      Weight = EarthWeight * 0.38;
      std::cout << "Mercury\n" << Weight; 
      break;
    case 2 : 
      Weight = EarthWeight * 0.91;
      std::cout << "Mercury\n" << Weight; 
      break;
    case 3 : 
      Weight = EarthWeight * 0.38;
      std::cout << "Mercury\n" << Weight; 
      break;
    case 4 : 
      Weight = EarthWeight * 2.34;
      std::cout << "Mercury\n" << Weight; 
      break;
    case 5 : 
      Weight = EarthWeight * 1.06;
      std::cout << "Mercury\n" << Weight; 
      break;
    case 6 : 
      Weight = EarthWeight * 0.92;
      std::cout << "Mercury\n" << Weight; 
      break;
    case 7 : 
      Weight = EarthWeight * 1.19;
      std::cout << "Mercury\n" << Weight; 
      break;
    default :
      std::cout << "Invalid planet!\n";
      break;
  }
  
  
  
  
  
  
  
  
  
  
  
}