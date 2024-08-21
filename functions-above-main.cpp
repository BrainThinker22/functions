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