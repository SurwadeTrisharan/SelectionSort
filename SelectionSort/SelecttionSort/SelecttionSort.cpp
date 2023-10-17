#include<iostream>
using namespace std;
int n,i;
void selectionsort(int a[],int n)
{
	int i, j;
	int min, temp;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] <a [min])
				min = j;
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
}


int main()
{
	int a[20];
	cout << "Enter how much element do you want in arrary :" << endl;
	cin >> n;
	cout << "Enter the elements :" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	selectionsort(a, n);
	cout << "After shorting :" << endl;
	for (i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}