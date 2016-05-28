#include "Car.h"
#include <stdlib.h>

void Car::cardinfo(Card card)
{
	cout << "�˿���Ϣ:" << endl;
	cout << "����:"  << card.getName() << endl;
	cout << "���:" << card.getMoney() << endl;
	cout << "�ѳ˳�����:" << card.getNum() << endl;
	cout << "����:" << card.getId() << endl;
	cout << "��λ:" << card.getWork() << endl;
	cout << "��Ч����:" << card.getDate() << endl;
	cout << endl;

	if(card.getType() == 1){
		cout << "��ӭ����916·������" << endl;
		cout << "��������ʦ��������ѳ˳�" << endl;
		cout << endl;
		card.addNum();
		addpeopleNumber();
	}
	else if(card.getType() == 2) {
		cout << endl;
		cout << "��ӭ����916·������" << endl;
		cout << "������ѧ�������軨����Ԫ" << endl;
		float m = card.getMoney();
		if(m <2.0) {
			cout << "���Ϊ" <<card.getMoney() << "Ԫ��������Ԫ��������˳������³�" << endl;
		}
		else if(m<=5) {
			cout << "�����ͣ����Ѻ�ʣ" <<card.getMoney()-2 << "Ԫ,�뼰ʱ��ֵ." << endl;
			cout << endl;
			card.costMoney();
			card.addNum();
			addpeopleNumber();
		}
		else{
			cout << "���Ѻ�ʣ" <<card.getMoney()-2 << "Ԫ." << endl;
			cout << endl;
			card.costMoney();
			card.addNum();
			addpeopleNumber();
		}
	}
	else {
		cout << endl;
		cout << "��ӭ����916·������" << endl;
		cout << "���������ƿ�������ѳ˳�20��" << endl;
		int i = card.getNum();
		if(i<19) {
			cout << "��������" << card.getNum()+1 << "�γ˳�,���" << endl;
			card.addNum();
			addpeopleNumber();
		}
		//��ʮ�Ŵγ˳���ˢ����ʾ19����ʱ�ǵ�20����
		else if(i == 19) {
			cout << "���������µ�20�γ˳��������һ����ѳ˳������µ��´γ˳����շѡ�" <<endl;
			card.addNum();
			addpeopleNumber();
		}
		else {
			cout << "���������µ�"<< card.getNum()+1 << "�γ˳�����Ҫ�շ�." << endl;
			float m = card.getMoney();
			if(m <2.0) {
				cout << "���Ϊ" <<card.getMoney() << "Ԫ��������Ԫ��������˳������³�" << endl;
			}
			else if(m<=5) {
				cout << "�����ͣ����Ѻ�ʣ" <<card.getMoney()-2 << "Ԫ,�뼰ʱ��ֵ." << endl;
				card.costMoney();
				card.addNum();
				addpeopleNumber();
			}
			else{
				cout << "���Ѻ�ʣ" <<card.getMoney()-2 << "Ԫ." << endl;
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
	cout << "�೵��Ϣ:" << endl;
	cout << "˾������:"  << getName() << endl;
	cout << "���ƺ�:"  << getcarNumber() << endl;
	cout << "���ͺ�:"  << getmodelNumber() << endl;
	cout << "����ʱ���:"  << getTimeq() << endl;
	cout << endl;

}

int Car::passenger()
{
	if(getpeopleNumber() < number) 
	{
		cout << "�ó�����" << number << "��" << "����" << getpeopleNumber() << "��" << endl;
		//addpeopleNumber();			��ʱ���������ļ�һ
		cout << "���ǵ�" << getpeopleNumber()+1 << "λ�˿͡�" << endl << endl;
		return 1;
	}
	else 
	{
		cout << "�����ѵ��������������³�" << endl;
		//system("pause");
		//exit(0);
		return 0;			//��Ϊmain�����Ƿ�Ҫ����ִ�е�����
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
	double peopleRate;		//ʵ�����������������
	double leaveRate;		//����׼ʱ��
	double arriveRate;		//����׼ʱ��
	double destRate;		//����Ŀ�ĵ�׼ʱ��
	peopleRate = (totalPeopleNumber*100)/(getNumber()*runNum);
	leaveRate = (on_time_l*100)/(on_time_l + no_time_l);
	arriveRate = (on_time_a*100)/(on_time_a + no_time_a);
	leaveRate = (on_time_l*100)/(on_time_l + no_time_l);
	destRate = (on_time_de*100)/(on_time_de + no_time_de);
	cout << "ʵ�ʳ˳��������س������ȣ�" << peopleRate << "%" << endl;
	cout << "����׼ʱ��"  << arriveRate << "%" << endl;
	cout << "����׼ʱ��" << leaveRate << "%" << endl;
	cout << "����Ŀ�ĵ�׼ʱ��" << destRate << "%" << endl;
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