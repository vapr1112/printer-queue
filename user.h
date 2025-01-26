#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class user
{
private:
	string name;
	size_t priority;
	string work;

public:

	user()noexcept : name{ string()}, priority{1}, work{string()} {}

	user(string name_p, size_t  priority_p, string work_p)noexcept : name{ name_p }, priority{ priority_p }, work {work_p}{}

	void set_name(string name_p)noexcept {name = name_p;}

	void set_priority(const size_t priority_p)noexcept {priority = priority_p;}

	void set_work(string work_p)noexcept {	work = work_p;}

	string get_name() const noexcept{return name;}

	size_t get_priority() const noexcept{return priority;}

	string get_work() const noexcept{return work;}

	void print()const noexcept {cout << name << " " << priority << " " << work;}

};

