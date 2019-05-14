#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k = 1;
    float x, e, r = 0;
    float sum = 0;
    int start = 2;
    int end = 15;
    int step = 1;
	cout << "Please enter calculation accuracy ";
	cin >> e;
	for (int x = start; x<=end; x+= step)
	{
		r = 2.0/((2*k-1)*pow(x,(2*k-1)));
		sum += r;
		k++;
		while(fabs(r)>e){
		    r = 2.0/((2*k-1)*pow(x,(2*k-1)));
	    	sum += r;
		}
		cout << endl << x << " " << " " << sum;
		
	}
}
