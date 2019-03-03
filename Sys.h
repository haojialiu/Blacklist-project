#include"Control.h"
#include<fcntl.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
#include<unistd.h>
class Sys
{
public:
    void enroll()
    {
        char buff[128] = {0};
        int fd = open("ROOT_FILE",O_RDWR|O_CREAT,0600);
        if( fd == -1)
        {
            cout << "打开文件失败" << endl;
            exit(0);
        }
        char account[56] = {0};
        char password[56] = {0};


        char *brr[128] = {0};
	    int i = 0;
        int ii =0;
        char data[1024] = {0};
        int a = read(fd,data,1024);

	    if(strcmp(data,"\0") != 0)
        {
            char *arr[128] = {0};
            char *s = strtok(data,"$");
            while(s != NULL)
            {
                arr[i++] = s;
                s = strtok(NULL,"$");
            }
            
            s = strtok(arr[0],"#");
            brr[0] = s;
            
            while(s != NULL && arr[ii] != 0)
            {
                s = strtok(arr[ii],"#");
                brr[ii] = s;
                ii++;
            }
        }
        /*while(1)
        {
	        printf( "请输入注册用户名:\n");
            cin >> account;
            int a_len = strlen(account);
            int k = 0;

            while(a_len >= 0)
            {
                if(isalpha(account[--a_len]) == 0)
                {
                    cout << "输入帐号必须为数字或者字母组成" <<endl;
                    k++;
                    break;
                }
            }
            if(k == 1)
            {
                k = 0;
                continue;
            }
            else
            {
                break;
            }
        }*/

	        printf( "请输入注册用户名:\n");
            cin >> account;
        int num = ii;
        while(num > 0)
        {
            if(strcmp(account,brr[--num]) == 0 )
            {
                cout << "此用户名已被使用" << endl;
                cout << "请重新输入要注册到用户名：" << endl;
                cin >> account;

                /*while(1)
                {
                    cout << "请重新输入要注册到用户名：" << endl;
                    cin >> account;
                    int a_len = strlen(account);
                    int k = 0;

                    while(a_len >= 0)
                    {
                        if(isalpha(account[--a_len]) == 0)
                        {
                            cout << "输入帐号必须为数字或者字母组成" <<endl;
                            k++;
                            break;
                        }
                    }

                    if(k == 1)
                    {
                        k = 0;
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }*/
                num = ii;
                continue;
            }
        }
 	

       while(1)
        {
            printf("请输入密码\n");
            cin >> password;
                
            int len2 = strlen(password)-1;
            while(len2 >= 0)
            {
                if(isalpha(password[len2--]) == 1)
                {
                    cout << "输入密码必须为数字或者字母组成" <<endl;
                    break;
                }
            }
            if(len2 >= 0)
            {
                continue;
            }
            else
            {
                printf("申请成功\n");
                break;
            }
        }

        lseek(fd,0,SEEK_END);
        int size = strlen(account);
        write(fd,account,size);

        lseek(fd,0,SEEK_END);
        write(fd,"#",1);
        lseek(fd,0,SEEK_END);
        size = strlen(password);
        write(fd,password,size);
        lseek(fd,0,SEEK_END);
        write(fd,"$",1);
    }

    void Login()
    {  
        int fd = open("ROOT_FILE",O_RDWR|O_CREAT,0600);
        char account[56] = {0};
        char password[56] = {0};


        char *brr[128] = {0};
	    int i = 0;
        int ii =0;
        char data[1024] = {0};
        int a = read(fd,data,1024);

        char *arr[128] = {0};
	    if(strcmp(data,"\0") != 0)
        {
            char *s = strtok(data,"$");
            while(s != NULL)
            {
                arr[i++] = s;

                s = strtok(NULL,"$");
            }
        }
        while(1)
        {

        int num  = i - 1;
        int time = 0;
            if(time == 5)
            {
                cout << "输入次数超过5次" <<endl;
                break;
            }
            cout << "请输入帐号"<<endl;
            cin >> account;
            cout << "请输入密码"<<endl;
            cin >> password; 
            time++; 
            char import[128] = {0};
            strcat(import,account);
            strcat(import,"#");
            strcat(import,password);
        //    cout << import <<endl;
        //    cout << num <<endl;

      //      cout << arr[num] << endl;
            int T = num;
            int t = 0;
            while(num >= 0)
            {

                if(strcmp(arr[num--],import) == 0)
                {
                    cout << "登录成功"<<endl;
                    t++;
                    Control control1;
                    control1.process();
                    break;
                }
                T--;
            }
            if(t != 0)
            {
                break;
            }
            if(T<0)
            {
                cout << "帐号密码输入错误请，重新输入帐号密码"<<endl;
                num = i -2;
                continue;
            }
        }
    }

};
