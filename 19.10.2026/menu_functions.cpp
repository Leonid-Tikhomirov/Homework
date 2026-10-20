#include <cstdlib>
#include <iostream>>

#include "menu_function.hpp"

const LTikh::MenuItem* LTikh::show_menu(const MenuItem* current) {
	std::cout << "Hello World братик. Че выбираешь?" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Сюда пиши цыфарку > ";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}



const LTikh::MenuItem* LTikh::exit(const MenuItem* current) {
	std::exit(0);
}

const LTikh::MenuItem* LTikh::writers_lermontov(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const LTikh::MenuItem* LTikh::writers_krilov(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}



const LTikh::MenuItem* LTikh::pushkin_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}

const LTikh::MenuItem* LTikh::pushkin_dubrovskiy(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const LTikh::MenuItem* LTikh::pushkin_onegin(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const LTikh::MenuItem* LTikh::pushkin_winter(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}



const LTikh::MenuItem* LTikh::writers_go_back(const MenuItem* current) {
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}