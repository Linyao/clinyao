#include "function.h"

void list(Student student[])
{
	cout<<"-------ѡ�α�-------"<<endl;
	cout<<"����\t"<<"����"<<"��ѧ"<<"Ӣ��"<<endl;
	for(int i=0;i<studentCount;i++){
		cout<<student[i].name<<"\t"<<student[i].Chinese<<"\t"<<student[i].Math<<"\t"<<student[i].English<<endl;
	}
}
void chooseclass()
{
	struct Student stu;
	cout<<"����������"<<endl;
	cin>>stu.name;
	int i = find(stu.name);
	if(i!=studentCount) cout<<"����ѡ����"<<endl;
	else{
		
	    cout<<"���ĿΣ�ok|no)"<<endl;
	    cin>>stu.Chinese;
	    cout<<"��ѧ�Σ�ok|no��"<<endl;
	    cin>>stu.Math;
	    cout<<"Ӣ��Σ�ok|no��"<<endl;
	    cin>>stu.English;
	

	    student[i].name=stu.name;
	    student[i].English = stu.English;
	    student[i].Chinese=stu.Chinese;
	    student[i].Math=stu.Math;
	    
		studentCount++;
	}
}
void dropclass()
{
	struct Student stu;
	string studentName;
	cin>>studentName;

	int i = find(stu.name);
	if(i == studentCount){
		cout<<"���޴�ѧ����"<<endl;
	}
	else{
		for(int j=i;j++;j<studentCount)
		{
			student[i].name=student[i+1].name;
			student[i].Chinese=student[i+1].Chinese;
			student[i].Math=student[i+1].Math;
			student[i].English=student[i+1].English;
		}
		studentCount--;
	}

}
void includedscores()
{
	struct Student stu;
	cout<<"����������"<<endl;
	cin>>stu.name;
	
	int i=find(stu.name);
	if(i==studentCount)
	{
		cout<<"���޴�ѧ��"<<endl;
	}
	else{
		cout<<"���ĳɼ�"<<endl;
	    cin>>stu.chineseGrade;
	    cout<<"��ѧ�ɼ�"<<endl;
	    cin>>stu.mathGrade;
	    cout<<"Ӣ��ɼ�"<<endl;
	    cin>>stu.englishGrade;
		student[i].English = stu.English;
	    student[i].Chinese=stu.Chinese;
	    student[i].Math=stu.Math;
	}
}
int find(string name)
{
	int j;
	for(j=0;j++;j<studentCount)
	{
		if(name==student[j].name){
			break;
		}
	}
	return j;
}