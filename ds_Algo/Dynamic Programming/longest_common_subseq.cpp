#include<iostream>
using namespace std;
//  longest common subsequence
int lon_com_subseq(string a,string b,int n,int m)
{
	if(m==0||n==0)
	return 0;
	if(a[n-1]==b[m-1])
	return(1+lon_com_subseq(a,b,n-1,m-1));
	else
	{
		return(max(lon_com_subseq(a,b,n-1,m),lon_com_subseq(a,b,n,m-1)));
	}
}
int main()
{
	string a,b;
	cout<<"Enter 2 strings";
	cin>>a>>b;
	cout<<lon_com_subseq(a,b,a.length(),b.length());
}
