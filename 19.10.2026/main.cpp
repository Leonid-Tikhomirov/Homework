#include <iostream>

#include "menu.hpp"
#include "menu_function.hpp"
#include "menu_items.hpp"

int main(){
	
	const LTikh::MenuItem* current = &LTikh::MAIN;
	do {
		current = current->func(current);
	} while (true);
	return 0;
}