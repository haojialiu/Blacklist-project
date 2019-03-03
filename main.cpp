
//#include"view.h"
//#include"model.h"
//#include"Control.h"
#include"Sys.h"
//
//
//DataBase* view::_Data = DataBase::getBase();
//void view::Insert_view(string id, string name, string date, string limit, string str)
//{
//	_Data->Insert(id, name, date, limit, str);
//}
//void view::show_view()
//{
//	_Data->show();
//}


int main()
{
	//List list1;
	//list1.Insert("111","张三","2018.11.11","2018.12.12","开挂");
	//list1.Insert("222", "222", "222", "222", "222");
	//list1.Insert("2333", "222", "222", "222", "222");
	//list1.Insert("444444", "222", "222", "222", "222");
	////list1.Updata("111","008","张三","2018.11.11","2018.12.12","开挂");
	//list1.show();
	////list1.Find("007");

	/*view view1;
	view1.Insert_view("007", "张三", "2018.11.11", "2018.12.12", "开挂");
	view1.show_view();*/


	/*view view1;
	view1.Insert_view();
	view1.show_view();
	view1.Insert_view();
	view1.Insert_view();
	view1.show_view();*/

	//Model model1;
	//Fun fun1 = &view::Insert_view;
	//Fun fun2 = &view::Destroy_view;
	//Fun fun3 = &view::Updata_view;
	//Fun fun4 = &view::Find_view;
	//Fun fun5 = &view::show_view;
	//model1.Insert_node('1',fun1);
	//model1.Insert_node('2', fun2);
	//model1.Insert_node('3', fun3);
	//model1.Insert_node('4', fun4);
	//model1.Insert_node('5', fun5);
	//model1.show();

	//model1.search('1')();
	//model1.search('5')();
	///*view::show_view();*/ 



	//Control control1;
	//control1.process();

    Sys sys1;
    while(1)
    {
        cout << "请输入" <<endl;
        cout<< "1、注册     2、登录"  << endl;
        int a = 0;
        cin >> a;
        if(a == 1)
        {
            sys1.enroll();
            cout << "请登录" <<endl; 
            sys1.Login();
            break;
        }
        else if(a == 2)
        {
            sys1.Login();
            break;
        }
        else
        {
            cout << "输入的命令错误" << endl;
            continue;
        }
    }
}
