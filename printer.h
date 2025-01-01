#pragma once
#include "queue.h"
#include "queue_priority.h"

class printer
{
private:
	queue_priority queue_priority;
	queue queue;
public:
	//выводит информацию о элемнтах 
	void print() const noexcept { queue.print_queue(); }

	void add(user user_p, int priority_p);

	//показывает элементы по их приоритету
	void print_priority() noexcept { queue_priority.print(); }
};

