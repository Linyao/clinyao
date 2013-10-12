#include "function.h"

void list(Student student[])
{
	cout<<"-------选课表-------"<<endl;
	cout<<"姓名\t"<<"语文"<<"数学"<<"英语"<<endl;
	for(int i=0;i<studentCount;i++){
		cout<<student[i].name<<"\t"<<student[i].Chinese<<"\t"<<student[i].Math<<"\t"<<student[i].English<<endl;
	}
}
void chooseclass()
{
	struct Student stu;
	cout<<"请输入姓名"<<endl;
	cin>>stu.name;
	int i = find(stu.name);
	if(i!=studentCount) cout<<"您已选过课"<<endl;
	else{
		
	    cout<<"语文课（ok|no)"<<endl;
	    cin>>stu.Chinese;
	    cout<<"数学课（ok|no）"<<endl;
	    cin>>stu.Math;
	    cout<<"英语课（ok|no）"<<endl;
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
		cout<<"查无此学生！"<<endl;
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
	cout<<"请输入姓名"<<endl;
	cin>>stu.name;
	
	int i=find(stu.name);
	if(i==studentCount)
	{
		cout<<"查无此学生"<<endl;
	}
	else{
		cout<<"语文成绩"<<endl;
	    cin>>stu.chineseGrade;
	    cout<<"数学成绩"<<endl;
	    cin>>stu.mathGrade;
	    cout<<"英语成绩"<<endl;
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