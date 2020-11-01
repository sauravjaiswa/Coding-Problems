/*Wap to make a linear array and perform-
1)Insert user entered elements in array sequentially from nth position.
2)delete elements from array via nth position via element at specified position.*/
#include <iostream>
using namespace std;
class Insert_Del
{
	int n,*a;
	public:
		void insert(int k,int m,int pos,int ele[])
		{
			int i;
			n=k;
			a=new int[n+m];
			cout<<"Enter elements in array:"<<endl;
			for(i=0;i<n;i++)
			cin>>a[i];
			for(int j=0;j<m;j++)
			{
				for(i=n+m;i>=pos;i--)
				a[i]=a[i-m];
				a[--pos]=ele[j];
				n++;
			}
			
		}
		/*
		void delpos(int pos)
		{
			int i;
			for(i=pos-1;i<n-1;i++)
			{
				a[i]=a[i+1];
			}
			n--;
		}
		
		void delele(int ele)
		{
			int i;
			for(i=0;i<n;i++)
			{
				if(ele==a[i])
				delpos(i+1);
			}
		}
		*/
		void show()
		{
			int i;
			for(i=0;i<n;i++)
			cout<<a[i]<<" ";
			cout<<endl;
		}
};
int main()
{
	Insert_Del ob;
	int ch,n,i,pos,*ele,m;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	do
	{
		cout<<"Enter your choice:"<<endl<<"1.Insert"<<endl<<"2.Delete position"<<endl<<"3.Delete element"<<endl<<"4.Exit"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"Enter position, number of elements and elements to be inserted of array:"<<endl;
			cin>>pos>>m;
			ele=new int[m];
			cout<<"Enter elements to be inserted:"<<endl;
			for(i=0;i<m;i++)
			cin>>ele[i];
			ob.insert(n,m,pos,ele);
			ob.show();
			break;/*
			case 2:
				cout<<"Enter position to be deleted of array:"<<endl;
				cin>>pos;
				if(pos<n)
				ob.delpos(pos);
				ob.show();
				break;
				case 3:
					cout<<"Enter element to be deleted of array:"<<endl;
					cin>>ele;
					ob.delele(ele);
					ob.show();
					break;*/
					default:
						cout<<"Invalid input!"<<endl;
		}	
	}while(ch<=3);
		
}
