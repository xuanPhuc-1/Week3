#include<iostream>
using namespace std;

int main () {
	int n, sum1=0, sum2=0;
	cin >> n;
	int a[n];
	int max=a[1], min=1000000;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
		if(a[i] > max) max=a[i];
		if(a[i] < min) min=a[i];
		if(a[i] % 2==0) sum1+=a[i];
		if(a[i] % 2==1) sum2+=a[i];
	}
	cout << "Max= " << max << endl;
	cout << "Min= " << min << endl;
	cout << "Tong chan= " << sum1 << endl;
	cout << "Tong le= " << sum2 << endl;
}