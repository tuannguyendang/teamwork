#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n);
int tinhtoan(int n);
void xuat(int kq);

int main(){
	int n;
	nhap(n);
	int kq = tinhtoan(n);
	xuat(kq);
}
void nhap(int &n)
{
	cin>>n;
}
int tinhtoan(int n)
{
	int s = 0;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			s = s + i;
	return s;
}
void xuat(int kq)
{
	cout<<kq;
}

