#include<iostream>
using namespace std;

void myswap(int & a,int & b){
	
	int temp=a;
	a=b;
	b=temp;
}

int main(){
	//lab1_Q1_L181014_Muzamil_Hassan
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
    {
    cout<<arr[i]<<"," ;
    }
	cout<<endl;
	myswap(arr[0],arr[4]);
	cout<<"The integers at indexes 0 and 4 are swaped"<<endl;
    for(int i=0;i<5;i++)
    {
    cout<<arr[i]<<"," ;
    }
}