#include <bits/stdc++.h>
using namespace std;

struct Schedule
{
	string pro_id;
	int artime,bt,ct,ta,wt;
	/*
	artime = Arrival time,
	bt = Burst time,
	ct = Completion time,
	ta = Turn around time,
	wt = Waiting time
	*/

};

bool compare(Schedule p1,Schedule p2)
{
	return p1.bt<p2.bt;
}

int main()
{

	Schedule process[100];

	int cpunon=0;

	int n,i;

	cout<<"Enter the number of process: ";
	cin>>n;

	cout<<"Enter the (1)Process ID (2) Arrival time (msec) and (3) Brust time (msec) of "<<n<<" process\n";
	for(i=0;i<n;i++)
	{
		cin>>process[i].pro_id;
		cin>>process[i].artime;
		cin>>process[i].bt;
	}


	sort(process,process+n,compare);

	cpunon=process[0].artime-0;

	// initial values

	process[0].ct=process[0].artime+process[0].bt;
	process[0].ta=process[0].ct-process[0].artime;
	process[0].wt=0;

	for(i=1;i<n;i++)
	{
		if(process[i].artime<=process[i-1].ct)
		{
			process[i].ct=process[i-1].ct+process[i].bt;
			process[i].ta=process[i].ct-process[i].artime;
			process[i].wt=process[i].ta-process[i].bt;
		}
		else
		{
			process[i].ct=process[i].bt+process[i].artime;
			process[i].ta=process[i].ct-process[i].artime;
			process[i].wt=process[i].ta-process[i].bt;
			cpunon+=process[i].artime-process[i-1].ct;
		}
    }


	cout<<"\nOUTPUT\n";
    cout<<setw(10)<<"Process ID "<<setw(17)<<"Arrival Time(msec) "<<setw(17)<<"Burst Time(msec)  "<<setw(17)<<"Completion Time(msec)  "<<setw(17)<<"Waiting Time(msec)  "<<setw(17)<<"TA Time(msec)\n";
	for(i=0;i<n;i++)
	{
		cout<<setw(10)<<process[i].pro_id <<setw(17)<<process[i].artime <<setw(17)<<process[i].bt <<setw(17)<<process[i].ct<<setw(17)<<process[i].wt <<setw(17)<<process[i].ta;

		cout<<endl;
	}



	return 0;
}

/*
input
0 0 4
1 1 7
2 2 6
3 3 5

Process ID Arrival Time(msec) Burst Time(msec)  Completion Time(msec)  Waiting Time(msec)     TA Time(msec)
     input                0                0                0                0                0
         4                1                1                2                0                1
         7                2                2                4                0                2
         6                3                3                7                1                4

*/
