#include <iostream>
#include <string>
using namespace std;
int bsearch(int a[],int x,int low,int high)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if (x < a[mid])
			return bsearch(a, x, low,mid - 1);
		else if (x>a[mid])
			return bsearch(a, x, mid + 1, high);
		else
			return mid;
	}
	return -1;
}
int main()
{
	string  temporary_x, temporary_Length, temporary_array;
	int Length, x;
	cout << "Enter length of array: " << endl;
	getline(cin, temporary_Length);
	Length = stoi(temporary_Length);
	int*p = new int[Length];
	for (int i = 0; i<Length ; i++)
	{
		cout << "Enter a number: " << endl;
		getline(cin, temporary_array);
		p[i] = stoi(temporary_array);
	}
	cout << "Enter a number for search: " << endl;
	getline(cin, temporary_x);
	x = stoi(temporary_x);
	cout << bsearch(p,x,0,Length);
	cin.get();
	return 0;
}
