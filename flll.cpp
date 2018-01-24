#include<iostream>
using namespace std;
class student 
{
	private:
	char name[10];
	float cgpa;
	int regno;
		
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
			class student s[3];
			int i,temp;
			for(i=0;i<3;i++){
			
	     s[i].gets();
	} 
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
		if(s[j].ret())>s[j+1].ret()){
			temp=s[j+1].ret;
			s[j+1].ret()=s[j].ret();
			s[j].ret()=temp;
				
			}
		}
	}
	
		
		
		 for(i=0;i<3;i++){
		}
		 }
		 
		 return 0;		
		
}
