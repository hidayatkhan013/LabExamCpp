#include <iostream>
using namespace std;
 
int main()
{
    int  arr[] = {4,3,7,8,6,2,1};
    bool h = true;
    int* parr,temp,temp1;
    
    cout<<endl<<"  BEFORE  ";
    for (int i=0; i<7; i++)
	{
    	cout << arr[i] << "  ";
	}
  
    for (int i=0; i<5; i++)
    {
    	parr=&arr[i];
        if (h)
        {
           
            if (*parr >*(parr+1))
			    {
			      	temp=*parr;
					*parr=*(parr+1);
					*(parr+1)=temp;
				}  
        }
        else 
        {
            
             if (*parr <*(parr+1))
				{
			        temp1=*parr;
					*parr=*(parr+1);
					*(parr+1)=temp1;
				}
        }
        h = !h; 
    }
cout<<endl;
cout<<"  AFTER   ";
    for (int i=0; i<7; i++)
	{
    	cout << arr[i] << "  ";
	}
      cout<<endl;  
    return 0;
}
