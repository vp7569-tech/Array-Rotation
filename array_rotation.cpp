#include<iostream>
using namespace std;
void leftRotatebyOne(int rot[],int n)
{
	int temp=rot[0],i;
	for(i=0;i<n-1;i++)
	rot[i]=rot[i+1];
	
	rot[i]=temp;	
}

void leftRotate(int rot[], int d,int n)
{
	for (int i =0;i<d;i++)
	leftRotatebyOne(rot,n);
	
}

void PrintArray(int rot[],int n)
{
	for(int i=0;i<n;i++)
    cout<<rot[i]<<" ";
}
 int main()
{
   int rot[]={1,2,3,4,5,6,7};
   int n =sizeof(rot) / sizeof(rot[0]);
   
   
   leftRotate(rot,2,n);
   PrintArray(rot,n);
   
   return 0;
}
