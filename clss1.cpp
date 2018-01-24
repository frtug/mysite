#include<iostream>
using namespace std;
class student 
{
	private:
	char name[10];
	float cgpa;
	long double regno;
		
		public:
		void gets(){
			cin>>name>>cgpa>>regno;
		}
		void puts(){
			cout<<"name="<<name<<endl<<"cgpa="<<cgpa<<endl<<"regno="<<regno;
		}
		
		int ret(){
			return regno;
		}
	};
		int main(){
			class student r1[3];
			int i,r,p=-1,n;
			for(i=0;i<3;i++){
			
	     r1[i].gets();
	}
	 
	
			cout<<"\nenter the rollno you want to search";
			cin>>r;
		
		 for(i=0;i<3;i++){
		 	if(r==r1[i].ret()){
		 		r1[i].puts();
		 		p++;
			 }
			 
			 }
		//	 for(i=0;i<3;i++){
			 
		
		
		
		 
		 if(p==-1){
		 	cout<<"database is not found";
		 }
		/* cout<<"if u want to exit press 1"<<endl<<"pres 2 to start again";
		 cin>>n;
		 if(n==2){
		 	main();
		 }
		 else{*/
		 	return 0;
		 //}
		 
			
		 	
		
}
