#include <bits/stdc++.h>
#include<cmath>
using namespace std;

double Euclidean(double *x,double *y,int n){
          int i;
          double dis;
          for(i=0;i<n;i++){
          dis+=(x[i]-y[i])*(x[i]-y[i]);
          }
          return sqrt(dis);
}
double WeightedEuclidean(double *x,double *y,int n){
          int i;
          double dis;
          for(i=0;i<n;i++){
          cout<<"Enter the weight for "<<i+1<<"th attribute- ";
          int w;
          cin>>w;
          dis+=w*(x[i]-y[i])*(x[i]-y[i]);
          }
          return sqrt(dis);
}
double Manhattan(double *x,double *y,int n){
          int i;
          double dis;
          for(i=0;i<n;i++){
          dis+=abs(x[i]-y[i]);
          }
          return dis;
}


int main()
{
	  cout << "Enter no of itemset :";
	  int n;cin >> n;
	  double x[n],y[n];

	  cout << "Enter data for X :";
	  for (int i = 0; i < n; i++)
        {         cin >> x[i];     }
      cout << "Enter data for Y :";
      for (int i = 0; i < n; i++){
            cin >> y[i];
      } ;
	int ch;
	cout<<"\n1. Display Data\n2. Eucledean distance.\n3. Manhatten Distance\n4. Weighted Eucledean distance\n5. Press 5 to exit\n\nEnter a valid option ";
	cin>>ch;
	while(ch!=5){
		switch(ch){
			case 0:
				break;
			case 1:
				cout<<"\n\n"<<setw(10)<<"X"<<setw(10)<<"Y";
				for(int p=0;p<n;p++)
					cout<<"\n"<<setw(10)<<x[p]<<setw(10)<<y[p];
					cout<<"\n";
				break;

			case 2:
				cout<<"Required distance "<<Euclidean(x,y,n)<<"\n";
				break;
			case 3:
				cout<<"Required distance "<<Manhattan(x,y,n)<<"\n";
				break;
			case 4:
				cout<<"Required distance "<<WeightedEuclidean(x,y,n)<<"\n";
				break;
			case 5:
				break;

			default:
				cout<<"Enter a valid choice";
				break;
		}
	cout<<"\n1. Display Data\n2. Eucledean distance.\n3. Manhatten Distance\n4. Weighted Eucledean distance\n5. Press 5 to exit\n\nEnter a valid option ";
	cin>>ch;
	}
	return 0;
}
