#include<iostream> 

#include<ctime>

#include<stdlib.h>

#include<string>



using namespace std;

int random(){
	
	int in;
	
	srand(time(NULL));
	
	in=rand()%13+1; //�H���ü�1~13 
	
	if(in==11 || in==12 || in==13){
		
		return 10;
	} 
	
	
	
	return in;
}

int main(){
	
	string choice;
	
	int gamestatus=1;  //��gamestatus==0�ɡA�O�q���Ϊ��a���z �A��gamestatus==1�ɡA�q���M���a���S�����z 
	
	int temp;
	
	int playerpoint=0;
	
	int dealerpoint=0;
	
	cout<<"21�I�p�C��"<<endl;
	
	
	

		
		while(1){
			
		temp=random();
		
		playerpoint+=temp;
		
		if(playerpoint>21){
			
			cout<<"�A��"<<playerpoint<<"�I"<<endl;
			
			cout<<"�A��F"<<endl;
			
			gamestatus=0;
			
			break;
		}
		
		
		cout<<"�O�_�~���P(Y/N)"<<endl;
		
		cout<<"�A��"<<playerpoint<<"�I"<<endl;
		
		cin>>choice;
		
		if(choice=="N"){
			
			break;
		}
			
			
		}
		
		if(gamestatus==1){
			
		
		
		while(1){
			
		temp=random();
		
		dealerpoint+=temp;
		
		cout<<"�q����"<<dealerpoint<<"�I"<<endl;
		
		
		
		if(dealerpoint>21){
			
			
			
			cout<<"�AĹ�F"<<endl;
			
			gamestatus=0;
			
			break;
		}
		
		if(dealerpoint>=17){
			
			break;
		}
	
		
		
			
			
		}
		
	}
		
		if(gamestatus==1){
			
		cout<<"-----------------------------"<<endl;
			
		cout<<"�q����"<<dealerpoint<<"�I"<<endl;
		
		cout<<"�A��"<<playerpoint<<"�I"<<endl;
		
		if(dealerpoint>playerpoint){
			
			cout<<"�A��F"<<endl; 
		}
		
		else if(dealerpoint<playerpoint){
			
			cout<<"�AĹ�F"<<endl; 
		}
		
		else{
			
			cout<<"����"<<endl;
		}
			
			
		}
		
		
		
		
		
		
		
	
	
		
		
	
	
	
	
}
