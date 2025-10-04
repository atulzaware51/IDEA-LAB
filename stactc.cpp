#include<iostream>
using namespace std;
class counter{
	public:
		static int count;
		counter(){
			count ++;
			cout<<"count is" << count <<endl;
		}
		static void showcount (){
			cout<<"static method count:"<<count<<endl;
		}
		
};
	int counter::count=0;
		int main(){
			counter C1;
			counter C2;
			counter::showcount();
			return 0 ;
		}
