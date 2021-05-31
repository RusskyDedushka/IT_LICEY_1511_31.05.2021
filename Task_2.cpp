#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void max_d(int x, int y, int z, int &max_del);
 void delitel(int i);

int main()
{
	int a, b, q=0, MAX=0;
	cin>>a>>b;
	int min=b,max_del=0;
	for (int i=b; i>=a; i--)
	{
		delitel(i);
		q++;
		if (max_del>MAX)
		{
			MAX=max_del;
			if (i<min) min=i;
		}
	}
	cout << q <<" "<< min;
}	

void max_d(int x, int y, int z, int &max_del)
{
	int max_0, min_0;
	max_0=max(max(x, y), z);
	min_0=min(min(x,y), z);
	max_del=max_0-min_0;
}
 void delitel(int i)
{
	
}

