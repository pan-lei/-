#include "Card.h"

int Card::te_code = 1006;
int Card::stu_code = 2012;
int Card::lim_code = 3004;

void Card::setName(string _name)
{
	name = _name;
}

string Card::getName()
{
	return name;
}
void Card::setType(int _type)
{
	type = _type;
}

int Card::getType()
{
	return type;
}

void Card::setMoney(float _money)
{
	money = _money;
}

float Card::getMoney()
{
	return money;
}

void Card::setNum(int _num)
{
	num = _num;
}

int Card::getNum()
{
	return num;
}

void Card::setId(int _id)
{
	id = _id;
}

int Card::getId()
{
	return id;
}

void Card::setWork(string _work)
{
	work = _work;
}

string Card::getWork()
{
	return work;
}

void Card::setDate(string _date)
{
	date = _date;
}

string Card::getDate()
{
	return date;
}

void Card::setSex(string _sex)
{
	sex = _sex;
}

string Card::getSex()
{
	return sex;
}

void Card::setJob(string _job)
{
	job = _job;
}

string Card::getJob()
{
	return job;
}

void Card::setCode(int _code)
{
	code = _code;
}

int Card::getCode()
{
	return code;
}

void Card::costMoney()
{
	money-=2;
}

void Card::addNum()
{
	num++;
}

void Card::cost() {
	if(type == 1){
		cout << "��ӭ����916·������" << endl;
		cout << "��������ʦ��������ѳ˳�" << endl;
		cout << endl;
		addNum();
		//c.addpeopleNumber();
	}
	else if(type == 2) {
		cout << endl;
		cout << "��ӭ����916·������" << endl;
		cout << "������ѧ�������軨����Ԫ" << endl;
		float m = getMoney();
		if(m <2.0) {
			cout << "���Ϊ" <<getMoney() << "Ԫ��������Ԫ��������˳������³�" << endl;
		}
		else if(m<=5) {
			cout << "�����ͣ����Ѻ�ʣ" <<getMoney()-2 << "Ԫ,�뼰ʱ��ֵ." << endl;
			cout << endl;
			costMoney();
			addNum();
			//c.addpeopleNumber();
		}
		else{
			cout << "���Ѻ�ʣ" <<getMoney()-2 << "Ԫ." << endl;
			cout << endl;
			costMoney();
			addNum();
			//c.addpeopleNumber();
		}
	}
	else {
		cout << endl;
		cout << "��ӭ����916·������" << endl;
		cout << "���������ƿ�������ѳ˳�20��" << endl;
		int i = getNum();
		if(i<19) {
			cout << "��������" << getNum()+1 << "�γ˳�,���" << endl;
			addNum();
			//c.addpeopleNumber();
		}
		//��ʮ�Ŵγ˳���ˢ����ʾ19����ʱ�ǵ�20����
		else if(i == 19) {
			cout << "���������µ�20�γ˳��������һ����ѳ˳������µ��´γ˳����շѡ�" <<endl;
			addNum();
			//c.addpeopleNumber();
		}
		else {
			cout << "���������µ�"<< getNum()+1 << "�γ˳�����Ҫ�շ�." << endl;
			float m = getMoney();
			if(m <2.0) {
				cout << "���Ϊ" <<getMoney() << "Ԫ��������Ԫ��������˳������³�" << endl;
			}
			else if(m<=5) {
				cout << "�����ͣ����Ѻ�ʣ" <<getMoney()-2 << "Ԫ,�뼰ʱ��ֵ." << endl;
				costMoney();
				addNum();
				//c.addpeopleNumber();
			}
			else{
				cout << "���Ѻ�ʣ" <<getMoney()-2 << "Ԫ." << endl;
				costMoney();
				addNum();
				//c.addpeopleNumber();
			}
		}
	}
}


Card::Card(string _name,int _id, string _sex,string _job,int _code,int _type,float _money,int _num,string _work,string _date)
{
	name = _name;
	id = _id;
	type = _type;
	money = _money;
	num = _num;
	work = _work;
	date = _date;
	sex = _sex;
	job = _job;
	code = _code;
}
Card::Card()
{

}

/*Card::~Card()
{

}*/

/*void Card::info()
{
	//�������Ա�ְ��������λ�����ʺ�/ѧ��
	cout << "�밴����ʾ���������Ϣ��" << endl;
	cout << "������" << endl;
	cin >> name;
	cout << "�Ա�" << endl;
	cin >> sex;
	cout << "������ְ��" << endl;
	cin >> job;
	cout << "������������λ��" << endl;
	cin >> work;
	cout << "�����빤�ʺţ���ʦ��/ѧ�ţ�ѧ����" << endl;
	cin >> code;
}
*/

Card* Card::newCard(int type)
{
	Card *c;
	string _name;	//�ֿ��˵�����
	string _work;	//������λ
	//�������Ա�ְ��������λ�����ʺ�/ѧ��
	string _sex;		//�Ա�
	string _job;		//ְ��
	int _code;		//���ʺ�/ѧ��
	cout << "�밴����ʾ���������Ϣ��" << endl;
	cout << "������" << endl;
	cin >> _name;
	cout << "�Ա�" << endl;
	cin >> _sex;
	cout << "������ְ��" << endl;
	cin >> _job;
	cout << "������������λ��" << endl;
	cin >> _work;

	if (type == 1)
	{

		cout << "�����빤�ʺ�:" << endl;
		cin >> _code;
		//string _name,int _id, string _sex,string _job,int _code,int _type,float _money,int _num,string _work,string _date
		c = new Card(_name,++te_code,_sex,_job,_code,1,100.0,0,_work,"01-01");
		cout << "����ɹ���" << endl;
		cout << "���Ŀ�����1007"  << endl;
	}
	else if(type == 2)
	{
		cout << "������ѧ��:" << endl;
		cin >> _code;
		c = new Card(_name,++stu_code,_sex,_job,_code,2,100.0,0,_work,"01-01");
		cout << "����ɹ���" << endl;
		cout << "���Ŀ�����2013"  << endl;
	}
	else if(type == 3)
	{
		cout << "�����빤�ʺ�(��ʦ)/ѧ�ţ�ѧ����:" << endl;
		cin >> _code;
		c = new Card(_name,++lim_code,_sex,_job,_code,3,100.0,0,_work,"01-01");
		cout << "����ɹ���" << endl;
		cout << "���Ŀ�����3005"  << endl;
	}
	else 
	{
		cout << "���뿨�����ʹ���������Ϣ������" << endl;
	}
	//string _name,int _id,int _type,float _money,int _num,string _work,string _date
	//Card c = Card(name,++stu_code,2,100.0,0,work,"01-01");
	return c;
}
Card* Card::cancle(int a,Card c[],int id)
{
	for(int i=0; i<a; i++)
	{
		if (c[i].getId() == id)
		{
			for(int j=i; j<a-1; j++)
			{
				c[j]=c[j+1];
			}
			c[a-1]=Card();
		}
	}
	cout << "ע���ɹ���" << endl;
	return c;
}