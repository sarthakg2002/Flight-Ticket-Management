//                              COMPUTER SCIENCE PROJECT
//                               MADE BY SARTHAK GUPTA
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
class PlanYourTravel
{
	public:
	int tickNum;
	long totalcost;
	int age;
	char name[20];
	char from[20];
	char to[20];
	int day,mon,year;
	int amount;
	int rem;
	PlanYourTravel()
	{
		tickNum=1000;
	}
	void bookticket()
	{
		char str[20];
		char s11[]="AIR";
		int s;
		int n;
		cout<<"\nSelect route from the available list"<<endl;
		cout<<"1)Mumbai To Goa Flights       -->INR 4,000"<<endl;
		cout<<"2)Delhi to Mumbai Flights     -->INR 10,000"<<endl;
		cout<<"3)Delhi to London Flights     -->INR 25,000"<<endl;
		cout<<"4)Delhi to Dubai Flights      -->INR 11,000"<<endl;
		cin>>s;
		fflush(stdin);
		switch(s)
		{
			case 1:
			cout<<"\nTicket for Mumbai to Goa:"<<endl;
			cout<<"\nEnter your Name= ";
			gets(name);
			cout<<"Enter your age= ";
			cin>>age;
			cout<<"Enter date= ";
			cin>>day;
			cout<<"Enter month :: ";
			cin>>mon;
			cout<<"Enter year :: ";
			cin>>year;
			strcpy(from,"Mumbai");
			strcpy(to,"Goa");
			totalcost=(5*4000)/100+4000;
				cout<<"Total Cost = Fare + GST =INR "<<totalcost<<endl;
			cout<<"Please pay the Amount ::";
			cin>>amount;
			if(amount==totalcost)
			{
				cout<<"\nCongratulations! Your Ticket has been confirmed"<<endl;
				tickNum=tickNum+1;
				print();
			}
			else
			{
				cout<<"ERROR! \n Please pay the remaining balance.."<<(rem=totalcost-amount)<<endl;
				cin>>rem;
				amount=amount+rem;
				if(amount==totalcost)
				{
					cout<<"\n``Congratulations`` Your Ticket has now been confirmed"<<endl;
					tickNum=tickNum+1;
					print();
				}
				else
				{
					cout<<"\nERROR! \n Transaction is declined. \nPLease try again.."<<endl;
					cout<<"INR "<<amount<<" is credit into your account"<<endl;
				}
			}
			break;
			case 2:
			cout<<"\nTickets for Delhi to Mumbai"<<endl;
			cout<<"\nEnter your Name ::";
			gets(name);
			cout<<"\nEnter your age ::";
			cin>>age;
			cout<<"Enter date ::";
			cin>>day;
			cout<<"Enter month :: ";
			cin>>mon;
			cout<<"Enter year ::";
			cin>>year;
			strcpy(from,"Delhi");
			strcpy(to,"Mumbai");
			totalcost=(5*10000)/100+10000;
			cout<<"Total Cost = Fare + GST =INR "<<totalcost<<endl;
			cout<<"Please pay the Amount ::";
			cin>>amount;
			if(amount==totalcost)
			{
				cout<<"\nCongratulations! Your Ticket has been booked"<<endl;
				tickNum=tickNum+1;
				print();
			}
			else
			{
				cout<<"ERROR!! \n Please pay the remaining balance.."<<(rem=totalcost-amount)<<endl;
				cin>>rem;
				amount=amount+rem;
				if(amount==totalcost)
				{
					cout<<"\nCongratulations! Your Ticket has been booked"<<endl;
					tickNum=tickNum+1;
					print();
				}
				else
				{
					cout<<"\nERROR! \nTransaction is declined. \nPLease try again.."<<endl;
					cout<<"INR "<<amount<<" is credit into your account"<<endl;
				}
			}
			break;
			case 3:
			cout<<"\nTickets for Delhi to London"<<endl;
			cout<<"\nEnter your Name ::";
			gets(name);
			cout<<"\nEnter your age ::";
			cin>>age;
			cout<<"Enter date ::";
			cin>>day;
			cout<<"Enter month :: ";
			cin>>mon;
			cout<<"Enter year :: ";
			cin>>year;
			strcpy(from,"Delhi");
			strcpy(to,"London");
			totalcost=(5*25000)/100+25000;
			cout<<"Total Cost = Fare + GST =INR "<<totalcost<<endl;
			cout<<"Please pay the Amount ::";
			cin>>amount;
			if(amount==totalcost)
			{
				cout<<"\nCongratulations! Your Ticket has been booked"<<endl;
				tickNum=tickNum+1;
				print();
			}
			else
			{
				cout<<"ERROR!! \n Please pay the remaining balance.."<<(rem=totalcost-amount)<<endl;
				cin>>rem;
				amount=amount+rem;
				if(amount==totalcost)
				{
					cout<<"\nCongratulations Your Ticket has been booked"<<endl;
					tickNum=tickNum+1;
					print();
				}
				else
				{
					cout<<"\nERROR!! \n Transaction is declined. \nPLease try again.."<<endl;
					cout<<"INR "<<amount<<" is credit into your account"<<endl;
				}
			}
			break;
			case 4:
			cout<<"\nTickets for Delhi to Dubai"<<endl;
			cout<<"\nEnter your Name ::";
			gets(name);
			cout<<"\nEnter your age ::";
			cin>>age;
			cout<<"Enter date ::";
			cin>>day;
			cout<<"Enter month :: ";
			cin>>mon;
			cout<<"Enter year :: ";
			cin>>year;
			strcpy(from,"Delhi");
			strcpy(to,"Dubai");
			totalcost=(5*11000)/100+11000;
			cout<<"Total Cost = Fare + GST =INR "<<totalcost<<endl;
			cout<<"Please pay the Amount ::";
			cin>>amount;
			if(amount==totalcost)
			{
				cout<<"\nCongratulations Your Ticket has been booked"<<endl;
				tickNum=tickNum+1;
				print();
			}
			else
			{
				cout<<"ERROR!! \n Please pay the remaining balance.."<<(rem=totalcost-amount)<<endl;
				cin>>rem;
				amount=amount+rem;
				if(amount==totalcost)
				{
					cout<<"\nCongratulations !Your Ticket has been booked"<<endl;
					tickNum=tickNum+1;
					print();
				}
				else
				{
					cout<<"\n!!ERROR!! \nTransaction is declined. \nPLease try again.."<<endl;
					cout<<"INR "<<amount<<" is credit into your account"<<endl;
				}
			}
			break;
			}
		ofstream ofs,ofs1;
		ofs.open("ticket.txt",ios::out|ios::binary|ios::app);
		ofs.write((char*)this,sizeof(*this));
		ofs.close();
		sprintf(str,"%s-%d",s11,tickNum);
		strcat(str,".txt");
		ofs1.open(str);
		ofs1<<"\n--------------------------------------------------------------------------------"<<endl;
		ofs1<<"|                        ~~~~ Todays India Airlines ~~~~"<<endl;
		ofs1<<"|*******************************************************************************"<<endl;
		ofs1<<"|Ticket Number: "<<tickNum<<"                                       Date ::"<<day<<"-"<<mon<<"-"<<year<<endl;
		ofs1<<"|                           Passenger Name ::"<<name<<endl;
		ofs1<<"|                           Passenger age ::"<<age<<endl;
		ofs1<<"|"<<endl;			ofs1<<"|Destination: From "<<from<<"          ----->>                 To: "<<to<<"."<<endl;
		ofs1<<"|"<<endl;
		ofs1<<"|                         Total Amount Paid ::INR "<<totalcost<<endl;
		ofs1<<"|*******************************************************************************"<<endl;
		ofs1<<"|                         Have a Happy and Safe Journey"<<endl;
		ofs1<<"--------------------------------------------------------------------------------"<<endl;
		ofs1.close();
	}
	void print()
	{
		cout<<"\n--------------------------------------------------------------------------------"<<endl;
		cout<<"|                        ~~~~ Todays India Airlines ~~~~"<<endl;
		cout<<"|*******************************************************************************"<<endl;
		cout<<"|Ticket Number: "<<tickNum<<"                                       Date ::"<<day<<"-"<<mon<<"-"<<year<<endl;
		cout<<"|                           Passenger Name ::"<<name<<endl;
		cout<<"|                           Passenger age ::"<<age<<endl;
		cout<<"|"<<endl;			cout<<"|Destination: From "<<from<<"          ----->>                 To: "<<to<<"."<<endl;
		cout<<"|"<<endl;
		cout<<"|                         Total Amount Paid ::INR "<<totalcost<<endl;
		cout<<"|*******************************************************************************"<<endl;
		cout<<"|                         Have a Happy and Safe Journey"<<endl;
		cout<<"--------------------------------------------------------------------------------"<<endl;
	}
	void viewAllTickets()
	{
		ifstream ifs("ticket.txt",ios::in|ios::binary);
		if(!ifs)
		{
			cout <<"File Not Found!" <<endl;
		}
		else
		{
			ifs.read((char*)this,sizeof(*this));
			while(!ifs.eof())
			{
				print();
				ifs.read((char*)this,sizeof(*this));
			}
		}
	}
	void getTicket()
	{
		cout<<"\nName ::"<<name<<endl;
		cout<<"Age ::"<<age<<endl;
		cout<<"Ticket Number ::"<<tickNum<<endl;
		cout<<"Date :: "<<day<<"-"<<mon<<"-"<<year<<endl;
		cout<<"From "<<from<<" To "<<to<<endl;
		cout<<"Total Cost ::"<<totalcost<<endl;
	}
	void status()
	{
		int flag=0;
		char name[20];
		fflush(stdin);
		cout<<"Enter the name of whom you want to search ticket status for: "<<endl;
		gets(name);
		ifstream ifs;
		ifs.open("ticket.txt",ios::binary);
		ifs.read((char*)this,sizeof(*this));
		while(!ifs.eof())
		{
			if(!strcmp(this->name,name))
			{
				cout<<"Ticket Found ::"<<endl;
				this->getTicket();
				flag=1;
				break;
			}
			ifs.read((char*)this,sizeof(*this));
		}
		if(flag==0)
		{
			cout<<"Searched Ticket could not be found "<<endl;
		}
	 }
	 void cancel()
	 {
		cout<<"\nWARNING!! \nIf you cancel your ticket 6% of the total amount won't be refunded"<<endl;
		int flag=0,tn;
		char name[20];
		int charge;
		fflush(stdin);
		cout<<"\nEnter the Name whose ticket you want to cancel : "<<endl;
		gets(name);
		ifstream ifs;
		ifs.open("ticket.txt",ios::binary);
		ofstream ofs("ticket1.txt",ios::binary|ios::ate);
		ifs.read((char*)this,sizeof(*this));
		while(!ifs.eof())
		{
			if(!strcmp(this->name,name))
			{
				cout<<"\nTicket Found ::"<<endl;
				this->getTicket();
				cout<<"\nAmount deducted ::INR "<<(totalcost*6)/100<<"."<<endl;
				cout<<"-->INR "<<totalcost-(totalcost*6)/100<<" is credit into your account."<<endl;
				flag=1;
			}
			else
			{
				ofs.write((char*)this,sizeof(*this));
			}
			ifs.read((char*)this,sizeof(*this));
		}
		ofs.close();
		ifs.close();
		remove("ticket.txt");
		rename("ticket1.txt","ticket.txt");
		if(flag==0)
		{
			cout<<"Searched Ticket could not be found "<<endl;
		}
		else
		{
			cout << "Ticket Cancelled Successfully..." <<endl;
		}
	 }
};


class SelectOption
{
	public:
	void option()
	{
		char ch;
		PlanYourTravel p;
		int a;
		do
		{
			cout<<"Press 1 to Plan Your Journey :: "<<endl;
			cout<<"Press 2 to Check your Ticket Status :: "<<endl;
			cout<<"Press 3 to Cancel your Ticket :: "<<endl;
			cout<<"Press 4 to Print Ticket :: " <<endl;
			cin>>a;
			switch(a)
			{
				 case 1:
				 p.bookticket();
				 break;
				 case 2:
				 p.status();
				 break;
				 case 3:
				 p.cancel();
				 break;
				 case 4:
				 p.viewAllTickets();
				 break;
				 default:
				 cout<<"Error!"<<endl;
			}
			cout<<"\n\nDo you want to Continue"<<endl;
			cin>>ch;
		}while(ch=='Y'|| ch=='y');
	}
};

void main()
{
	clrscr();
	cout<<"------------------------Welcome to The Indian Airlines--------------------------";
	SelectOption op;
	op.option();
	getch();
}
