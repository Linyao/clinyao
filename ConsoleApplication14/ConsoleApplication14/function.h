#include<iostream>
#include<string>

using namespace std;

struct Student{
    string name;
	string Chinese;
	string Math;
	string English;
	int englishGrade;
	int mathGrade;
	int chineseGrade;
};
extern struct Student student[100];
extern int studentCount;

void list(Student student[]);
void chooseclass();
void dropclass();
void includedscores();
int find(string name);

