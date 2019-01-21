#include<iostream>
using namespace std;

void myswap(int & a,int & b){
	
	int temp=a;
	a=b;
	b=temp;
}

void inorder()
{
	int size=0;
   cout<<"Enter the size"<<endl;
   cin>>size;
   int * temp=new int [size];
   cout<<"Enter Your "<<size<<" elements"<<endl;
   for(int i=0;i<size;i++)
   {  //declaring 
	 int n;
     cin>>n;
	 temp[i]=n;
   }

   for(int i=0;i<size;i++)
   {
   for(int j=i+1;j<size;j++)
     {
       if(temp[i]>temp[j])
		   myswap(temp[i],temp[j]);
     }
   }
   cout<<"These elements In order are"<<endl;
   for(int i=0;i<size;i++)
   {
   cout<<temp[i]<<" ";
   }
}

void offset(){
	int size=0;
   cout<<"Enter the size"<<endl;
   cin>>size;
   int * temp=new int [size];
   cout<<"Enter Your "<<size<<" elements"<<endl;
   for(int i=0;i<size;i++)
   {  //declaring 
	 int n;
     cin>>n;
	 temp[i]=n;
   }

   for(int i=0;i<size;i++)
   {
   for(int j=i+1;j<size;j++)
     {
       if(temp[i]>temp[j])
		   myswap(temp[i],temp[j]);
     }
   }
   cout<<"These elements In order are"<<endl;
   for(int i=0;i<size;i++)
   {
   cout<<temp[i]<<" ";
   }
}

int main()
{
offset();
return 0;
}