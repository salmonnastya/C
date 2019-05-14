#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    double integer = 1;
    cout<<"input n:"<<endl;
    cin >> n;  
    double array[n];
    for(int i = 0; i<n; i++){
        cout<<"input array element:"<<endl;
        cin>>array[i];
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(array[i]>=0){
            count += 1;
        }
    }
    int idx = 0;
    float sum = 0.0;
    for (int i = 0; i<n; i++){
        if(array[i] == 0){
            idx = i;
        }
    }
    for(int i = idx; i<n; i++){
        sum += array[i];
    }
    cout<<"Number of positive elements: "<<count<<'\n';
    cout<<"Summ of element after 0: "<<sum<<'\n';
    for (int i = 0; i < n; i++){
    		double y = modf(array[i], &integer);
    		if (integer >= y) { 
    		    cout << array[i] << ' '; 
    		}
    }
	for (int i = 0; i < n; i++){
    		double y = modf(array[i], &integer);
    		if (integer < y) { 
    		    cout << array[i] << ' '; 
    		}
    }
}
