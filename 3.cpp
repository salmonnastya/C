#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    const int p = 3;
    const int q = 3;
    int matrix[p][q];

    for (int i = 0; i < p; i++)
    {
        for(int j = 0; j<q; j++){
            matrix[i][j] = rand() % 10 - 5;
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
    int maxcount = 0;
    for (int i = 0; i < p; i++)
    {
        for (int j =0; j<q;j++){
            int count = 0;
            if(matrix[i][j]<0){
                    for(int m = j; m<q; m++){
                        if(matrix[i][m]<0){
                            count++;
                            if(count>maxcount){
                                maxcount = count;
                                
                            }
                            else{
                                count = 0;
                            }
                        }
                }
            }
        }
    }
    cout <<"Maxcoun is: "<< maxcount << endl;
    
    for(int i =0; i<p; i++){
        for(int j =0; j<q; j++){
            if(i==j){
                matrix[i][j] = maxcount;
            }
        }
    }
    
    for (int i = 0; i < p; i++)
    {
        for(int j = 0; j<q; j++){
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }
}
