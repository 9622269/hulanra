#include <iostream>
using namespace std;
class Person;
class Eye{
	public:
		Eye(int eyesight){
			this->eyesight=eyesight;
		};
		friend class Person;
		~Eye(){
			cout<<"已瞎"<<endl;
		};
	private:
		double eyesight;
};
class Person{
public:
	Person(const char*name, double hei, double wei, int age0 ,double eyesight):height(hei),weight(wei),age(age0),eye(eyesight){
		pName=new char[strlen(name)+1];
		strcpy(pName,name);
	}

	~Person(){
		cout<<"deleting..."<<pName<<"\n"<<pName<<endl;
		delete[] pName;
	}
private:
	char*pName;
	double height;
	double weight;
	int age;
	Eye eye;
};
int main(){
	Person zh("zhang san",1.81,70,20,0.5);
	Person *pPerson=new Person("wang wu",1.76,70,30,0.7);
	Person li("li si",1.70,50,20,1.0);
	return 0;
};