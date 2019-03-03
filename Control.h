#ifndef control_H
#define control_H

#include"model.h"


class Control
{
private:
	Model _MODEL;
public:
	void process()
	{
		while (1)
		{
			cout << "输入命令" << endl;
			cout << "1:插入	" << "2:删除	" << "3:更改	" << "4:查询	" << "6:退出	" << endl;
			char c ;
			cin >> c;
			if (c == '6')
			{
				cout << "关闭程序" << endl;
				return;
			}
			else if (c == '1')
			{
				cout << "请输入插入信息" << endl;
				_MODEL._model[1]->process();
                cout <<endl;
			//	cout << "插入完成" << endl;
			}
			else if (c == '2')
			{
				cout << "请输入id" << endl;
				_MODEL._model[2]->process();;

                cout <<endl;
				//cout << "删除完成" << endl;
			}
			else if (c == '3')
			{

				cout << "请输入id及更改内容" << endl;
				_MODEL._model[3]->process();;
                cout <<endl;
				//cout << "更改完成"<< endl;
			}
			else if (c == '4')
			{
				cout << "请输入id" << endl;
				_MODEL._model[4]->process();;

                cout <<endl;
			}
			else if (c == '5')
			{
				cout << "打印结果：" << endl;
				_MODEL._model[5]->process();;
                cout <<endl;
			}

			//_model.search(c)();
		}

		/*_model.show();*/
	}
	Control()
	{
		
	}
	Control(const Control&src)
	{
		Model _model(src._MODEL);
	}
	Control &operator=(const Control& src)
	{
		if (this == &src)
		{
			return *this;
		}
		_MODEL = src._MODEL;
	}
};




#endif
