#include "printer.h"

int main()
{
	setlocale(LC_ALL, "rus");

	string name, work;

	user user;

	printer printer;

	size_t priority;

	cout << "\nвведите имя приоритет и работу\n";

	getline(cin, name);

	cin >> priority;

	cin.ignore();

	getline(cin, work);

	user.set_name(name);

	user.set_priority(priority);

	user.set_work(work);

	printer.add(user, priority);

	cout << "\nвведите имя приоритет и работу\n";

	getline(cin, name);

	cin >> priority;

	cin.ignore();

	getline(cin, work);

	user.set_name(name);

	user.set_priority(priority);

	user.set_work(work);

	printer.add(user, priority);

	cout << "\nвведите имя приоритет и работу\n";

	getline(cin, name);

	cin >> priority;

	cin.ignore();

	getline(cin, work);

	user.set_name(name);

	user.set_priority(priority);

	user.set_work(work);

	printer.add(user, priority);

	cout << "\informatoin\n";

	printer.print();

	cout << "\nprinting...\n";

	printer.print_priority();

	cout << "\n";

	printer.print_priority();

	cout << "\n";

	printer.print_priority();

	return 0;
}