#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
long tinhtoan(int n);
void xuat(long kq);

int main(){
	int n;
	nhap(n);
	long kq = tinhtoan(n);
	xuat(kq);
}
void nhap(int &n)
{
	cin>>n;
}
long tinhtoan(int n)
{
	long s=1;
	for(int i=1;i<=n;i++)
		s = s*i;
	return s;
}
void xuat(long kq)
{
	cout<<kq;
}
