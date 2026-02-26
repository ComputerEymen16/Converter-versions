#include <iostream>
int main() {
	std::cout << "Press Enter to begin." << std::endl;
	getchar(); // Wait for the user to press Enter
	
	//set variables
	double centimeter, meter, kilometer;
	
	//Length is received from the user in centimeters.
	std::cout << "Enter the length in centimeters: ";
	std::cin >> centimeter;
	
	//Length in centimeters is converted to meters and kilometers.
	meter = centimeter / 100.0;
	kilometer = centimeter / 100000.0;
	
	//The results are printed to the screen.
	std::cout << "Length in meters: " << meter << " m" << std::endl;
	std::cout << "Length in kilometers: " << kilometer << " km" << std::endl;

	std::cout << "Press Enter to exit." << std::endl;
	getchar(); // The terminal waits for the Enter key to be pressed before closing.
	getchar();

	return 0;
}