#ifndef DataBase_H
#define DataBase_H

#include"List.h"


class DataBase
{
public:
	static DataBase* getBase()
	{
		if (NULL == _Base)
		{
			_Base = new DataBase();
		}
		return _Base;
	}
	void Insert(string id, string name, string date, string limit, string str)
	{
		_list.Insert(id,name,date,limit,str);
	}
	void Destroy(string id)
	{
		_list.Destroy(id);
	}
	void Updata(string id, string newid, string name, string date, string limit, string str)
	{
		_list.Updata(id,newid, name,date,limit, str);
	}
	void Find(string id)
	{
		_list.Find(id);
	}

	DataBase()
	{
		_Base = NULL;
		List _list;
	}
	DataBase(const DataBase &src)
	{
		_Base = new DataBase;
		List _list(src._list);
	}
	DataBase &operator=(const DataBase& src)
	{
		if (this == &src)
		{
			return *this;
		}

		if (_Base != NULL)
		{
			delete _Base;
		}
		_Base = new DataBase;
		_list = src._list;
	}
	void show()
	{
		_list.show();
	}
private:
	static DataBase * _Base;
	List _list;
};
DataBase* DataBase::_Base = NULL;

#endif
