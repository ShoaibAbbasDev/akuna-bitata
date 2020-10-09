#include <iostream>

using namespace std;

void printBar()
{
	for (int i=0;i<9;i++)
	cout<<"*";
	
	cout<<endl;
	for (int i=0;i<9;i++)
{	
	if (i>2 && i<7)
	cout<<"*";
	else
	cout<<"-";
}
cout<<endl;
}
void Print()
{
	for (int i=0;i<9;i++)
	cout<<"*\n";
	
	
	for (int i=0;i<9;i++)
{	
	if (i>2 && i<7)
	cout<<"*";
	else
	cout<<"-";
}
cout<<"\n";
}

int main ()
{
	printBar();
	for (int i=0;i<5;i++)
		cout<<"I love Pakistan"<<endl;	
	printBar();
	bool isTodayFriday;
	isTodayFriday= true;
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa aj to tum ko";
	else
	cout<<"Khaire hi hia Cheetey";
}
