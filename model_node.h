#ifndef model_node_H
#define model_node_H
#include"view.h"
typedef void(*Fun)();



class Model_Node
{
private:
	char _key;
	Fun _fun;
	Model_Node * _next;

public:
	Model_Node()
	{
		_next = NULL;
		_key = 0;
		_fun = NULL;
	}
	Model_Node(const Model_Node &src)
	{
		_next = src._next;
		_key = src._key;
		_fun = src._fun;
	}
	Model_Node &operator=(const Model_Node& src)
	{
		if (this == &src)
		{
			return *this;
		}

		_next = src._next;
		_key = src._key;
		_fun = src._fun;
	}
	friend class Model;
};


#endif
