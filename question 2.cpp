#include <iostream>
using namespace std;




int main()
{
	int arry[]={1,3,5,7,2,4,6,8};
	int arry1[10];
	int f,f1,i;
	bool h=true;
	int x[2][2];
	for(int i=0;i<8;i++){
		cout<<arry[i]<<" ";
		
	}
	
	cout<<endl;
	
 for ( i = 0; i < 8; i++) 
	{
	 for(int j = i+1; j < 8; j++) 
		{ 
				if(arry[j]+1==arry[i])
				{
					cout<<"("<<arry[i]<<","<<arry[j]<<") ";
				

				}
		}
		 
		
	}







	return 0;
}

