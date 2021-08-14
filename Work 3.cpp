//[10:17 am, 30/07/2020] Kohinoor ??: 
#include <iostream>
using namespace std;

void peak(int A[])
{
    int len;
	len = sizeof(A);
	cout<<len<<"\n";
    
    if (A[0]>A[1])
        cout<<A[0];
    
    int i=1;
    while(i!=0 && i!=(len-1))
    {
        if(A[i]>A[i-1] && A[i]>A[i+1])
        {
            cout<<A[i];
        }
		i++;
    }
    
    if (A[len-1]>A[len-2])
        cout<<A[len-1];
}
int main()
{
    int A[]={12,16,45,78,12,100};
    peak(A);
    return 0;
}
