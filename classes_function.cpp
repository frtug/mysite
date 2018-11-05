#include<iostream>
using namespace std;
class ab
{
	private:
		int rollno;
		float cgpa;
		char name[20];
		static char section[6];
		
		public:
			void getdata();
			
			void showdata();		
};
void ab::showdata(){
		cout<<"rollno"<<"cgpa"<<"name";
				cin>>rollno>>cgpa>>name;
				
}
void ab::getdata(){
cout <<"rollno="<<rollno<<"cgpa="<<cgpa<<"name="<<name<<"section="<<section;
}
char ab::section[6]="K17EG";
int main(){
	ab a1,a2;
	int x=sizeof(a1);
	cout<<x;
	a1.showdata();
	a2.getdata();
}
