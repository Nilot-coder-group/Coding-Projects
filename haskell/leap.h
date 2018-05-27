#include<iostream>
using namespace std;
class is_leap_year
{
	public:
	int year;
	is_leap_year()
	{
		if(year%4==0||year%100==0)
		{
		    cout<<"Is a leap year"<<endl;
         }
		else if(year%400==0)
       {
			cout<<"is a leap year"<<endl;
		  
		}
	        else
		{
		        cout<<"Is not a leap                                    year"<<endl;
		}

	}
};