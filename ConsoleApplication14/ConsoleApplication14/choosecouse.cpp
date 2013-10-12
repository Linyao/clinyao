#include "function.h"
#include <iostream>

using namespace std;
int studentCount=1;
struct Student student[100];

int main()
{
	int action;
	do{
		cout<<"-----------菜单-----------"<<endl;
		cout<<"1)学生选课名单"<<endl;
		cout<<"2)学生选课"<<endl;
		cout<<"3)学生退课"<<endl;
		cout<<"4)收录成绩"<<endl;


		cin>>action;
		switch(action){
		case 1:
			list(student);
			break;
		case 2:
			chooseclass();
			break;
		case 3:
			dropclass();
			break;
		case 4:
			includedscores();
		case 5:
			return 0;
		default:
			cout<<"您输入了错误的菜单项，请重新选择！";
		}
	}while(1);
	return 0;
}

