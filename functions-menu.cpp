// FUNCTIONS MENU AT A RESTAURANT

#include <iostream>

void Starter(std::string salad, std::string soup, double priceSalad, double priceSoup, double sumStarter);
void mainMeal(std::string steak, std::string juice, double priceSteak, double priceJuice, double sumMainMeal);
void Dessert(std::string dessert, std::string hotBeverage, double priceDessert, double priceCoffee, double sumDessert);

void Starter(std::string salad, std::string soup, double priceSalad, double priceSoup, double sumStarter) {
	std::cout << "I would like to order both " << salad << " and " << soup << '\n';
	std::cout << "It will cost me " << sumStarter << '\n';
}

void mainMeal(std::string steak, std::string juice, double priceSteak, double priceJuice, double sumMainMeal) {
	std::cout << "I would like to order a " << steak << " and a " << juice << '\n';
	std::cout << "It will cost me " << sumMainMeal << '\n';
}

void Dessert(std::string dessert, std::string hotBeverage, double priceDessert, double priceCoffee, double sumDessert) {
	std::cout << "I would like to order a " << dessert << " and a " << hotBeverage << '\n';
	std::cout << "It will cost me " << sumDessert << '\n';
}

int main() {

	std::string salad = "CaesarSalad";
	std::string soup = "ChickenSoup";
	std::string steak = "PorkSteak";
	std::string juice = "PeachJuice";
	std::string dessert = "Cake";
	std::string hotBeverage = "Coffee";

	double priceSalad = 10.99;
	double priceSoup = 4.49;
	double priceSteak = 19.99;
	double priceJuice = 2.99;
	double priceDessert = 5.99;
	double priceCoffee = 3.99;
	double sumStarter = priceSalad + priceSoup;
	double sumMainMeal = priceSteak + priceJuice;
	double sumDessert = priceDessert + priceCoffee;

	Starter(salad, soup, priceSalad, priceSoup, sumStarter);
	mainMeal(steak, juice, priceSteak, priceJuice, sumMainMeal);
	Dessert(dessert, hotBeverage, priceDessert, priceCoffee, sumDessert);

	return 0;
}