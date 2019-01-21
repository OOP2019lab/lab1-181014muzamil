#include<iostream>
using namespace std;

void pattern(int n)
{
cout<<n-3<<"******"<<n-3<<endl;
cout<<n-2<<n-2<<"****"<<n-2<<n-2<<endl;
cout<<n-1<<n-1<<n-1<<"**"<<n-1<<n-1<<n-1<<endl;
cout<<n<<n<<n<<n<<n<<n<<n<<n<<endl;
cout<<n+1<<n+1<<n+1<<"**"<<n+1<<n+1<<n+1<<endl;
cout<<n+2<<n+2<<"****"<<n+2<<n+2<<endl;
cout<<n+3<<"******"<<n+3<<endl;
}

int main ()
{   
	//revision Q 1 //L181014_Muzamil_Hassan;
	cout<<"Enter a number to see pattern"<<endl<<endl;
	int n;
    cin>>n;
	pattern(n);
}