#pragma once

#include "menu.hpp"

namespace LTikh{
	const MenuItem* show_menu(const MenuItem* current);
	
	const MenuItem* exit(const MenuItem* current);
	
	const MenuItem* writers_lermontov(const MenuItem* current);
	const MenuItem* writers_krilov(const MenuItem* current);
	const MenuItem* writers_go_back(const MenuItem* current);
	
	const MenuItem* pushkin_dubrovskiy(const MenuItem* current);
	const MenuItem* pushkin_onegin(const MenuItem* current);
	const MenuItem* pushkin_winter(const MenuItem* current);
	const MenuItem* pushkin_go_back(const MenuItem* current);
}