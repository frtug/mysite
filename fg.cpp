#include<iostream>
using namespace std;
class bank{
	private:
		char name[10];
		char nbank[10];
		 double ac;
		float bal;
		public:
			void get(){
				cin>>name>>nbank>>ac>>bal;
				
			}
			void display(){
				cout<<name<<endl<<nbank<<endl<<ac
				<<endl<<bal;
			}
			void see(){
				return bal;
			}
}w[3];
int main(){
	int i;
	float r;
	for(i=0;i<3;i++){
	
 w[i].get();
 }
 cout<<"enter the number you want to search";
 cin>>r;
 for(i=0;i<3;i++){

 if(r==w[i].see()){
 	 	w[i].display();
 }
}
 return 0;	

}
