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

	printer.print_inf();

	cout << "\nprinting...\n";

	printer.print();

	cout << "\n";

	printer.print();

	cout << "\n";

	printer.print();

	return 0;
}