#include "function.h"
#include <iostream>

using namespace std;
int studentCount=1;
struct Student student[100];

int main()
{
	int action;
	do{
		cout<<"-----------�˵�-----------"<<endl;
		cout<<"1)ѧ��ѡ������"<<endl;
		cout<<"2)ѧ��ѡ��"<<endl;
		cout<<"3)ѧ���˿�"<<endl;
		cout<<"4)��¼�ɼ�"<<endl;


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
			cout<<"�������˴���Ĳ˵��������ѡ��";
		}
	}while(1);
	return 0;
}

