
#include<iostream>

#include<string>

using namespace std;

int main(){
	
	class employee{
		
		private:
			
			string name;
			
			string id;
			
			int salary;
		
		public:
			
			void setdata(string name,string id,int salary){
				
				
				this->name=name;
				
				
				this->id=id;
				
				
				this->salary=salary;
				
				return;
			}
			
			void getdata(){
				
				cout<<"�m�W"<<":";
				
				cout<<this->name<<",";
				
				cout<<"id"<<":";
				
				cout<<this->id<<",";
				
				cout<<"�~��"<<":";
				
				cout<<this->salary<<",";
				
				return;
			}
		
		
		
	};
	
	class engineer: public employee{
		
		private:
			
			string speciality;
			
			string project;
		
		public:
			
			void setproject(string speciality,string project){
				
				this->speciality=speciality;
				
				this->project=project;
				
				return;
				
				
			}
			
			void getproject(){
				
				cout<<"�M��"<<":";
				
				cout<<this->speciality<<",";
				
				cout<<"�M��"<<":"; 
				
				cout<<this->project<<endl;
				
				return;
				
				
			}
		
		
	};
	
	class pt: public employee{
		
		private:
			
			int worktime;
			
		public:
			
			void setworktime(int worktime){
				
				
				this->worktime=worktime;
				
				return;
				
				
			}
			
			void getworktime(){
				
				cout<<"�u�@�ɼ�"<<":"; 
				
				cout<<this->worktime<<endl;
				
				return;
				
				
			}
			
			
		
		
	};
	
	class technician: public employee{
		
		private:
			
			bool insurance;
			
		public:
			
			void setinsurance(string temp){
				
				if(temp=="Y" || temp=="y"){
					
					this->insurance=1;
				}
				
				else{
					
					insurance==0;
				}
				
				
				
				
				return;
				
				
			}
			
			void getinsurance(){
				
				cout<<"¾�~�O�I"<<":";
				 
				if(this->insurance==1){
					
					cout<<"��"<<endl; 
				}
				else{
					
					cout<<"�L"<<endl;
				}
				
				return;
				
				
			}
			
			
			
			
	};
	
	class manager: public employee{
		
		private:
			
			string* ptr;
			
			int people;
		
		public:
			
			void setid(int people){
				
				cout<<"�U�ݭ��uid";
				
				this->people=people;
				
				ptr=new string[people];
				
				for(int i=0;i<people;i++){
					
					cin>>*(ptr+i);
				}
				
				
			}
			
			void getid(){
				
				
				
				for(int i=0;i<people;i++){
					
					cout<<*(ptr+i)<<",";
				}
				
				delete[] ptr;
				
				
			}
			
			
				
				
		
		
		
	};
	
	engineer a;
	
	a.setdata("Andy","001",45000);
	
	a.setproject("��Ʈw�޲z","A");
	
	a.getdata();
	
	a.getproject();
	
	pt b;
	
	b.setdata("Tim","002",15000);
	
	b.setworktime(60);
	
	b.getdata();
	
	b.getworktime();
	
	technician c;
	
	c.setdata("Travis","003",25000);
	
	c.setinsurance("Y");
	
	c.getdata();
	
	c.getinsurance();
	
	manager d;
	
	d.setdata("Kevin","004",50000);
	
	d.getdata();
	
	d.setid(5);
	
	d.getid();

	
}
