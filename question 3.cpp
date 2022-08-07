#include <stdio.h> 
#include <iostream>
using namespace std;

void combination(int A[], int n, int fix) 
{ 
 for (int i = 0; i < n-3; i++) 
	{ for (int j = i+1; j < n-2; j++) 
		{ for (int k = j+1; k < n-1; k++) 
			{  for (int l = k+1; l < n; l++) 
					if (A[i] + A[j] + A[k] + A[l] == fix)
				{ 
					cout<<"  "<<A[i]<<"  "<<A[j]<<"  "<<A[k]<<"  "<<A[l]<<" = "<<fix<<endl; 
				}
				
			 } 
		} 
	}
} 

 int main()
{ 
	 int arry[] = {6, 1, 3, 4, 5, 2, 7, 1}; 
	 int size = sizeof(arry) / sizeof(arry[0]); 
	 int X = 10; 
	 combination (arry, size, X);
	  
 return 0; 
 }
