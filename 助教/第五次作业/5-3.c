/*
http://202.117.35.169/moodle/file.php/89/zy1.jpg
(模拟龟兔赛跑)本练习中要模拟龟兔赛跑的寓言故事。用随机数产生器建立模拟龟兔赛跑的程序。
 对手从70个方格的第1格开始起跑，每格表示跑道上的一个可能位置，终点线在第70格处。
 第一个到达终点的选手奖励一个新鲜萝卜和莴苣。兔子要在山坡上睡一觉，因此可能失去冠军。
    有一个每秒钟滴答一次的钟，程序应按下列规则调整动物的位置：

            动物                运动类型           时间百分比            实际运动 
    乌龟(tortoise)   Fast plod(快走)             	50%                  向右3格
                      Slip(跌跤)            			20%                  向左6格
                              Slow plod(慢走)            30%                  向右1格
    兎子(Hare)              Sleep(睡觉)            20%                  不动
                                 Big hop(大跳)           20%                  向右9格
                                 Big slip(大跌)           10%                  向左12格
                              Small hop(小跳)          30%                  向右1格
                              Small slip(小跌)           20%                  向左2格
 

用变量跟踪动物的位置(即位置号1到70)。每个动物从位置1开始，如果动物跌到第1格以外，则移回第1格。
    产生随机整数1≤i≤10)，以得到上表中的百分比。对于乌龟，1≤i≤5时快走，6≤i≤7时跌跤，8≤i≤10时慢走，兔子也用相似的方法。
    起跑时，打印：
    BANG  !!!!!
    AND THEY' RE OFF  !!!!!
    时钟每次滴答一下(即每个重复循环)，打印第70格位置的一条线，显示乌龟的位置T和兔子的位置H。
 如果两者占用一格，则乌龟会咬兔子，程序从该位置开始打印 OUCH!!!。除T、H和OUCH!!!以外的其他打印位置都是空的。
    打印每一行之后，测试某个动物是否超过了第70格，如果是,则打印获胜者，停止模拟。
 如果乌龟赢，则打印TORTOISE WINS!!!YAY!!!。如果兔子赢，则打印Hare wins．Yush。
 如果两个动物同时赢，则可以同情弱者，让乌龟赢，或者打印It's a tie。如果两者都没有赢，则再次循环，模拟下一个时钟滴答。
 准备运行程序时，让一组拉拉队看比赛，你会发现观众有多么投入。
*/


#include<iostream>
#include <iomanip>
#include<string>
#include<time.h>
using namespace std;

int Rand();//产生随机数
int tPosition(int,int&);//计算乌龟所跑路程
int hPosition(int,int&);//计算兔子所跑路程
int main()
{
 int a=0, tPos=1, hPos=1;//存放循环次数、乌龟和兔子当前所跑路程
 string b="----------------------------------------------------------------------";

 cout<<" BANG  !!!!!"<<endl;
 cout<<" AND THEY' RE OFF  !!!!!"<<endl;//比赛开始
 while(true)
 {
  int Num=Rand();//获得随机数
  int Tpos = tPosition(Num, tPos);//获得乌龟当前路程
  int Hpos = hPosition(Num, hPos);//获得兔子当前路程
  a++;
  cout<<"This is the "<<a<<"th seconds:"<<endl;//计时
  cout<<setw(70)<<b<<endl;//跑道
  if(Tpos==Hpos)
  {
   cout<<setw(Tpos)<<"OUCH!!!"<<endl;//兔子和乌龟所跑路程相等，乌龟咬兔子
  }
  else
  {
   cout<<setw(Tpos)<<"T"<<endl;//显示乌龟当前位置
      cout<<setw(Hpos)<<"H"<<endl;//显示兔子当前位置
  }
  cout<<setw(70)<<b<<endl;//跑道
  if(Tpos==70)
  {
   cout<<"TORTOISE WINS!!!YAY!!!"<<endl;//乌龟获胜
   break;
  } 
  else if(Hpos==70)
  {
   cout<<"Hare wins．Yush!!!"<<endl;//兔子获胜
   break;
  }
  else if(Tpos==70&&Hpos==70)
  {
   cout<<"It's a tie!!!"<<endl;//平局
   break;
  }
 }
 cin>>a;//暂停屏幕，查看结果
 return 0;
}

int Rand()
{
 int num;
 srand(time(0));//一时间作为随机种子
 num=1+rand()%10;//得到1-10的随机数
 return num;
}

int tPosition(int Rand, int &Pos)
{
 if(1<=Rand&&Rand<=5)//乌龟百分之五十的时间快走
 {
  Pos+=3;
  if(Pos>=70)
   Pos=70;
 }
 else if(6<=Rand&&Rand<=7)//乌龟百分之二十的时间跌跤
 {
  Pos-=6;
  if(Pos<=0)
   Pos=1;
 }
 else//乌龟百分之三十的时间慢走
 {
  Pos++;
  if(Pos>=70)
   Pos=70;
 }
 return Pos;
}

int hPosition(int Rand,int &Pos)
{
 if(1<=Rand&&Rand<=2)//兔子百分之二十的时间睡觉
 {
  Pos=Pos;
 }
 else if(3<=Rand&&Rand<=4)//兔子百分之二十的时间大跳
 {
  Pos+=9;
  if(Pos>=70)
   Pos=70;
 }
 else if(Rand==5)//兔子百分之十的时间大跌
 {
  Pos-=12;
  if(Pos<=0)
   Pos=1;
 }
 else if(6<=Rand&&Rand<=8)//兔子百分之三十的时间小跳
 {
  Pos++;
  if(Pos>=70)
   Pos=70;
 }
 else//兔子百分之二十的时间小跌
 {
  Pos-=2;
  if(Pos<=0)
   Pos=1;
 }
 return Pos;
}