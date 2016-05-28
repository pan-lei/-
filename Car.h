#pragma once
#include <string>
#include "Card.h"

class Car
{
public:
	void cardinfo(Card card);					//��ʾ������Ϣ
	void carInfo();								//��ʾ������Ϣ
	int passenger();							//��ʾ�˿�����
	void addpeopleNumber();						//�����ϳ���������һ
	void setcarNumber(string _carNumber);		
	string getcarNumber();	
	void setmodelNumber(string _modelNumber);	
	string getmodelNumber();					
	void setNumber(int _number);				//���ú�������
	int getNumber();							
	void setpeopleNumber(int _peopleNumber);	//����ʵ������
	int getpeopleNumber();						
	void setName(string _name);					
	string getName();							
	void setTimeq(string _time);				//ʱ���
	string getTimeq();							
	void setArrivetime(string _arrivetime);		//����ʱ��
	string getArrivetime();						
	void setLeavetime(string _leavetime);		//�뿪ʱ��
	string getLeavetime();						
	void setDesttime(string _desttime);			//����Ŀ�ĵ�ʱ��
	string getDesttime();						
	void setR_timeq(string _r_timeq);			//ʵ������ʱ���
	string getR_tiemq();						
	void setR_arrivetime(string _r_arrivetime); //ʵ�ʵ���ʱ��
	string getR_arrivetime();					
	void setR_leaveTime(string _r_leavetime);	//ʵ���뿪ʱ��
	string getR_leavetime();					
	void setR_runtime(string _r_runtime);		
	string getR_runtime();						
	void setR_desttime(string _r_desttime);		
	string getR_desttime();						

	void leave();								//�뿪ʱͳ�Ƹó����������������д����ϼ�1
	void allInfo();								//������Ϣ��ͳ�����

	Car();
	Car(string _carNumber,string _modelNumber,int _number,int _peopleNumber,string _name);
	~Car(void);

private:
	string carNumber;			//���ƺ�
	string modelNumber;			//���ͺ�
	int number;					//��������
	int peopleNumber;			//ʵ������
	string name;				//��ʻԱ����
	string timeq;				//��������ʱ���
	string r_timeq;				//ʵ������ʱ���
	string arrivetime;			//���۵���ʱ��
	string r_arrivetime;		//ʵ�ʵ���ʱ��
	string leavetime;			//�����뿪ʱ��
	string r_leavetime;			//ʵ���뿪ʱ��
	string desttime;			//���۵���Ŀ�ĵ�ʱ��
	string r_desttime;			//ʵ�ʵ���Ŀ�ĵ�ʱ��
	string runtime;				//��������ʱ��
	string r_runtime;			//ʵ������ʱ��

	int runNum;					//���д���  * ��������
	int totalPeopleNumber;		//�ܵ�����
	int on_time_l;				//��ʱ����Ĵ���
	int no_time_l;				//����ʱ����Ĵ���
	int on_time_a;				//��ʱ�뿪�Ĵ���
	int no_time_a;				//����ʱ�뿪�Ĵ���
	int on_time_de;				//��ʱ����Ŀ�ĵصĴ���
	int no_time_de;				//����ʱ����Ŀ�ĵصĴ���
};

