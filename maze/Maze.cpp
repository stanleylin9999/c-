#include <iostream>
#include <fstream>
#include <stack>

#define N 13

using namespace std;

int up=0,down=1,left=2,right=3;

struct point{
	int x;
	
	int y;
	
	int dir;
	
	point(int _x,int _y){
		
		x=_x;
		y=_y;
		dir=up;
		
	}
};

bool operator==(const point& p1,const point& p2){
	return p1.x==p2.x && p1.y==p2.y;
}

stack<point>s;

bool solve(int maze[N][N],bool visited[N][N],point start,point finish){
	
	s.push(start);
	visited[start.x][start.y]=true;
	while(!s.empty()){
		if(s.top()==finish){
			return true;
		}
		int px=s.top().x;
		int py=s.top().y;
		int pd=s.top().dir;
		s.top().dir++;
		
		switch(pd){
			
			case 0:
				if(px-1>=0 && maze[px-1][py]==0 && !visited[px-1][py]){
					point p(px-1,py);
					s.push(p);
					visited[px-1][py]=true;
				
				}
				break;
				
			case 1:
				if(px+1<N && maze[px+1][py]==0 && !visited[px+1][py]){
					point p(px+1,py);
					s.push(p);
					visited[px+1][py]=true;
				
				}
				
				break;
				
			case 2:
				if(py-1>=0 && maze[px][py-1]==0 && !visited[px][py-1]){
					point p(px,py-1);
					s.push(p);
					visited[px][py-1]=true;
				
				}
				
				break;
			case 3:
				if(py+1<N && maze[px][py+1]==0 && !visited[px][py+1]){
					point p(px,py+1);
					s.push(p);
					visited[px][py+1]=true;
			}
				break;
			
			default:
				s.pop();
				break;
		}
		
		
	}
	
	return false;
	
	
}

	
int main(){
	fstream fin;
	int maze[N][N];
	bool visited[N][N]={{0}};
	fin.open("maze_NoPath.txt",ios::in);
	if(!fin){
		cout << "file cannot be opened!" << endl;
		return 0;
	}else{
			for(int i=0; i<N; i++){
				for(int j=0; j<N; j++){
					fin>>maze[i][j];
				} 
			}
		}
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			switch(maze[i][j]) {
	            case 0 : cout << "  "; break;
	            case 1 : cout << "¢i"; break;
        	}
		}
		cout << endl;
	}
	
	point start(1,0);
	
	point finish(11,12);
	
	if(solve(maze,visited,start,finish)){
		
		cout<<"ok";
	}
	else{
		cout<<"no";
	}
	
	return 0;
}
