#include "Car.h"
#include <stdlib.h>

void Car::cardinfo(Card card)
{
	cout << "乘客信息:" << endl;
	cout << "姓名:"  << card.getName() << endl;
	cout << "余额:" << card.getMoney() << endl;
	cout << "已乘车次数:" << card.getNum() << endl;
	cout << "卡号:" << card.getId() << endl;
	cout << "单位:" << card.getWork() << endl;
	cout << "有效日期:" << card.getDate() << endl;
	cout << endl;

	if(card.getType() == 1){
		cout << "欢迎乘坐916路公交车" << endl;
		cout << "您持有老师卡，可免费乘车" << endl;
		cout << endl;
		card.addNum();
		addpeopleNumber();
	}
	else if(card.getType() == 2) {
		cout << endl;
		cout << "欢迎乘坐916路公交车" << endl;
		cout << "您持有学生卡，需花费两元" << endl;
		float m = card.getMoney();
		if(m <2.0) {
			cout << "余额为" <<card.getMoney() << "元，不足两元，不允许乘车，请下车" << endl;
		}
		else if(m<=5) {
			cout << "余额过低，消费后还剩" <<card.getMoney()-2 << "元,请及时充值." << endl;
			cout << endl;
			card.costMoney();
			card.addNum();
			addpeopleNumber();
		}
		else{
			cout << "消费后还剩" <<card.getMoney()-2 << "元." << endl;
			cout << endl;
			card.costMoney();
			card.addNum();
			addpeopleNumber();
		}
	}
	else {
		cout << endl;
		cout << "欢迎乘坐916路公交车" << endl;
		cout << "您持有限制卡，可免费乘车20次" << endl;
		int i = card.getNum();
		if(i<19) {
			cout << "这是您第" << card.getNum()+1 << "次乘车,免费" << endl;
			card.addNum();
			addpeopleNumber();
		}
		//第十九次乘车后，刷卡显示19，此时是第20次了
		else if(i == 19) {
			cout << "这是您本月第20次乘车，即最后一次免费乘车，本月的下次乘车将收费。" <<endl;
			card.addNum();
			addpeopleNumber();
		}
		else {
			cout << "这是您本月第"<< card.getNum()+1 << "次乘车，需要收费." << endl;
			float m = card.getMoney();
			if(m <2.0) {
				cout << "余额为" <<card.getMoney() << "元，不足两元，不允许乘车，请下车" << endl;
			}
			else if(m<=5) {
				cout << "余额过低，消费后还剩" <<card.getMoney()-2 << "元,请及时充值." << endl;
				card.costMoney();
				card.addNum();
				addpeopleNumber();
			}
			else{
				cout << "消费后还剩" <<card.getMoney()-2 << "元." << endl;
				card.costMoney();
				card.addNum();
				addpeopleNumber();
			}
		}
	}

	//card.cost();
}

void Car::carInfo()
{
	cout << "班车信息:" << endl;
	cout << "司机姓名:"  << getName() << endl;
	cout << "车牌号:"  << getcarNumber() << endl;
	cout << "车型号:"  << getmodelNumber() << endl;
	cout << "运行时间段:"  << getTimeq() << endl;
	cout << endl;

}

int Car::passenger()
{
	if(getpeopleNumber() < number) 
	{
		cout << "该车核载" << number << "人" << "已有" << getpeopleNumber() << "人" << endl;
		//addpeopleNumber();			何时进行人数的加一
		cout << "您是第" << getpeopleNumber()+1 << "位乘客。" << endl << endl;
		return 1;
	}
	else 
	{
		cout << "人数已到核载人数，请下车" << endl;
		//system("pause");
		//exit(0);
		return 0;			//作为main函数是否还要继续执行的依据
	}
}

void Car::addpeopleNumber()
{
	peopleNumber++;
}

void Car::setcarNumber(string _carNumber)
{
	carNumber = _carNumber;
}

string Car::getcarNumber()
{
	return carNumber;
}

void Car::setmodelNumber(string _modelNumber)
{
	modelNumber = _modelNumber;
}

string Car::getmodelNumber()
{
	return modelNumber;
}

void Car::setNumber(int _number)
{
	number = _number;
}

int Car::getNumber()
{
	return number;
}

void Car::setpeopleNumber(int _peopleNumber)
{
	peopleNumber = _peopleNumber;
}

int Car::getpeopleNumber()
{
	return peopleNumber;
}

void Car::setName(string _name)
{
	name = _name;
}

string Car::getName()
{
	return name;
}

void Car::setTimeq(string _timeq)
{
	timeq = _timeq;
}

string Car::getTimeq()
{
	return timeq;
}

void Car::setArrivetime(string _arrivetime)
{
	arrivetime = _arrivetime;
}

string Car::getArrivetime()
{
	return arrivetime;
}

void Car::setLeavetime(string _leavetime)
{
	leavetime = _leavetime;
}

string Car::getLeavetime()
{
	return leavetime;
}

void Car::setDesttime(string _desttime)
{
	desttime = _desttime;
}

string Car::getDesttime()
{
	return desttime;
}

void Car::setR_timeq(string _r_timeq)
{
	r_timeq = _r_timeq;
}

string Car::getR_tiemq()
{
	return r_timeq;
}

void Car::setR_arrivetime(string _r_arrivetime)
{
	r_arrivetime = _r_arrivetime;
	if(_r_arrivetime == getArrivetime()) 
	{
		on_time_a++;
	}
	else 
	{
		no_time_a++;
	}
}

string Car::getR_arrivetime()
{
	return r_arrivetime;
}

void Car::setR_leaveTime(string _r_leavetime)
{
	r_leavetime = _r_leavetime;
	if(_r_leavetime == getLeavetime()) 
	{
		on_time_l++;
	}
	else 
	{
		no_time_l++;
	}
}

string Car::getR_leavetime()
{
	return r_leavetime;
}

void Car::setR_runtime(string _r_runtime)
{
	r_runtime = _r_runtime;
}

string Car::getR_runtime()
{
	return r_runtime;
}

void Car::setR_desttime(string _r_desttime)
{
	r_desttime = _r_desttime;
	if(_r_desttime == getDesttime()) 
	{
		on_time_de++;
	}
	else 
	{
		no_time_de++;
	}
}

string Car::getR_desttime()
{
	return r_desttime;
}

void Car::leave()
{
	runNum++;
	totalPeopleNumber+=getpeopleNumber();
}

void Car::allInfo()
{
	double peopleRate;		//实际人数与核载人数比
	double leaveRate;		//发车准时率
	double arriveRate;		//到达准时率
	double destRate;		//到达目的地准时率
	peopleRate = (totalPeopleNumber*100)/(getNumber()*runNum);
	leaveRate = (on_time_l*100)/(on_time_l + no_time_l);
	arriveRate = (on_time_a*100)/(on_time_a + no_time_a);
	leaveRate = (on_time_l*100)/(on_time_l + no_time_l);
	destRate = (on_time_de*100)/(on_time_de + no_time_de);
	cout << "实际乘车人数与载乘人数比：" << peopleRate << "%" << endl;
	cout << "到达准时率"  << arriveRate << "%" << endl;
	cout << "发车准时率" << leaveRate << "%" << endl;
	cout << "到达目的地准时率" << destRate << "%" << endl;
}

Car::Car()
{
}


Car::~Car(void)
{
}

Car::Car(string _carNumber,string _modelNumber,int _number,int _peopleNumber,string _name)
{
	carNumber = _carNumber;
	modelNumber = _modelNumber;
	number = _number;
	peopleNumber = _peopleNumber;
	name = _name;
	runNum = 0;					
	totalPeopleNumber = 0;		
	on_time_l = 0;				
	no_time_l = 0;				
	on_time_a = 0;	
	no_time_a = 0;	
	on_time_de = 0;	
	no_time_de = 0;
}