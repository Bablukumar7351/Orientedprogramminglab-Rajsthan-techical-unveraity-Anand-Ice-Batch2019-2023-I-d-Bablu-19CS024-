//task no 4
#include<iostream>
using namespace std;
class car2;
class car1{
	private:
		int petrol,distance;
		friend class car2;
		public:
		void setdata(int p1,int d1){
			p1=petrol;
			d1=distance;
		}
		car1(int p1,int d1)
		{
			cout<<"chlo petrol ki value do p1:"<<endl;
			cin>>p1;
			cout<<"chlo distance ki value do d1:"<<endl;
			cin>>d1;
		} 
};
class car2{
	private:
		int petrol,distance;
		public:
		void setdata(int p2,int d2){
			p2=petrol;
			d2=distance;
		}
		car2(int p2,int d2)
		{
			cout<<"chlo petrol ki value do"<<endl;
			cin>>p2;
			cout<<"chlo distance ki value do"<<endl;
			cin>>d2;
		}
		int add(){
			car1 obj1;
			return obj1+obj2;
		}
};
int sum(car1 obj1,car2 obj2)         //friend function
{
	cout<<"total petrol consumed by audi & bmw is"<<"obj1.p1+obj2.p2"<<endl;
	cout<<"total distance consumed by audi & bmw is"<<"obj1.d1+obj2.d2"<<endl;
}
int main()
{
	car1 audi;
	car2 bmw;
	audi.setdata();
	bmw.setdata();
	sum(audi,bmw);
	return 0;
}
