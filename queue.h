#pragma once
#include "user.h"


class queue
{
private:
	vector<user> wait;

	int queue_size;
public:

	//добавление элемента
	void add(user user_p);
	//очистка
	void clear()noexcept {queue_size = 0;}
	//размер очереди
	int get_count()const noexcept {return queue_size;}
	//показывает информацию каждого элемента в очереди
	void print_queue()const noexcept;
};