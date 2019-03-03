#ifndef LIST_H
#define LIST_H
#include"Node.h"
#include"stdio.h"


class List
{
private:
	Node *_head;
	int _count;
public:
	List()
	{
		_head = NULL;
		_count = 0;
	}
	List(const List &src)
	{
		_count = src._count;
		int n = src._count;
		Node * src_head = src._head;
		while (n-- > 0)
		{
			Node *s = new Node;
			s->_date = src_head->_date;
			s->_limit = src_head->_limit;
			s->_id = src_head->_id;
			s->_str = src_head->_str;
			s->_name = src_head->_name;
			s->_next = _head;
			src_head = src_head->_next;
			_head = s;
			_count++;
		}
	}

	List &operator=(const List& src)
	{
		if (this == &src)
		{
			return *this;
		}
		if (_head != NULL)
		{
			delete _head;
		}

		_count = src._count;
		int n = src._count;
		Node * src_head = src._head;
		while (n-- > 0)
		{
			Node *s = new Node;
			s->_date = src_head->_date;
			s->_limit = src_head->_limit;
			s->_id = src_head->_id;
			s->_str = src_head->_str;
			s->_name = src_head->_name;
			s->_next = _head;
			src_head = src_head->_next;
			_head = s;
			_count++;
		}
	}

	void Insert(string id, string name, string date, string limit, string str)
	{
		Node *s = new Node;
		s->_date = date;
		s->_limit = limit;
		s->_id = id;
		s->_str = str;
		s->_name = name;
		s->_next = _head;
		_head = s;
		_count++;
		cout << "插入完成" <<endl;
	}

	void Destroy(string id)
	{
		Node *p = _head;
		/*if (p->_id == id)
		{
			_head = p->_next;
			delete p;
			_count--;
			printf("删除完成\n");
		}
		else
		{
			p = _head->_next;
		}*/
		
		Node *pp = _head;
			
		while (p != NULL)
		{
			
			if (p->_id == id)
			{
				if(p == _head)
				{
					_head = p->_next;
					delete p;
					_count--;
					printf("删除完成\n");
					break;
				}
				else
				{
					while( pp -> _next != p)
					{
						pp = pp->_next;
					}
					pp->_next = p->_next;
					delete p;
					_count--;
					printf("删除完成\n");
					break;
				}
			}
			p = p->_next;
			
			if (p == NULL)
			{
				cout << "id错误" << endl;
				return;
			}
		}
	}

	void Updata(string id,string newid, string name, string date, string limit, string str)
	{
		Node *p = _head;
		while (p != NULL)
		{
			if (p->_id == id)
			{
				p->_date = date;
				p->_id = newid;
				p->_limit = limit;
				p->_name = name;
				p->_str = str;
				cout << "更改完成" << endl;
				break;
			}
			p = p->_next;
			if (p == NULL)
			{
				cout << "id错误" << endl;
				return;
			}
		}
	}

	void Find(string id)
	{
		Node *p = _head;
		while (p != NULL)
		{
			if (p->_id == id)
			{
				cout << "id:" << p->_id << endl;
				cout << "name:" << p->_name << endl;
				cout << "date:" << p->_date << endl;
				cout << "limit:" << p->_limit << endl;
				cout << "str:" << p->_str << endl;
				break;
			}
			p = p->_next;
			if (p == NULL)
			{
				cout << "id错误" << endl;
				return;
			}
		}
	}
		friend class DateBase;
	/*void show()
	{
		cout << "id:" << _head->_id << endl;
		cout << "name:" << _head->_name << endl;
		cout << "date:" << _head->_date << endl;
		cout << "limit:" << _head->_limit << endl;
		cout << "str:" << _head->_str << endl;

		cout << endl;
	}*/
		void show()
		{
			Node *p = _head;
			while (p != NULL)
			{
				cout << "id:" << p->_id << endl;
				cout << "name:" << p->_name << endl;
				cout << "date:" << p->_date << endl;
				cout << "limit:" << p->_limit << endl;
				cout << "str:" << p->_str << endl;
				cout << endl;
				p = p->_next;
			}
		}
};
	


#endif

