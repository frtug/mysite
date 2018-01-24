#include<iostream>
using namespace std;
class car
{
public://	private:
	char name[10];
	char color[10];
	char company[10];
	char mile[10];
	char torque[10];
	
	public:
	
		void gets()
		{
			cout<<"name"<<endl<<"color"<<endl<<"company"<<endl<<"mile"<<endl<<"torque"<<endl;
			cin>>name>>color>>company>>mile>>torque;
		}
		void puts()
		{
			cout<<"Name="<<name<<"color="<<color<<"Company="<<company<<"Mile="<<mile<<"torque="<<torque;
		}
	};
	int main()
	{
		class car c[3];
		int i;
		//cout<<"ARE YOU LOOKING FOR A CAR YOUR DETAILS";
		for(i=0;i<3;i++){
		
		
		c[i].gets();
		c[i].puts();
	}
		return 0;
	}
