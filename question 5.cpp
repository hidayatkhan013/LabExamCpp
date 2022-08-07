#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;




int main()
{
int option;
int arr[20];
int data=0;
int turn;
int turn1;
bool h=true;
int score=0;
int score1=0;
int idicat=0;


////////////////////////////////////////
cout<<endl;						      //
cout<<"		wellcome to Game"<<endl;  //
cout<<endl;							  //
cout<<"1)	Play Game"<<endl;		  //
cout<<"2)	Game Rules"<<endl;		  //
cin>>option;						  //
////////////////////////////////////////



if(option==1){
	
do{
	srand((int)time(0)); 
	for(int j=0;j<3;j++)
	{
	       data=(rand()%10)+1;
		   arr[j]=data;
	}
	
	
	
		if(h)
		{
			cout<<"Your Turn : ";
			cin>>turn;
			if(turn==1){
				score=0;
				cout<<"your score is "<<score<<endl;
			}
			if(turn==6){
				cout<<"Again Your turn! : ";
				cin>>turn;
				score=score+turn;
				cout<<"your score is "<<score<<endl;
			}
			if(turn!=1 && turn!=6)
			{
				score=score+turn;
				cout<<"your score is "<<score<<endl;
				cout<<endl;
			}
		
		idicat++;
		}
		if(!h){
			for(int j=0;j<1;j++){
				turn1=arr[j];
				cout<<endl;
				cout<<"computer turn is "<<turn1<<endl;
					 if(turn1==1)
					 {
					 score1=0;
					 cout<<"computer score is "<<score1<<endl;
					 }
					 if(turn1==6)
					 {cout<<"Again computer  turn! : "<<endl;
					 cout<<"computer turn is "<<turn1<<endl;
					 score1=score1+turn1;
					 cout<<"computer score is "<<score1<<endl;
					 }
					 if(turn1!=1 && turn1!=6)
					 {
					score1=score1+turn1;
					cout<<"computer score is "<<score1<<endl;
					 }
			cout<<endl;
				}
			
			
		}
		h=!h;
		if(idicat>15){
			cout<<"Turn is greater than 15 , Limit crossed !!"<<endl;
			break;
		}
		if(score==score1){
			cout<<"Game Ending ....Because score become equal"<<endl;
		}
}while(score!=score1 );
		   
}
	

if(option==2){
cout<<"1)	Every player gets 1 turn each."<<endl;
cout<<"2)	If any player gets ‘1’ then score turns zero"<<endl;
cout<<"3)	If a player gets ‘6’ the same player gets another turn."<<endl;
cout<<"4)	The game ends on if both players get equal marks or number of turns greater than 15."<<endl;
}


	return 0;
}

