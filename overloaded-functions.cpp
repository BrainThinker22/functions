#include <iostream>

void makeSalad();
void makeSalad(std::string tomato);
void makeSalad(std::string tomato, std::string cucumber);

void makeSalad() {
	std::cout << "Here is your salad!" << '\n';
}
void makeSalad(std::string tomato) {
	std::cout << "Here is your salad!" << '\n';
}
void makeSalad(std::string tomato, std::string cucumber) {
	std::cout << "Here is your " << tomato << " and " << cucumber << " salad!" << '\n';
}

int main()
{
	makeSalad("tomato", "cucumber");

	return 0;

}
