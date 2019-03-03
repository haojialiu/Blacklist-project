#ifndef Node_H
#define Node_H

#include<iostream>
#include<string>

#define SIZE 10
using namespace std;

class Node
{
	/*class Date
	{
	int _year;
	int _month;
	int _day;
	Date(int year=0,int month=0,int day=0)
	{
	_year = year;
	_month = month;
	_day = day;
	}
	Date(const Date& src)
	{
	_year = src._year;
	_month = src._month;
	_day = src._day;
	}
	Date &operator=(const Date& src)
	{
	if(this == &src)
	{
	return *this;
	}
	_year = src._year;
	_month = src._month;
	_day = src._day;
	}

	};*/
private:
	Node *_next;
	string _name;
	string _id;
	string _date;
	string _str;
	string _limit;
public:
	Node()
	{
		//_date = 0;
		//_limit = 0;
		//_id = {0};
		//_name = {0};
		//_str = {0};
		_next = NULL;
	}
	Node(const Node &src)
	{
		_date = src._date;
		_limit = src._limit;
		_id = src._id;
		_name = src._name;
		_str = src._str;
		_next = src._next;
	}
	Node &operator=(const Node& src)
	{
		if (this == &src)
		{
			return *this;
		}

		_date = src._date;
		_limit = src._limit;
		_id = src._id;
		_name = src._name;
		_str = src._str;
		_next = src._next;
		return *this;

	}
	//~Node();
	//void show();
	friend class List;
};

#endif
