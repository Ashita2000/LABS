#include <iostream>
#include<iomanip>
using namespace std;

#define MAX 10

class student
{
    private:
        char name[30];
        int rollNo;
        float total;
    public:
        void getDetails(void);
        void putDetails(void);
};

void student::getDetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks (out of 100): ";
    cin >> total;

}

void student::putDetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total;
}

int main()
{
    student std[MAX];
    int n,i;
    cout << "Enter total number of students: ";
    cin >> n;

    int count=0;


    int choice;
 	cout<<"Enter choice:";
 	cout<<"\n1.Insert a record \n2.Dispaly Records (on basis of roll no) \n3.Dispaly Records (on basis of marks) \n4.Edit Record\n";
 	cin>>choice;

 	do{
 		switch(choice){
 			case 1:
 				std[count++].getDetails();
 				break;
 			case 2:
 				cout<<setw(5)<<"Roll NO"<<setw(15)<<"Name"<<setw(5)<<"Marks"<<setw(5)<<"age"<<setw(5)<<"Gender"<<endl;

 				for(i=0;i<count; i++){
                cout << "Details of student " << (i+1) << ":\n";
                std[i].putDetails();
                }

            case 3:
                cout<<setw(5)<<"Roll NO"<<setw(15)<<"Name"<<setw(5)<<"Marks"<<setw(5)<<"age"<<setw(5)<<"Gender"<<endl;

 				for(i=0;i<count; i++){
                cout << "Details of student " << (i+1) << ":\n";
                std[i].putDetails();
                }
 	            break;


            default:
            	cout<<"\nEnter a valid choice.";
            	break;
            	cout<<"\n1.Insert a record \n2.Dispaly Records (on basis of roll no) \n3.Dispaly Records (on basis of marks) \n4.Edit Record\n";
            cin>>choice;
 		}

 	}while(choice!=5);

    return 0;
}
