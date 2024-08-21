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