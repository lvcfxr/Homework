#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <list>


int main() {
 
    std::list<std::string> names = { "James", "Charles", "Frank", "Robert", "Alisa", "Rosa"};

	char letter;

	std::cout << "Enter letter" << std::endl;
	std::cin >> letter;

	std::for_each(names.begin(), names.end(), [&letter](std::string name) {
		if (std::tolower(name[0]) == std::tolower(letter))
			std::cout << name << ' ';
		});

    return 0;
}
