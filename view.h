#ifndef view_H
#define view_H
#include "DataBase.h"


//class view
//{
//public:
//	static void Insert_view()
//	{
//		string id;
//		string name;
//		string date;
//		string limit;
//		string str;
//		cin >> id >> name >> date >> limit >> str;
//		DataBase::getBase()->Insert(id, name, date, limit, str);
//	}
//	static void Destroy_view()
//	{
//		string id;
//		cin >> id;
//		DataBase::getBase()->Destroy(id);
//	}
//	static void Updata_view()
//	{
//		string id;
//		string newid;
//		string name;
//		string date;
//		string limit;
//		string str;
//		cin >> id >> newid >> name >> date >> limit >> str;
//		DataBase::getBase()->Updata(id, newid, name, date, limit, str);
//	}
//	static void Find_view()
//	{
//		string id;
//		cin >> id;
//		DataBase::getBase()->Find(id);
//	}
//	static void show_view()
//	{
//		DataBase::getBase()->show();
//	}
//};


class view
{
public:
	virtual void Insert_view()
	{ }
	virtual void Destroy_view()
	{		}
	virtual void Updata_view()
	{
		
	}
	virtual void Find_view()
	{
		
	}
	virtual void show_view()
	{
		
	}
	virtual void process() = 0;
	 virtual ~view(){};
};

class view_Insert :public view
{
	void process()
	{
		string id;
		string name;
		string date;
		string limit;
		string str;
		cin >> id >> name >> date >> limit >> str;
		DataBase::getBase()->Insert(id, name, date, limit, str);
	}

	~view_Insert()
	{};
};

class view_Destroy :public view
{
	void process()
	{
		string id;
		cin >> id;
		DataBase::getBase()->Destroy(id);
	}
	~view_Destroy()
	{};
};


class view_Updata :public view
{
	void process()
	{
		string id;
		string newid;
		string name;
		string date;
		string limit;
		string str;
		cin >> id >> newid >> name >> date >> limit >> str;
		DataBase::getBase()->Updata(id, newid, name, date, limit, str);
	}

	~view_Updata()
	{};
};

class view_Find :public view
{
	void process()
	{
		string id;
		cin >> id;
		DataBase::getBase()->Find(id);
	}
	~view_Find()
	{};
};

class view_show :public view
{
	void process()
	{
		DataBase::getBase()->show();
	}

	~view_show()   
	{};
};


#endif

