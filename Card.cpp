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
		cout << "欢迎乘坐916路公交车" << endl;
		cout << "您持有老师卡，可免费乘车" << endl;
		cout << endl;
		addNum();
		//c.addpeopleNumber();
	}
	else if(type == 2) {
		cout << endl;
		cout << "欢迎乘坐916路公交车" << endl;
		cout << "您持有学生卡，需花费两元" << endl;
		float m = getMoney();
		if(m <2.0) {
			cout << "余额为" <<getMoney() << "元，不足两元，不允许乘车，请下车" << endl;
		}
		else if(m<=5) {
			cout << "余额过低，消费后还剩" <<getMoney()-2 << "元,请及时充值." << endl;
			cout << endl;
			costMoney();
			addNum();
			//c.addpeopleNumber();
		}
		else{
			cout << "消费后还剩" <<getMoney()-2 << "元." << endl;
			cout << endl;
			costMoney();
			addNum();
			//c.addpeopleNumber();
		}
	}
	else {
		cout << endl;
		cout << "欢迎乘坐916路公交车" << endl;
		cout << "您持有限制卡，可免费乘车20次" << endl;
		int i = getNum();
		if(i<19) {
			cout << "这是您第" << getNum()+1 << "次乘车,免费" << endl;
			addNum();
			//c.addpeopleNumber();
		}
		//第十九次乘车后，刷卡显示19，此时是第20次了
		else if(i == 19) {
			cout << "这是您本月第20次乘车，即最后一次免费乘车，本月的下次乘车将收费。" <<endl;
			addNum();
			//c.addpeopleNumber();
		}
		else {
			cout << "这是您本月第"<< getNum()+1 << "次乘车，需要收费." << endl;
			float m = getMoney();
			if(m <2.0) {
				cout << "余额为" <<getMoney() << "元，不足两元，不允许乘车，请下车" << endl;
			}
			else if(m<=5) {
				cout << "余额过低，消费后还剩" <<getMoney()-2 << "元,请及时充值." << endl;
				costMoney();
				addNum();
				//c.addpeopleNumber();
			}
			else{
				cout << "消费后还剩" <<getMoney()-2 << "元." << endl;
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
	//姓名、性别、职务、所属单位、工资号/学号
	cout << "请按照提示输入个人信息。" << endl;
	cout << "姓名：" << endl;
	cin >> name;
	cout << "性别：" << endl;
	cin >> sex;
	cout << "请输入职务：" << endl;
	cin >> job;
	cout << "请输入所属单位：" << endl;
	cin >> work;
	cout << "请输入工资号（老师）/学号（学生）" << endl;
	cin >> code;
}
*/

Card* Card::newCard(int type)
{
	Card *c;
	string _name;	//持卡人的姓名
	string _work;	//工作单位
	//姓名、性别、职务、所属单位、工资号/学号
	string _sex;		//性别
	string _job;		//职务
	int _code;		//工资号/学号
	cout << "请按照提示输入个人信息。" << endl;
	cout << "姓名：" << endl;
	cin >> _name;
	cout << "性别：" << endl;
	cin >> _sex;
	cout << "请输入职务：" << endl;
	cin >> _job;
	cout << "请输入所属单位：" << endl;
	cin >> _work;

	if (type == 1)
	{

		cout << "请输入工资号:" << endl;
		cin >> _code;
		//string _name,int _id, string _sex,string _job,int _code,int _type,float _money,int _num,string _work,string _date
		c = new Card(_name,++te_code,_sex,_job,_code,1,100.0,0,_work,"01-01");
		cout << "申请成功！" << endl;
		cout << "您的卡号是1007"  << endl;
	}
	else if(type == 2)
	{
		cout << "请输入学号:" << endl;
		cin >> _code;
		c = new Card(_name,++stu_code,_sex,_job,_code,2,100.0,0,_work,"01-01");
		cout << "申请成功！" << endl;
		cout << "您的卡号是2013"  << endl;
	}
	else if(type == 3)
	{
		cout << "请输入工资号(老师)/学号（学生）:" << endl;
		cin >> _code;
		c = new Card(_name,++lim_code,_sex,_job,_code,3,100.0,0,_work,"01-01");
		cout << "申请成功！" << endl;
		cout << "您的卡号是3005"  << endl;
	}
	else 
	{
		cout << "申请卡的类型错误！请检查信息后重试" << endl;
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
	cout << "注销成功！" << endl;
	return c;
}