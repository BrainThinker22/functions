/*

		// FUNCION ABOVE MAIN

#include <iostream>

void happyBirthday(std::string name, int age);

void happyBirthday(std::string name, int age) {
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday dear " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "You are " << age << " years old!\n";
}

int main()
{
	std::string name = "Preslav";
	int age = 25;

	happyBirthday(name, age);

	return 0;
}

*/

/*

		// FUNCTION AFTER MAIN

#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
	std::string name = "Preslav";
	int age = 25;

	happyBirthday(name, age);

	return 0;
}

void happyBirthday(std::string name, int age) {
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "Happy Birthday dear " << name << '\n';
	std::cout << "Happy Birthday to " << name << '\n';
	std::cout << "You are " << age << " years old!\n";
}

*/

/*

		// FUNCTION WHAT TO EAT

#include <iostream>

void eveningFirstMeal(std::string firstMeal);
void eveningSecondMeal(std::string secondMeal);
void Dessert(std::string Dessert);

void eveningFirstMeal(std::string firstMeal) {
	std::cout << "I will eat " << firstMeal << " tonight!\n";
}

void eveningSecondMeal(std::string secondMeal) {
	std::cout << "I will eat " << secondMeal << " tonight!\n";
}

void eveningDessert(std::string Dessert) {
	std::cout << "I will eat " << Dessert << " tonight!\n";
}

int main() {

	std::string firstMeal = "Pizza";
	std::string secondMeal = "Burger";
	std::string Dessert = "Ice cream";

	eveningFirstMeal(firstMeal);
	eveningSecondMeal(secondMeal);
	eveningDessert(Dessert);

	return 0;

}

*/

/*

		// FUNCTION WHERE TO GO

#include <iostream>

void goToFirstPlace(std::string firstPlace);
void goToSecondPlace(std::string secondPlace);
void goToLastPlace(std::string lastPlace);

void goToFirstPlace(std::string firstPlace) {
	std::cout << "I have decided to go to " << firstPlace << " first!\n";
}

void goToSecondPlace(std::string secondPlace) {
	std::cout << "I have decided to go to " << secondPlace << " then!\n";
}

void goToLastPlace(std::string lastPlace) {
	std::cout << "I have decided to go to " << lastPlace << " at the end!\n";
}

int main() {

	std::string firstPlace = "Shopping Mall";
	std::string secondPlace = "Cinema";
	std::string lastPlace = "Restaurant";

	goToFirstPlace(firstPlace);
	goToSecondPlace(secondPlace);
	goToLastPlace(lastPlace);

	return 0;

}

*/

/*

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

*/