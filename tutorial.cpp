#include<iostream>
#include<string>
using namespace std;

class teacher{
	
	//encapsulation is wrapping up of data and member functions in a single unit i.e class (data hiding using private)
	
	private:
		int salary; // data hiding
    public:
	//properties or attribute
	string name;
	string dept;
	
	//methods or member function
	void changedept(string newdept)
	{
		dept=newdept;
	}
	
	//setter 
	void setsalary(int newsalary){
		salary=newsalary;
	}
	//getter
	int getsalary(){
		return salary;
	}
	
};

int main()
{
	teacher t1;
	teacher t2;
	t1.name="isha";
	t1.dept="cse";
	t1.setsalary(500000);
	cout<<t1.getsalary()<<endl;
	return 0;
	
}
