

#include<iostream>

#include<string>

#include<stack>

using namespace std;

int main(){
	
	int status=1;
	
	int j=0;
	
	string a;
	
	char temp;
	
	stack<char>palindrome;
	
	getline(cin,a);
	
	for(int i=0;i<a.size();i++){
		
		palindrome.push(a[i]);
	}
	
	while(!palindrome.empty()){
		
		temp=palindrome.top();
		
		if(temp!=a[j]){
			
			status=0;
			
			cout<<"not palindrome"<<endl;
			
			break;
			
			
		}
		
		palindrome.pop();
		
		j++;
		
		
	}
	
	if(status==1){
		
		cout<<"palindrome"<<endl;
	}
	
	
	
	
}
