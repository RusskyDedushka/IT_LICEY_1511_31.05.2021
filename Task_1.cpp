#include <iostream>
#include <cmath>
using namespace std;

void chislo(int x, int &p);

int main()
{
	int  a, b, q=0;
	cin>>a>>b;
	int max=a;
	for (int i=a; i<=b; i++)
	{
		tryAgain:
		int p=0;
		chislo(abs(a), p);
		if (p==0 || p==1)
		{
			i++;
			goto tryAgain;
		}
		int st=abs(i/(int(pow(10,p-2)))), ml=abs(i%100);
		if ( (st-ml)!=0 && i%(st-ml)==0)
			{
				q++;
				if (i>max) max=i;
			}
	}

	cout <<"\n"<< q <<" "<< max;
}	
void chislo(int x, int&p)
{
	while (x>0)
	{
		x/=10;
		p++;
	}
}
