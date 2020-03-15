#include <iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

bool funR();
bool funM();

class student
 {
     public:
 	int roll;
 	char name[15];
 	float marks;
 	int age;
 	char gender;

 	//static int i=0;
 public:
 	//student(){};
 	//~student(){
 	student ins(int r,char n[],float m,int a,char g)
 	{
 		student temp;
 	temp.roll=r;
 	strcpy(temp.name,n);
 	temp.marks=m;
 	temp.age=a;
 	temp.gender=g;
 	return temp;
 	}
 	void show(){
 		cout<<setw(5)<<roll<<setw(15)<<name<<setw(5)<<marks<<setw(5)<<age<<setw(5)<<gender<<endl;
 	}

 	};

 bool funR(student &a,student &b)
 {
 	return (a.roll>b.roll);
 }

 bool funM(student &a,student &b)
 {
 	return (a.marks>b.marks);
 }


 /*void edit(){
 	cout<<"\nEnter attribute to edit";
 	cout<<"\n1.Roll NO \n2.Name \n3.Marks \n4.Age \n5.Gender";
 	int ch;
 	cin>>ch;

 	cout<<"\nEnter your updated attribue";

 	switch(ch)
 	{
 		case 1:
 		{
 			int r;
 			cin>>r;

 		}

 	}
 }*/

 int main(int argc, char const *argv[])
 {
 	//static int count=0;
 	std::vector<student> v;

 	int choice;
 	cout<<"Enter choice:";
 	cout<<"\n1.Insert a record \2.Dispaly Records (on basis of roll no) \n3.Dispaly Records (on basis of marks) \n4.Edit Record";
 	cin>>choice;

 	do{
 		switch(choice){
 			case 1:
 				int r,m,a;
 				char n[15];
 				char g;
 				cout<<"\nEnter\n1.Roll NO \n2.Name \n3.Marks \n4.Age \n5.Gender";
 				cin>>r>>n>>m>>a>>g;
 				student rec;
 				rec.ins(r,n,m,a,g);
 				v.push_back(rec);
 				//sort(v.beg(),v.end(),funR());
 				/*int s=v.size();
 	            for(int i=s-1;i>=0;i--)
                    for(int j=0;j<i;j++)
                        if(funR(v.at[j]),funR(v.at[j+1]))
                            swap(v.at[j],v.at[j+1]);
*/

 				break;
 			case 2:
 				cout<<setw(5)<<"Roll NO"<<setw(15)<<"Name"<<setw(5)<<"Marks"<<setw(5)<<"age"<<setw(5)<<"Gender"<<endl;
 	            int s=v.size();
 	            for(int i=0;i<s;i++)
 	            	v[i].show();
 	            break;

            case 3:
//sort(v.beg(),v.end(),funM());

                /*for(int i=s-1;i>=0;i--)
                    for(int j=0;j<i;j++)
                        if(funR(v.at[j]),funM(v.at[j+1]))
                            swap(v.at[j],v.at[j+1]);
                            */
            	cout<<setw(5)<<Roll NO<<setw(15)<<Name<<setw(5)<<Marks<<setw(5)<<age<<setw(5)<<Gender<<endl;

 	            for(int i=0;i<v.size();i++)
 	            	v[i].show();
 	            break;


            default:
            	cout<<"\nEnter a valid choice.";
            	break;
            cin>>choice;
 		}

 	}while(choice!=5)

 	/*cout<<"\nEnter attribute to edit";
 	cout<<"\n1.Roll NO \n2.Name \n3.Marks \n4.Age \n5.Gender";

 	cout<<"\nEnter the roll no of student whose data you want to edit";
 	int edit;
 	cin>>edit;*/
 	return 0;
 }
