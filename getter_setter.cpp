#include<iostream>
using namespace std;
class student{
	private:
		string name;
		long long int roll;
	public:
		void setName(string s){
			name = s;
		}	
		void setRoll(long long int r){
			roll = r;
		}
		string getName(){
			return name;
		}
		long long int getRoll(){
			return roll;
		}
};

main(){
	student s;
	s.setName("Bhuwan Tekriwal");
	s.setRoll(19001011017);
	cout<<"Name = "<<s.getName()<<endl;
	cout<<"Roll no. = "<<s.getRoll();
}
