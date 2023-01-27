#include<iostream> 

#include<ctime>

#include<stdlib.h>

#include<string>



using namespace std;

int random(){
	
	int in;
	
	srand(time(NULL));
	
	in=rand()%13+1; //隨機亂數1~13 
	
	if(in==11 || in==12 || in==13){
		
		return 10;
	} 
	
	
	
	return in;
}

int main(){
	
	string choice;
	
	int gamestatus=1;  //當gamestatus==0時，是電腦或玩家自爆 ，當gamestatus==1時，電腦和玩家都沒有自爆 
	
	int temp;
	
	int playerpoint=0;
	
	int dealerpoint=0;
	
	cout<<"21點小遊戲"<<endl;
	
	
	

		
		while(1){
			
		temp=random();
		
		playerpoint+=temp;
		
		if(playerpoint>21){
			
			cout<<"你有"<<playerpoint<<"點"<<endl;
			
			cout<<"你輸了"<<endl;
			
			gamestatus=0;
			
			break;
		}
		
		
		cout<<"是否繼續抽牌(Y/N)"<<endl;
		
		cout<<"你有"<<playerpoint<<"點"<<endl;
		
		cin>>choice;
		
		if(choice=="N"){
			
			break;
		}
			
			
		}
		
		if(gamestatus==1){
			
		
		
		while(1){
			
		temp=random();
		
		dealerpoint+=temp;
		
		cout<<"電腦有"<<dealerpoint<<"點"<<endl;
		
		
		
		if(dealerpoint>21){
			
			
			
			cout<<"你贏了"<<endl;
			
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
			
		cout<<"電腦有"<<dealerpoint<<"點"<<endl;
		
		cout<<"你有"<<playerpoint<<"點"<<endl;
		
		if(dealerpoint>playerpoint){
			
			cout<<"你輸了"<<endl; 
		}
		
		else if(dealerpoint<playerpoint){
			
			cout<<"你贏了"<<endl; 
		}
		
		else{
			
			cout<<"平手"<<endl;
		}
			
			
		}
		
		
		
		
		
		
		
	
	
		
		
	
	
	
	
}
