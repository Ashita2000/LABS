#include<iostream>
#include<iomanip>
using namespace std;
struct process{
	int id;
	int arrivalTime,burstTime,remaining,completionTime;
	int taTime,waitTime;
};

int main(){

    process p[5];
    int n=5;
    for(int i=0;i<n;i++)
        {   p[i].id=i+1;
            cin>>p[i].arrivalTime;
            cin>>p[i].burstTime;}

    for(int i=0;i<n;i++){
        cin>>p[i].completionTime;
    }

    for(int i=0;i<n;i++){
        cin>>p[i].waitTime;
    }

    for(int i=0;i<n;i++){
        cin>>p[i].taTime;
    }
    cout<<setw(10)<<"Process ID "<<setw(17)<<"Arrival Time(msec) "<<setw(17)<<"Burst Time(msec)  "<<setw(17)<<"Completion Time(msec)  "<<setw(17)<<"Waiting Time(msec)  "<<setw(17)<<"TA Time(msec)\n";
	for(int i=0;i<n;i++)
	{
		cout<<setw(10)<<p[i].id <<setw(17)<<p[i].arrivalTime <<setw(17)<<p[i].burstTime <<setw(17)<<p[i].completionTime<<setw(17)<<p[i].waitTime <<setw(17)<<p[i].taTime;

		cout<<endl;
	}
return 0;
}
