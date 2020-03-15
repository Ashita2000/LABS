#include <bits/stdc++.h>
using namespace std;

struct Schedule
{
    string pro_id;
    int art,bt,ct=0,ta=0,wt=0;

    //artime = Arrival time,
    //bt = Burst time,
    //ct = Completion time,
    //ta = Turn around time,
    //wt = Waiting time


};

// Function to find the waiting time for all
// processes
void findWaitingTime(Schedule proc[], int n)
{
    int rt[n];

    // Copy the burst time into rt[]
    for (int i = 0; i < n; i++)
        rt[i] = proc[i].bt;

    int complete = 0, t = 0, minm = INT_MAX;
    int shortest = 0, finish_time;
    bool check = false;

    // Process until all processes gets
    // completed
    while (complete != n) {

        // Find process with minimum
        // remaining time among the
        // processes that arrives till the
        // current time`
        for (int j = 0; j < n; j++) {
            if ((proc[j].art <= t) &&
            (rt[j] < minm) && rt[j] > 0) {
                minm = rt[j];
                shortest = j;
                check = true;
            }
        }

        if (check == false) {
            t++;
            continue;
        }

        // Reduce remaining time by one
        rt[shortest]--;

        // Update minimum
        minm = rt[shortest];
        if (minm == 0)
            minm = INT_MAX;

        // If a process gets completely
        // executed
        if (rt[shortest] == 0) {

            // Increment complete
            complete++;
            check = false;

            // Find finish time of current
            // process
            finish_time = t + 1;

            // Calculate waiting time
            proc[shortest].wt = finish_time -proc[shortest].bt -roc[shortest].art;

            if (proc[shortest].wt < 0)
                proc[shortest].wt = 0;
        }
        // Increment time
        t++;
    }
}

// Function to calculate turn around time
void findTurnAroundTime(Schedule proc[], int n)
{
    // calculating turnaround time by adding
    // bt[i] + wt[i]
    for (int i = 0; i < n; i++)
        proc.[i].tat = proc[i].bt + proc.[i].wt;
}

// Function to calculate average time
void srtf(Schedule process[], int n)
{
    //int total_wt = 0,total_tat = 0;

    // Function to find waiting time of all
    // processes
    findWaitingTime(process, n);

    // Function to find turn around time for
    // all processes
    findTurnAroundTime(process, n);

    // Display processes along with all
    // details
    cout << "Processes "
        << " Burst time "
        << " Waiting time "
        << " Turn around time";

    // Calculate total waiting time and
    // total turnaround time
    for (int i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << "\n " << proc[i].pid << " "
            << proc[i].bt << " " << wt[i]
            << " " << tat[i] << endl;
    }

    /*cout << "Average waiting time = "
        << (float)total_wt / (float)n;
    cout << "Average turn around time = "
        << (float)total_tat / (float)n;
*/

}

// Driver code
int main()
{
    Schedule process[100];
    int n;

    cout<<"Enter the number of process: ";
    cin>>n;

    cout<<"Enter the (1)Process ID (2) Arrival time and (3) Brust time of "<<n<<" process\n";
    for(int i=0;i<n;i++)
    {
        cin>>process[i].pro_id;
        cin>>process[i].art;
        cin>>process[i].bt;
    }

    srtf(process, n);
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

struct Schedule
{
	string pro_id;
	int artime,bt,ct=0,ta=0,wt=0;

	//artime = Arrival time,
	//bt = Burst time,
	//ct = Completion time,
	//ta = Turn around time,
	//wt = Waiting time


};

bool compare(Schedule p1,Schedule p2)
{
	return p1.artime<p2.artime;
}

int main()
{

	Schedule process[100];
	int n;

	cout<<"Enter the number of process: ";
	cin>>n;

	cout<<"Enter the (1)Process ID (2) Arrival time and (3) Brust time of "<<n<<" process\n";
	for(int i=0;i<n;i++)
	{
		cin>>process[i].pro_id;
		cin>>process[i].artime;
		cin>>process[i].bt;
	}


	sort(process,process+n,compare);

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
    cout<<setw(10)<<"Process ID "<<setw(15)<<"Arrival Time "<<setw(15)<<"Burst Time "<<setw(15)<<"Completion Time"<<setw(15)<<"Waiting Time "<<setw(15)<<"TA Time \n";
	for(i=0;i<n;i++)
	{
		cout<<setw(10)<<process[i].pro_id <<setw(15)<<process[i].artime <<setw(15)<<process[i].bt <<setw(15)<<process[i].ct<<setw(15)<<process[i].wt <<setw(15)<<process[i].ta;

		cout<<endl;
	}

	return 0;
}*/

/*
input
0 0 4
1 1 7
2 2 6
3 3 5

OUTPUT
Process ID   Arrival Time     Burst Time Completion Time  Waiting Time       TA Time
     input              0              0              0              0              0
         4              1              1              2              0              1
         7              2              2              4              0              2
         6              3              3              7              1              4
*/
