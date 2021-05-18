#include<iostream>
using namespace std;
void cube(int n,int j)
{
	cout<<"mul"<<n*j;
	cout<<"sum"<<j+n;
}
int main()
{
	int num,n;
	cout<<"enter the number \n ";
	cin>>num>>n;
	cube(num,n);
}
