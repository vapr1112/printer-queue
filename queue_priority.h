#pragma once
#include "user.h"

class queue_priority
{
	vector<user> wait;

	vector<int> prioritys;
	int size_queue = 0;
public:

	//���������� ��������
	void add(user user_p, int priority_p)noexcept;
	//���������� ��������
	user extract()noexcept;
	//������� 
	void clear()noexcept {size_queue = 0;}
	//������ �������
	int get_count()const noexcept {return size_queue;}
	//������������ �������
	void print() noexcept;
};
