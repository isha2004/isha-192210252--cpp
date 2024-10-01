#include<iostream>
#include<string>
using namespace std;

class teacher{
	
	private:
		int salary; 
    public:
	string name;
	string dept;
	
	//constructor creation
	//non parameterised constructor
	//teacher(){
	//	dept="cse";
	};
	
	//parameterised constructor
	teacher(string n, string d,int s)
	{
		name=n;
		dept=d;
		salary=s;
	}
	
};

int main()
{
	teacher t1("isha","cse",50000);
	//constructor call


	cout<<t1.dept<<endl;
	
	return 0;
	
}
