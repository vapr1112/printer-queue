#include "printer.h"

void printer::add(user user_p, int priority_p)noexcept
{
	information.add(user_p);

	printing.add(user_p, priority_p);
}