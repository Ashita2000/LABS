#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define fok(i,k,n) for(i=k;i<n;i++)

#define PI 3.14159
#define vint vector<int>
#define vfloat vector<float>

bool cmp(tuple<int,int,int> a,tuple<int,int,int> b){return get<2>(a)/get<1>(a) > get<2>(b)/get<1>(b);}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,capacity,i;
		cin>>n>>capacity;

		float profit=0;

		vector < tuple<int,int,int> >t;
		int serialNo,weight,price;

		fo(i,n){
			cin>>serialNo>>weight>>price;
			t.push_back(make_tuple(serialNo,weight,price));
		}

		sort(t.begin(),t.end(),cmp);

		float remaining=capacity,extract;
		i=0;
		cout<<"\n\n";
		cout<<setw(5)<<"S.NO"<<setw(10)<<"Amount"<<setw(10)<<"price"<<"\n";
		while(remaining>0){
			extract= remaining<get<1>(t[i])?remaining:get<1>(t[i]);
			remaining-=extract;
			profit+=extract* (float)get<2>(t[i])/get<1>(t[i]);
			cout<<setw(5)<<get<0>(t[i])<<setw(10)<<extract<<setw(10)<<extract* (float)get<2>(t[i])/get<1>(t[i])<<"\n";
			i++;
		}

		cout<<"\nTotal Profit :"<<profit<<"\n";

	}
	return 0;
}

/*
input

2
3 50
1 10 60
2 20 100
3 30 120
3 50
1 30 120
2 20 100
3 10 60
*/
