using namespace std;
#include<iostream>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<string.h>
int main()
{
	int hr=0,min=0,sec=0,day=0;
	string time;
	cout<<"\t___________________________\n";
	cout<<"\t    Enter hour:";
	cin>>hr;
	cout<<"\t    Enter min:";
	cin>>min;
	cout<<"\t    Enter sec:";
	cin>>sec;
	cout<<"\t    Enter day:";
	cin>>day;
	
	system("cls");
	
		for( hr;hr<=24;hr++)
		{
			if(hr>12)
			{
				hr=hr-12;
				time = "PM";
			}
			else
			{
				time= "AM";
			}

			
			for(min;min<=59;min++)
			{
				for(sec;sec<=59;sec++)
				{
					cout<<"\tD I G I T A L   C L O C K\n";
					
					cout<<"\t____________________\n";
					
						cout<<"\t|                   |\n";
						cout<<"\t|       "<<hr<<":"<<min<<":"<<sec<<" "<<time<<"   |\n";
						cout<<"\t|                   |\n";
						cout<<"\t____________________";
						
				
				
					
					Sleep(1000);
					system("cls");
				}sec=0;
			}min=0;
		
		}
	return 0;
}
