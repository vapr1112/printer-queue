#pragma once
#include "queue.h"
#include "queue_priority.h"

class printer
{
private:
	queue_priority printing;
	queue information;
public:
	//выводит информацию
	void print_inf() const noexcept { information.print_queue(); }

	void add(user user_p, int priority_p)noexcept;

	//печатает...
	void print() noexcept { printing.print(); }
};

