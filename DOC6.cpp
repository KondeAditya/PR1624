/*Write C++ program using STL for Sorting and searching with user-defined records such as
Person Record (Name, birth date, telephone no)*/    
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class record
{
public:
    string name,dob,phone;
   // int roll;
    
    void get();
    void display();
    bool operator < (const record& rhs) //if you dont write this function sort() will compare memory byte by byte
    {
      //return roll < rhs.roll;
        return name < rhs.name;
    }
    friend bool operator== ( const record &r1, const record &r2)
    {
        if(r1.name == r2.name || r1.dob == r2.dob || r1.phone == r2.phone)
        {
            return true;
        }
        return false;
    }
};

void record::get()
{
    
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter date of birth:"<<endl;
    cin>>dob;
    cout<<"Enter phone number:"<<endl;
    cin>>phone;
//     cout<<"Enter roll number:"<<endl;
//     cin>>roll;
}

void record::display()
{
    cout<<name<<"\t"<<dob<<"\t"<<phone<<endl;
    // cout<<roll<<"\t"<<name<<"\t"<<dob<<"\t"<<phone<<endl;
}

class record_list
{
    private:
        vector<record> myRecords;
    public:
        void get();
        void display();
        void search(string data);
        void sort();
};

void record_list::get() 
{
    int count;
    cout<<"Enter the number of members in record:"<<endl;
    cin>>count;
    for(int i=1;i<=count;i++)
    {
        record myRec;
        myRec.get();
        myRecords.push_back(myRec);
    }
}

void record_list::display() 
{
    for(vector<record>::iterator itr=myRecords.begin();itr != myRecords.end();itr++)
    {
        itr->display();
    }
}

void record_list::search(string data)
{
    record rhs;
    rhs.name = data;
    rhs.dob = data;
    rhs.phone = data;
    vector<record>::iterator itr = find(myRecords.begin(), myRecords.end(), rhs);
    if (itr != myRecords.end()) {
        cout<<"Record found!"<<endl;
        itr->display();
    } else {
        cout<<"Record not found!"<<endl;
    }
}

void record_list::sort() 
{
    std::sort(myRecords.begin(), myRecords.end());
}

int main()
{
    record_list obj;
    string key;
    int ch,chr;
    char x='y';
    do
    {
        cout<<"1. Enter details\n2. Display\n3. Search entry\n4. Sort records\nEnter choice\n";
        cin>>chr;
        switch(chr)
        {
        case 1:
            obj.get();
            obj.display();
            break;
        case 2:
            obj.display();
            break;
        case 3:
            cout<<"Enter either name, d.o.b or phone number you want to find\n";
            cin>>key;
            obj.search(key);
            break;
        case 4:
            obj.sort();
            obj.display();
            break;
        default:
            cout<<"Wrong choice"<<endl;
        }
         cout<<"Do you wish to continue? Y or N\n";
        cin>>x;
    }while(x=='y' || x=='Y');
 
    
    return 0;
}

