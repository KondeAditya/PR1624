#include<iostream>
#include<string.h>
using namespace std;

class publication
{
public:
	string name;
	float price;
	void d()
	{
	cout<<"Enter book name: "<<endl;
	cin>>name;
	cout<<"Enter price: "<<endl;
	cin>>price;
	}
};
class book:public publication
{
	public:
		float pgcount;
		int b,x;
		void d1()
		{
			cout<<"Enter pg-count: "<<endl;
			cin>>pgcount;
			b=pgcount;
			if(b!=pgcount)
			{
			try{
                throw x;
			}
			catch(int x)
			{
				cout<<"Name of book: --"<<endl<<"Price: 00"<<endl<<"Pg-count:00 "<<endl;
			}
		}
		else{

		cout<<"Name of book: "<<name<<endl<<"Price: "<<price<<endl<<"Pg-count: "<<pgcount<<endl;
			}

}
};

class tape:public publication
{
	public:
	float pt;
	int b,x;
	void d2()
	{
            cout<<"Enter playtime"<<endl;
			cin>>pt;
			b=pt;
			if(b!=pt)
			{
			try{
			throw x;
			}
			catch(int x)
			{
				cout<<"Name of book: "<<name<<endl<<"Price: "<<price<<endl<<"Plat time: "<<pt<<endl;

			}
		}
		else{
				cout<<"Name of book: --"<<endl<<"Price: 00"<<endl<<"Play time:00.00 "<<endl;

			}
}
};


int main()
{

	char c;
	int ch;
	do{
	cout<<"1.Book"<<endl<<"2.Tape"<<endl<<"Enter your choice: "<<endl;
	cin>>ch;
	book b1;
	tape t1;

	switch(ch)
	{

	case 1:
		b1.d();
		b1.d1();
		break;

	case 2:
		t1.d();
		t1.d2();
		break;

	default:
		cout<<"Invalid choice";
		break;

	}
	cout<<"Press y to continue: ";
	cin>>c;
	}while(c=='y');
}


