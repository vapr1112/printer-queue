#pragma once
#include "user.h"

class queue_priority
{
	vector<user> wait;

	vector<int> prioritys;
	int size_queue = wait.size();
public:

	//добавление элемента
	void add(user user_p, int priority_p);
	//извлечение элемента
	user extract()noexcept;
	//очистка 
	void clear()noexcept {size_queue = 0;}
	//размер очереди
	int get_count()const noexcept {return size_queue;}
	//демонстрация очереди
	void print() noexcept;
};
