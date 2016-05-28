#pragma once
#include<string>
#include <iostream>
using namespace std;

class Card
{
public:
	//���Ը������
	static int te_code;
	static int stu_code;
	static int lim_code;
	Card* newCard(int type);
	void setName(string _name);
	string getName();
	void setType(int _type);
	int getType();
	void setMoney(float _money);
	float getMoney();
	void setNum(int _num);
	int getNum();
	void setId(int _id);
	int getId();
	void setWork(string _work);
	string getWork();
	void setDate(string _date);
	string getDate();
	void setSex(string _sex);
	string getSex();
	void setJob(string _job);
	string getJob();
	void setCode(int _code);
	int getCode();
	void cost();
	void costMoney();
	void addNum();
	Card(string _name,int _id,string _sex,string _job,int _code,int _type=2,float _money=50.0,int _num=0,string _work="student",string _date="01-01");
	Card();
	Card* cancle(int a,Card c[],int id);
	//~Card();
	//void init(Card *c,int n);
	//void info();

private:
	string name;	//�ֿ��˵�����
	int type;       //�ֿ��˵�����:��ʦ1 ѧ��2 ����3
	float money;	//�������
	int num;		//�˳�����
	int id;			//һ��ͨ���
	string work;	//������λ
	string date;	//��Ч��
	//�������Ա�ְ��������λ�����ʺ�/ѧ��
	string sex;		//�Ա�
	string job;		//ְ��
	int code;		//���ʺ�/ѧ��

};