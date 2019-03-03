#ifndef model_H
#define model_H
#include"view.h"
#include<map>
#include"model_node.h"


//class Model
//{
//private:
//	Model_Node *_head;
//	int _count;
//public:
//	Model()
//	{
//		_head = NULL;
//		_count = 0;
//	}
//	Model(const Model &src)
//	{
//		_count = src._count;
//		int n = src._count;
//		Model_Node * src_head = src._head;
//		while (n-- > 0)
//		{
//			Model_Node *s = new Model_Node;
//			s->_next = src_head;
//			s->_key = src_head->_key;
//			s->_fun = src_head->_fun;
//			_head = s;
//			_count++;
//		}
//	}
//
//	Model &operator=(const Model& src)
//	{
//		if (this == &src)
//		{
//			return *this;
//		}
//		if (_head != NULL)
//		{
//			delete _head;
//		}
//
//		_count = src._count;
//		int n = src._count;
//		Model_Node * src_head = src._head;
//		while (n-- > 0)
//		{
//			Model_Node *s = new Model_Node;
//			s->_next = src_head;
//			s->_key = src_head->_key;
//			s->_fun = src_head->_fun;
//			_head = s;
//			_count++;
//		}
//	}
//
//	void Insert_node(char key, Fun fun)
//	{
//		Model_Node *s = new Model_Node;
//		s->_key = key;
//		s->_fun = fun;
//		s->_next = _head;
//		_head = s;
//		_count++;
//	}
//	void Destroy_node(char key)
//	{
//		Model_Node *p = _head->_next;
//		Model_Node *pp = _head;
//		while (p != NULL)
//		{
//
//			if (p->_key == key)
//			{
//				pp->_next = p->_next;
//				delete p;
//				_count--;
//				break;
//			}
//			p = p->_next;
//			pp = pp->_next;
//			if (p != NULL)
//			{
//				cout << "没有找到" << endl;
//				return;
//			}
//		}
//	}
//	Fun search(char c)
//	{
//		Model_Node *p = _head;
//		while (p != NULL)
//		{
//			if (p->_key == c)
//			{
//				return p->_fun;
//			}
//			p = p->_next;
//			if (p == NULL)
//			{
//				cout << "没有此功能" << endl;
//			}
//		}
//	}
//	void show()
//	{
//		Model_Node *p = _head;
//		while (p != NULL)
//		{
//			cout << p->_key << "   " << p->_fun << endl;
//			p = p->_next;
//		}
//	}
//
//};


class Model
{
public:
	Model()
	{

		_model.insert(make_pair(1, new view_Insert()));
		_model.insert(make_pair(2, new view_Destroy()));
		_model.insert(make_pair(3, new view_Updata()));
		_model.insert(make_pair(4, new view_Find()));
		_model.insert(make_pair(5, new view_show()));
		/*
        _model.insert(make_pair(1, Insert));
		_model.insert(make_pair(3, Updata));
		_model.insert(make_pair(2, Destroy));
		_model.insert(make_pair(4, Find));
		_model.insert(make_pair(5, show));*/
	}
	~Model()
	{
        /*
		delete Insert;
		delete Updata;
		delete Destroy;
		delete Find;
		delete show;*/
	}
//	map<int, view*> _model;
private:
	map<int, view*> _model;


    /*
	view * Insert = new view_Insert();
	view * Updata = new view_Updata();
	view * Destroy = new view_Destroy();
	view * Find = new view_Find();
	view * show = new view_show();*/

	friend class Control;
};



#endif

