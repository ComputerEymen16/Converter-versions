#include <iostream>
int main() {
	std::cout << "Baslamak icin Enter tusuna basin..." << std::endl;
	getchar(); // Enter tusuna basildi mi

	//deiskenleri belirleme
	double santimetre, metre, kilometre;

	//Length is received from the user in centimeters.
	std::cout << "Santimetre cinsinden uzunluk giriniz:  ";
	std::cin >> santimetre;

	//Metre ve kilometre santimatreye dönüştürülür.
	metre = santimetre / 100.0;
	kilometre = santimetre / 100000.0;

	//Sonuçlar ekrana yazdırılır.
	std::cout << "Metre cinsinden uzunluk: " << metre << " m" << std::endl;
	std::cout << "Kilometre cinsinden uzunluk:  " << kilometre << " km" << std::endl;
	
	std::cout << "Kapatmak icin enter tusuna basin..." << std::endl;
	getchar(); // terminal kapanmasi icin Enter tusuna basilmasini bekler
	getchar();

	return 0;
}