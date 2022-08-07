#include<iostream>
using namespace std;


int main()
{
	int arry[7]={10,21,22,100,101,200,300};
	int size=sizeof(arry)/sizeof(arry[0]);
	int flag=0;
	
	for(int i=0;i<size-2;i++)
	{
		for(int j=i+1;j<size-1;j++)
		{
			for(int k=j+1;k<size;k++)
			{
				if (arry[i]+arry[j]>arry[k])
				{	 
				cout<<"combination is "<<"("<<arry[i]<<","<<arry[j]<<","<<arry[k]<<")"<<endl;
				flag++;
				}
			}
		}		
	}	
cout<<"The Number of possible triangles is : "<<flag<<endl;
	
return 0;
}

