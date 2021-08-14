#include<iostream>
#include<conio.h>
#include<string.h>

int main()
{
    string s[3];
    iny i;
	for(i=0;i<3;i++)
	{
		cout<<"Enter string "<<i+1<<"- ";
		cin>>s[i];	  
	}  
    string temp;
    
	for(int i=0;i<3;i++)
    {
    	 for(int j=0;j<3;j++)
	     {
	     	 if(s[j]>s[j+1])
	     	 {
	     	 	temp=s[j];
	     	 	s[j]=s[j+1];
	     	 	s[j+1]=temp;
			  }
		 }
    }  
	cout<<"arranged array="<<endl;
	
	for(i=0;i<3;i++)
	cout<<s[i]<<"\t";
    return 0;
}
