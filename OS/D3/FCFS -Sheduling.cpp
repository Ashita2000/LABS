#include <bits/stdc++.h>
using namespace std;

bool f(pair<intpair<int,int>> a,pair<intpair<int,int>> b){
	return (a.second.first()<b.second.first());
}

int main(int argc, char const *argv[])
{
	vector<<pair<int,pair<int,int>>> q;
	int ct=0,wt=0,tat=0;

	int in_at,in_bt;

	int n;
	cout<<"\nEnter the number of processes :";
	cin>>n;

	cout<<"\n\nEnter the following for "<<n<<" processes (in msec) (1) Arrival Time and (2) Burst Time";
	for(int i=0;i<n;i++){
		cin>>in_at
		cin>>in_bt;
		cout<<endl;
		q.push_back(make_pair(i+1,make_pair(in_at,in_bt)));
	}

	cout<<"\n\n";
	cout<<setw(10)<<"Process NO"<<setw(15)<<"Arrival Time (ms)"<<setw(15)<<"Burst Time (ms)"<<setw(15)<<"Waiting Time (ms)"<<setw(20)<<"Turn Around Time (ms)"

	sort(v.begin(),v.end,f);
	for(int i=0;i<n;i++){
		wt-=q.front().second.second();
		
	}

	return 0;
}