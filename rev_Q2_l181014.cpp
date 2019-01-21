#include<iostream>
#include<fstream>
using namespace std;
void power(int n,int k)
{   
	int sum=n;
	for(int i=1;i<k;i++)
	{
	sum=sum*n;
	}

	cout<<sum;
}
int main ()
{   ofstream fout;
    fout.open("//E");
	//revision Q 2;//L181014_Muzamil_Hassan
	fout<<"enter a number"<<endl;
	int m;cin>>m;
	int k;cin>>k;
	power(m,k);
	fout<<endl;
}