#include "printer.h"

void printer::add(user user_p, int priority_p)
{
	queue.add(user_p);

	queue_priority.add(user_p, priority_p);
}