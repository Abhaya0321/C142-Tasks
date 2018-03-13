#include<iostream>
using namespace std;

class node
{
public:
	int d;
	node*nt;
};
class var1
{
	node*h;
	node*t;
	public:var1()
	{
		h=NULL;
		t=NULL;
	}
	void add(int num)
	{
		node*tp=new node;
		tp->d=num;
		tp->nt=NULL;
		if(h==NULL)
		{
			h=tp;
			t=tp;
		}
		else
		{
			t->nt=tp;
			t=t->nt;
		}
	}
};
int main()
{
	int i,s ;
	var1 v;
	cout <<"Enter linked list elements"<<endl;
	for(i=0;i<5;i++)
	cin >> s;
	v.add(s);
	return 0;
}	
