#include "Car.h"
#include "Card.h"
#include "Timetable.h"
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void main()
{
	Card *c1 = new Card[60];
	Card *c2 = new Card[120];
	Card *c3 = new Card[40];

	c1[0] = Card("aT",1001,"male","null",1001,1,100.0,0,"teacher","01-01");
	c1[1] = Card("bT",1002,"female","null",1002,1,100.0,23,"teacher","01-01");
	c1[2] = Card("cT",1003,"male","null",1003,1,100.0,15,"teacher","01-01");
	c1[3] = Card("dT",1004,"female","null",1004,1,100.0,19,"teacher","01-01");
	c1[4] = Card("eT",1005,"male","null",1005,1,100.0,20,"teacher","01-01");
	c1[5] = Card("fT",1006,"female","null",1006,1,100.0,21,"teacher","01-01");

	c2[0] = Card("aS",2001,"female","null",2001,2,2.0,0,"student","01-01");
	c2[1] = Card("bS",2002,"male","null",2002,2,5.0,23,"student","01-01");
	c2[2] = Card("cS",2003,"female","null",2003,2,100.0,5,"student","01-01");
	c2[3] = Card("dS",2004,"male","null",2004,2,6.0,6,"student","01-01");
	c2[4] = Card("eS",2005,"female","null",2005,2,10.0,10,"student","01-01");
	c2[5] = Card("fS",2006,"male","null",2006,2,12.0,20,"student","01-01");
	c2[6] = Card("gS",2007,"female","null",2007,2,100.0,19,"student","01-01");
	c2[7] = Card("hS",2008,"male","null",2008,2,100.0,1,"student","01-01");
	c2[8] = Card("iS",2009,"female","null",2009,2,100.0,5,"student","01-01");
	c2[9] = Card("jS",2010,"male","null",2010,2,100.0,19,"student","01-01");
	c2[10] = Card("kS",2011,"female","null",2011,2,50.0,20,"student","01-01");
	c2[11] = Card("lS",2012,"male","null",2012,2,34.0,21,"student","01-01");

	c3[0] = Card("aX",3001,"female","null",3001,3,1.0,19,"limit","01-01");
	c3[1] = Card("bX",3002,"male","null",3002,3,5.0,20,"limit","01-01");
	c3[2] = Card("cX",3003,"female","null",3003,3,4.0,21,"limit","01-01");
	c3[3] = Card("dX",3004,"male","null",3004,3,1.0,22,"limit","01-01"); 

	Car c("1001","XD001",10,7,"Driver"); 

	Timetable tc;
	tc.setTimeInfo(c);
	//cout << c1[2].getId() << endl;
	//测试cout<< c.getArrivetime()<< endl;
	//输入exit退出
	//第一、二次需求，输入by展现   第三次需求，输入new展示申请新卡，输入delete展示注销卡
	//cout << "第一、二次需求，输入by展现   第三次需求，输入new展示申请新卡，输入delete展示注销卡" << endl;
	cout << "**********************************" << endl;
	cout << "*          一卡通乘车系统         *" << endl;
	cout << "*   输入输入by展现第一、二次需求   *" << endl;
	cout << "*      输入输入new申请新卡        *" << endl;
	cout << "*      输入输入delete注销卡       *" << endl;
	cout << "**********************************" << endl;
	string  symbol;		
	do 
	{
		cin >> symbol;

		if (symbol == "delete")
		{
			cout << "请输入您的卡号：" << endl;
			int id;
			cin >> id;
			cout << "请输入您的卡类型（1-老师卡、2-学生卡、3-限制卡）：" << endl;
			int type;
			cin >> type;
			if (type == 1)
			{
				Card c;
				c1 = c.cancle(6,c1,id);
			}
			if (type == 2)
			{
				Card c;
				c2 = c.cancle(12,c2,id);
			}
			if (type == 3)
			{
				Card c;
				c3 = c.cancle(4,c3,id);
			}
		}
		//cout << c1[0].getId() << endl;

		if(symbol == "new")
		{
			int type;
			std::cout << "请输入您想申请的卡的类型(1-老师卡、2-学生卡、3-限制卡)：" << endl;
			cin >> type;

			if(type == 1) 
			{
				Card c;
				Card* n = c.newCard(type);
				c1[6] = (*n);
			}
			if(type == 2) 
			{
				Card c;
				Card* n = c.newCard(type);
				c2[12] = (*n);
			}
			if(type == 3) 
			{
				Card c;
				Card* n = c.newCard(type);
				c3[4] = (*n);
			}
		}
		//cout << c1[6].getName() << endl;
		//cout << c1[6].getId() << endl;

		if(symbol == "by") 
		{
			int id;
			int flag;			//接受passager的返回标志
			std::cout << "------------------------" << endl;
			c.carInfo();
			if(c.getpeopleNumber() < c.getNumber())
			{
				do
				{
					std::cout << "请输入您的卡号：" << endl;
					cin >> id;
					if(id>1000 && id<2000)
					{
						flag = c.passenger();
						if(1 == flag)
						{
							for(int i=0; i<60; i++)
							{
								if(id == c1[i].getId())
								{
									c.cardinfo(c1[i]);
								}
							}
						}
					}
					else if(id>2000 && id<3000)
					{
						flag = c.passenger();
						if(1 == flag)
						{
							for(int i=0; i<120; i++) 
							{
								if(id == c2[i].getId())
								{
									c.cardinfo(c2[i]);
								}
							}
						}
					}
					else if(id>3000 && id<4000) 
					{
						flag = c.passenger();
						if(1 == flag)
						{
							for(int i=0; i<30; i++) 
							{
								if(id == c3[i].getId())
								{
									c.cardinfo(c3[i]);
								}
							}
						}
					}
					else if(id == 0) 
					{
					}
					else
					{
						std::cout << endl;
						std::cout << "该卡无效，无法乘车，请下车。" << endl;
					}
					std::cout << "------------------------" << endl;
				}while (id != 0);

			}
			else 
			{
				std::cout << "人数已达到核载人数，禁止上车" << endl;
			}



			string type;				//分别对应到达、离开、到达目的地，用以触发指令
			string time;
			std::cout << "请正确输入类型，到达-arrive，离开-leave，到达目的地-dest" << endl;
			do 
			{
				cin >> type;
				if(type == "arrive") {
					std::cout << "输入到达时间：" << endl;
					cin >> time;
					c.setR_arrivetime(time);
					std::cout << "请继续输入。" << endl;
				}
				else if(type == "leave") {
					std::cout << "输入离开时间：" << endl;
					cin >> time;
					c.setR_leaveTime(time);
					c.leave();
					std::cout << "请继续输入。" << endl;
				}
				else if(type == "dest") {
					std::cout << "输入到达目的地时间：" << endl;
					cin >> time;
					c.setR_desttime(time);
					std::cout << "请继续输入。" << endl;
				}
				else if(type == "exit")
				{
				}
				else
				{
					std::cout << "请正确输入类型，到达-arrive，离开-leave，到达目的地-dest" << endl;
				}
			} while (type != "exit");
			c.allInfo();
		}

		if (symbol == "exit")
		{
		}

	} while (symbol != "exit");

	
	std::cout << "------------------------" << endl;
	std::cout << endl;
	system("pause");
}