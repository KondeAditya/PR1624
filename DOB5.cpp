#include<iostream>
#include<string>
using namespace std;
#define size 4
int n;
template <typename T> T selection(T arr[4])
{
	T temp;
	for(int i=0; i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if (arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<endl;

	for(int i=0;i<n;i++)
	{
		cout<<"After sorting: "<<arr[i]<<endl;
	}
}

int main()
{
	int i;
	int a[size];
	float b[size];
	char c[size];
	string e[size];
	char ch;
	cout<<" A Integer Selection Sort \n B Float Selection Sort \n C Character Selection Sort";
	cout<<" \n D EXIT \n E String"<<endl;
	cout<<"Enter your choice: ";
	cin>>ch;

	switch(ch)
	{
		case 'A':
			cout<<"How many integers: ";
			cin>>n;
			cout<<"Enter values: ";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			selection(a);
			break;

		case 'B':
			cout<<"How many floats: ";
			cin>>n;
			cout<<"Enter values: ";
			for(int i=0;i<n;i++)
			{
				cin>>b[i];
			}
			selection(b);
			break;

		case 'C':
			cout<<"How many chars: ";
			cin>>n;
			cout<<"Enter values: ";
			for(int i=0;i<n;i++)
			{
				cin>>c[i];
			}
			selection(c);
			break;

		case 'D':
			return 0;

		case 'E':
			cout<<"How many strings: ";
			cin>>n;
			cout<<"Enter values: ";
			for(int i=0;i<n;i++)
			{
				cin>>e[i];
			}
			selection(e);
			break;

		default:
			cout<<"Enter a valid choice!"<<endl;
			main();
			break;
	}

	return 0;
}
