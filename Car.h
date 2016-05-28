#pragma once
#include <string>
#include "Card.h"

class Car
{
public:
	void cardinfo(Card card);					//显示卡的信息
	void carInfo();								//显示车的信息
	int passenger();							//显示乘客人数
	void addpeopleNumber();						//有人上车，人数加一
	void setcarNumber(string _carNumber);		
	string getcarNumber();	
	void setmodelNumber(string _modelNumber);	
	string getmodelNumber();					
	void setNumber(int _number);				//设置核载人数
	int getNumber();							
	void setpeopleNumber(int _peopleNumber);	//设置实际人数
	int getpeopleNumber();						
	void setName(string _name);					
	string getName();							
	void setTimeq(string _time);				//时间段
	string getTimeq();							
	void setArrivetime(string _arrivetime);		//到达时间
	string getArrivetime();						
	void setLeavetime(string _leavetime);		//离开时间
	string getLeavetime();						
	void setDesttime(string _desttime);			//到达目的地时间
	string getDesttime();						
	void setR_timeq(string _r_timeq);			//实际运行时间段
	string getR_tiemq();						
	void setR_arrivetime(string _r_arrivetime); //实际到达时间
	string getR_arrivetime();					
	void setR_leaveTime(string _r_leavetime);	//实际离开时间
	string getR_leavetime();					
	void setR_runtime(string _r_runtime);		
	string getR_runtime();						
	void setR_desttime(string _r_desttime);		
	string getR_desttime();						

	void leave();								//离开时统计该车的人数，并在运行次数上加1
	void allInfo();								//各种信息的统计输出

	Car();
	Car(string _carNumber,string _modelNumber,int _number,int _peopleNumber,string _name);
	~Car(void);

private:
	string carNumber;			//车牌号
	string modelNumber;			//车型号
	int number;					//核载人数
	int peopleNumber;			//实际人数
	string name;				//驾驶员名字
	string timeq;				//理论运行时间段
	string r_timeq;				//实际运行时间段
	string arrivetime;			//理论到达时间
	string r_arrivetime;		//实际到达时间
	string leavetime;			//理论离开时间
	string r_leavetime;			//实际离开时间
	string desttime;			//理论到达目的地时间
	string r_desttime;			//实际到达目的地时间
	string runtime;				//理论运行时间
	string r_runtime;			//实际运行时间

	int runNum;					//运行次数  * 核载人数
	int totalPeopleNumber;		//总的人数
	int on_time_l;				//按时到达的次数
	int no_time_l;				//不按时到达的次数
	int on_time_a;				//按时离开的次数
	int no_time_a;				//不按时离开的次数
	int on_time_de;				//按时到达目的地的次数
	int no_time_de;				//不按时到达目的地的次数
};

