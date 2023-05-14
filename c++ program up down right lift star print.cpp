#include<iostream>
using namespace std;
class demo
{
	public:
		void up()
		{
			cout<<"          "<<"^"<<" "<<endl;
			cout<<"          "<<"^"<<" "<<endl;
			cout<<"          "<<"^"<<" "<<endl;
			cout<<"          "<<"^"<<" "<<endl;
			cout<<"          "<<"^"<<" "<<endl;
			
		}
		void down()
		{
			cout<<"  "<<endl;
			cout<<"  "<<endl;
			cout<<"  "<<endl;
			cout<<"  "<<endl;
			cout<<"  "<<endl;
	     cout<<"    "<<"*"<<" "<<endl;
		 cout<<"    "<<"*"<<" "<<endl;
		 cout<<"    "<<"*"<<" "<<endl;
		 cout<<"    "<<"*"<<" "<<endl;
		 cout<<"    "<<"*"<<" "<<endl;
				
		 
		 }
		 void lift()
		 {
		 
		 cout<<"<"<<"        "<<endl;
		 cout<<"<"<<"        "<<endl;
		 cout<<"<"<<"        "<<endl;
		 cout<<"<"<<"        "<<endl;
		 cout<<"<"<<"        "<<endl;
	}
		 void right()
		 {
		 cout<<"  "<<">"<<endl;
		 cout<<"  "<<">"<<endl;
		 cout<<"  "<<">"<<endl;
		 cout<<"  "<<">"<<endl;
		 cout<<"  "<<">"<<endl;
		 }
		
};
int main(){
	demo ob;
	int ch;
	
	do
	{
		cout<<"1-Up 2-Down 3-Right 4-left"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			ob.up();
			break;
			case 2:
			ob.down();
			break;
			case 3:
			ob.lift();
			break;
			case 4:
			ob.right();
			break;
			
		}
	}
	while(ch<=4);
	
}
