#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n;
cout<<"CHI-Square analysis for two Variables\n\n";
cout<<"Enter the no. of attributes\n";
cin>>n;
double arr[n+1][3];
cout<<"Enter the observed values\n";
int i;
for(i=0;i<n;i++){
cin>>arr[i][0]>>arr[i][1];
arr[n][0]+=arr[i][0];
arr[n][1]+=arr[i][1];
arr[i][2]+=arr[i][0]+arr[i][1];
}
arr[n][2]=arr[n][0]+arr[n][1];
double exp[n][2];
for(i=0;i<n;i++){
          exp[i][0]=arr[i][2]*arr[n][0]/arr[n][2];
          exp[i][1]=arr[i][2]*arr[n][1]/arr[n][2];

}
double chi_square=0;
for(i=0;i<n;i++){
          chi_square+=((arr[i][0]-exp[i][0]))*((arr[i][0]-exp[i][0]))/exp[i][0];
          chi_square+=((arr[i][1]-exp[i][1]))*((arr[i][1]-exp[i][1]))/exp[i][1];

}
cout<<"Enter the tabular value\n";
double t;
cin>>t;
cout<<"Value of CHI Square is: "<<chi_square<<"\n";
if(t<chi_square)
          cout<<"We reject the null hypothesis\n";
else cout<<"The null hypothesis is correct\n";
return 0;
}
