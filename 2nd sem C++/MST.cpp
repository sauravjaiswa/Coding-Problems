//MST
#include<iostream>
#include<string.h>
using namespace std;
class account
{
	public:
		char accname[50],acctype[5];
		long int accnum;
	public:
		accoun(char name[50],char type[5],long int num)
		{
			strcpy(accname,name);
			strcpy(acctype,type);
			accnum=num;
		}
		void display()
		{
			cout<<"Account holder name:"<<endl;
			puts(accname);
			cout<<"Account type:"<<endl;
			puts(acctype);
			cout<<"Account number:"<<accnum<<endl;
		}
};
class curr_acct:public account
{
	public:
	int bal,withdraw,dep,f,penalty;
	float interest;
	public:
		curr_acct()
		{
			bal=f=0;
		}
	void deposit()
	{
		cout<<"Enter amount to be deposited:"<<endl;
		cin>>dep;
		bal=bal+dep;
	}
	void withdrawal()
	{
		cout<<"Enter amount to be withdrawn:"<<endl;
		cin>>withdraw;
		if(withdraw>bal)
		f=0;
		else
		{
			f=1;
			bal=bal-withdraw;
		}
		if(f==0)
		cout<<"Insufficient balance"<<endl;
	}
	void calculate()
	{
		interest=0.05*bal;
		bal=bal+interest;
	}
	void penaltyf()
	{
		if(bal<1000)
		penalty=500;
		else
		penalty=0;
		bal=bal-penalty;
	}
	void disp()
	{
		cout<<"The balance in current account is:"<<bal<<endl;
	}
};
class sav_acct:public account
{
	public:
	int bal,withdraw,dep,f,penalty;
	float interest;
	public:
		sav_acct()
		{
			bal=f=0;
		}
	void deposit()
	{
		cout<<"Enter amount to be deposited:"<<endl;
		cin>>dep;
		bal=bal+dep;
	}
	void withdrawal()
	{
		cout<<"Enter amount to be withdrawn:"<<endl;
		cin>>withdraw;
		if(withdraw>bal)
		f=0;
		else
		{
			f=1;
			bal=bal-withdraw;
		}
		if(f==0)
		cout<<"Insufficient balance"<<endl;
	}
	void calculate()
	{
		interest=0.10*bal;
		bal=bal+interest;
	}
	void penaltyf()
	{
		if(bal<1000)
		penalty=500;
		else
		penalty=0;
		bal=bal-penalty;
	}
	void disp()
	{
		cout<<"The balance in savings account is:"<<bal<<endl;
	}
};
int main()
{
	char name[50],type[5];
	long int num,ch;
	cout<<"Enter account holders name:"<<endl;
	gets(name);
	cout<<"Enter account type CB or SB:"<<endl;
	gets(type);
	cout<<"Enter account number:"<<endl;
	cin>>num;
	cout<<"Enter your choice:"<<endl;
	cout<<"1.Deposit"<<endl;
	cout<<"2.Withdraw"<<endl;
//	cout<<"!1"<<endl;
	cin>>ch;
	if(type[0]=='C')
	{
		curr_acct ob;
		ob.account::accoun(name,type,num);
		ob.account::display();
		switch(ch)
		{
			case 1:
				ob.deposit();
				ob.penaltyf();
				ob.calculate();
				ob.disp();
				break;
				case 2:
					ob.withdrawal();
					ob.penaltyf();
					ob.calculate();
					ob.disp();
					break;
					default:
					cout<<"Invalid choice"<<endl;
		}
	}
	else
	{
		sav_acct ob;
		ob.account::accoun(name,type,num);
		ob.account::display();
		switch(ch)
		{
			case 1:
				ob.deposit();
				ob.penaltyf();
				ob.calculate();
				ob.disp();
				break;
				case 2:
					ob.withdrawal();
					ob.penaltyf();
					ob.calculate();
					break;
					default:
					cout<<"Invalid choice"<<endl;
		}
	}
}
