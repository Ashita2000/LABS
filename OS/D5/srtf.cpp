#include<bits/stdc++.h>
using namespace std;

const int ts=1;
struct shedule{
    int id,att,brt,end,total=0;
};

bool compare(shedule &a,shedule &b){ return a.brt<b.brt;}

int main(int argc, char const *argv[])
{
	//priority_queue<int,pair<int,int>, greater<int>> q;
	int n;
	cout<<"\nEnter number of processes :";
	cin>>n;

	vector<shedule> v;
	vector<shedule> q;
	vector<shedule> final;
	cout<<"\nEnter the arrival time and burst time of :";
	for(int i=1;i<=n;i++){
		cout<<"\nProcess "<<i<<" :";

		shedule s;
		cin>>s.att>>s.brt;
		s.id=1;
		v.push_back(s);
	}

	int time=0,inindex=1;
	q.push_back(v[0]);
	while(!q.empty()){
            if(time==v[inindex].att  && inindex<=v.size())
                q.push_back(v[inindex++]);

        sort(q.begin(),q.end(),compare);

        if((time++)>=q[0].att ){
          q[0].end=time;
          q[0].total++;
        }
        if(q[0].total==q[0].btt){
            final.push_back(q[0]);
            q.erase(q.at(0));
        }
	}

	for(auto i:final){
        cout<<setw(10)<<final[i].id <<setw(15)<<final[i].att <<setw(15)<<final[i].btt <<setw(15)<<final[i].total<<setw(15)<<final[i].total-final[i].att;

		cout<<endl;
	}

	return 0;
}
