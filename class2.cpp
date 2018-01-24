#include<iostream>
#include<string.h>

using namespace std;

class bank{
	private:
		char name[10];
		char branch[10];
		long double ac;
 public:
 	void get(){
 		cin>>name>>branch>>ac;
	 }
	 void dis(){
	 	cout<<"name="<<name<<endl<<"branch="<<branch<<endl<<"account number="<<ac;
	 }
	 char* ret(){
	 	return name;
	 }
	 
}s[3];
int main(){
	int i;
	char n[10];
	for(i=0;i<3;i++){
		s[i].get();
	}
	for(i=0;i<3;i++){
		s[i].dis();
	}
	cout<<"enter the name you want to insert";
	cin>>n;
	for(i=0;i<3;i++){
		if(strcmp(n,s[i].ret())==0){
			s[i].dis();
		}
	}
return 0;
	
}
