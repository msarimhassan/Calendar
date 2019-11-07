

#include <iostream>
using namespace std;
class calendar
{
	private:
		int date,month,year;
	public:
		calendar()
		{
			date=1;
			month=1;
			year=2000;
		}
		calendar(int x,int z,int y)
		{
			date =x;
			month=z;
			year=y;
		}
		setmonth(int z)
		{
			while(z<=0||z>=13)
			{
				cout<<"INVALID INPUT KINDLY INPUT AGAIN(1-12)"<<endl;
				cin>>z;
			}
			month=z;
		}
		setdate (int x)
	    {
	    	if(month==2)
	    	{
	    		while (x>28||x<0)
	    		{
	    			cout<<"WRONG INPUT (1-28)"<<endl;
	    			cin>>x;
	    		}
				date=x;
			}
			else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			{
				while(x>31||x<0)
				{
					cout<<"WRONG INPUT (1-31)"<<endl;
					cin>>x;
				}
				date =x;
			}
			else if(month==4||month==6||month==9||month==11)
			{
				while (x>30||x<0)
				{
					cout<<"WRONG INPUT (1-30)"<<endl;
					cin>>x;
				}
				date=x;
			}
		}
		setyear(int y)
		{
			while (y<=1999||y>=2020)
			{
				cout<<"INVALID INPUT KINDLY INPUT AGAIN(2001-2019)"<<endl;
				cin>>y;
			}
		  year =y;
		}
		incrementdate()
		{
			date = date+1;
		}
		incrementmonth()
		{
			month =month+1;
		}
		incrementyear()
		{
			year=year+1;
		}
		display()
		{
			cout<<"****************"<<endl;
			cout<<date<<"-"<<month<<"-"<<year<<endl;
			cout<<"****************"<<endl;
		}
		~ calendar()
		{
			cout<<"DATA IS DELETED"<<endl;
		}
};
int  main()
{
	int x,z,y;
	calendar obj;
	cout<<"Enter the month"<<endl;
	cin>>z;
	obj.setmonth(z);
	cout<<"Enter the date"<<endl;
	cin>>x;
	obj.setdate(x);
	cout<<"Enter the year"<<endl;
	cin>>y;
	obj.setyear(y);
	obj.display();
	cout<<"********* INCREMENT IN DATE **********"<<endl;
	obj.incrementdate();
	obj.display();
	cout<<"********* INCREMENT IN MONTH **********"<<endl;
	obj.incrementmonth();
	obj.display();
	cout<<"********* INCREMENT IN YEAR **********"<<endl;
	obj.incrementyear();
	obj.display();
}

