#include<iostream>
#include<string.h>

using namespace std;

class Laptop{
	private:
	string name;
	float price;
	public:
		 Laptop(){
			name="apple";
			price=1.90;
		}
		void show()
		{
			cout<<"name:"<<name<<endl;
			cout<<"price:"<<price<<endl;
		}

};
int main()
{
	Laptop obj1;
	obj1.show();
		return 0;
	
}
