#pragma once
#include "user.h"


class queue
{
private:
	vector<user> wait;

	int queue_size;
public:

	//���������� ��������
	void add(user user_p);
	//�������
	void clear()noexcept {queue_size = 0;}
	//������ �������
	int get_count()const noexcept {return queue_size;}
	//���������� ���������� ������� �������� � �������
	void print_queue()const noexcept;
};