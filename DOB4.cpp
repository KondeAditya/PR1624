#include<iostream>
#include<fstream>
using namespace std;
class Student
{
	int roll;
	char name[20];
	char div;

	public:
		void accept()
		{
			cin>>name;
			cin>>roll;
			cin>>div;
		}

		void display()
		{
			cout<<"Enter Name: "<<name<<endl;
			cout<<"Enter Id: "<<roll<<endl;
			cout<<"Enter Div: "<<div<<endl;
		}

};

int main()
{
	Student s[5];
	fstream f;
	int i,n;

	f.open("h.txt",ios::out||ios::app);
	cout<<"How many student's data to store: ";
	cin>>n;
	cout<<"Enter Information in (Name/Id/Div) format---"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter information of "<<i<<" student: "<<endl;
		s[i].accept();
		f.write((char*)&s[i],sizeof s[i]);
	}
	f.close();

	f.open("h.txt",ios::in);
	cout<<"Information displayed: \n";
	for(i=1;i<=n;i++)
	{
		f.read((char*)&s[i],sizeof s[i]);
		s[i].display();
	}
	f.close();
	return 0;
}

