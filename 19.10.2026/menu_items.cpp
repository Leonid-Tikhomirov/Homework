#include <cstddef>

#include "menu_items.hpp"
#include "menu_function.hpp"

const LTikh::MenuItem LTikh::PUSHKIN_DUBROVSKIY = {
	"1 - Дубровский", LTikh::pushkin_dubrovskiy, &LTikh::WRITERS_PUSHKIN
};

const LTikh::MenuItem LTikh::PUSHKIN_ONEGIN = {
	"2 - Евгений Онегин", LTikh::pushkin_onegin, &LTikh::WRITERS_PUSHKIN
};

const LTikh::MenuItem LTikh::PUSHKIN_WINTER = {
	"3 - Зимний вечер", LTikh::pushkin_winter, &LTikh::WRITERS_PUSHKIN
};

const LTikh::MenuItem LTikh::PUSHKIN_GO_BACK = {
	"0 - Выйти отсюда", LTikh::pushkin_go_back, &LTikh::WRITERS_PUSHKIN
};

namespace {
	const LTikh::MenuItem* const pushkin_children[] = {
		&LTikh::PUSHKIN_GO_BACK,
		&LTikh::PUSHKIN_DUBROVSKIY,
		&LTikh::PUSHKIN_ONEGIN,
		&LTikh::PUSHKIN_WINTER
	};
	const int pushkin_size = sizeof(pushkin_children) / sizeof(pushkin_children[0]);
}

const LTikh::MenuItem LTikh::WRITERS_PUSHKIN = {
	"1 - Читать Пушкина", LTikh::show_menu, &LTikh::WRITERS, pushkin_children, pushkin_size
};

const LTikh::MenuItem LTikh::WRITERS_LERMONTOV = {
	"2 - Читать Лермонтова", LTikh::writers_lermontov, &LTikh::WRITERS
};

const LTikh::MenuItem LTikh::WRITERS_KRILOV = {
	"3 - Читать Крылова", LTikh::writers_krilov, &LTikh::WRITERS
};

const LTikh::MenuItem LTikh::WRITERS_GO_BACK = {
	"0 - Выйти", LTikh::writers_go_back, &LTikh::WRITERS
};

namespace {
	const LTikh::MenuItem* const writers_children[] = {
		&LTikh::WRITERS_GO_BACK,
		&LTikh::WRITERS_PUSHKIN,
		&LTikh::WRITERS_LERMONTOV,
		&LTikh::WRITERS_KRILOV
	};
	const int writers_size = sizeof(writers_children) / sizeof(writers_children[0]);
}

const LTikh::MenuItem LTikh::WRITERS = {
	"1 - Русские писатели", LTikh::show_menu, &LTikh::MAIN, writers_children, writers_size
};

const LTikh::MenuItem LTikh::EXIT = {
	"0 - Чет надоело", LTikh::exit, &LTikh::MAIN
};

namespace {
	const LTikh::MenuItem* const main_children[] = {
		&LTikh::EXIT,
		&LTikh::WRITERS
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const LTikh::MenuItem LTikh::MAIN = {
	nullptr, LTikh::show_menu, nullptr, main_children, main_size
};