#include "queue_priority.h"

//���������� �������� � �������
void queue_priority::add(user user_p, int priority_p)
{
	wait.push_back(user_p);
	
	prioritys.push_back(priority_p);

	size_queue = wait.size();
}
//������������� �� �����������, ������������ ����� ������������ ������� �������
user queue_priority::extract()noexcept
{
	int max_priority = prioritys[0];
	int pos_max_priority = 0;
	//���� ���������
	for (size_t i = 1; i < size_queue; i++)
	{
		if (max_priority < prioritys[i])
		{
			max_priority = prioritys[i];
			pos_max_priority = i;
		}
	}
	//����������� ������������ �������
	user priority_el_1 = wait[pos_max_priority];
	
	int priority_el_2 = prioritys[pos_max_priority];
	//������� ��� ��������
	for (size_t i = pos_max_priority; i < size_queue - 1; i++)
	{
		wait[i] = wait[i + 1];
		prioritys[i] = prioritys[i + 1];
	}
	size_queue--;
	return priority_el_1;
}

//������������ ������� �� ����������
void queue_priority::print() noexcept
{
	extract().print();
}