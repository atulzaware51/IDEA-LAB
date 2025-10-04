#include<iostream>
using namespace std;
class shape{
	public:
		virtual void draw ()=0;
		void info(){
			cout<<" Drawing a circle"<<endl;
		}
};
class circle: public shape{
	public:
		void draw ()override{
			cout<<"Drawing a circle"<<endl;
		
		}
};
int main(){
	shape*s;
	circle c;
	s=&c;
	s->draw();
	s->info();
	return 0;
}
