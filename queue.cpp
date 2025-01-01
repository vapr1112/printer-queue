#include "queue.h"

//добавление
void queue::add(user user_p)
{
	queue_size = wait.size();
	wait.push_back(user_p);
}
//показывает информацию о всех объектах очереди
void queue::print_queue()const noexcept
{
	for (int i = 0; i <= queue_size; i++)
	{
		wait[i].print();
		cout << "\n";
	}
}