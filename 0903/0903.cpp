#include <iostream> 
#include <windows.h>
#include <string>
using namespace std;
/*Три ситуации с агрегированнием:
Музыкант - музыкульный инструмент
Таврия(магазин) - продукт
Кафе - посетитель(заказчик)

*/
class MobilePhone
{
public:
	MobilePhone(std::string model, std::string number) : model_(model), number_(number) {}

	std::string getModel() const {
		return model_;
	}

	std::string getNumber() const {
		return number_;
	}

private:
	string model_;
	string number_;
};

class Person
{
public:
	Person(std::string name, int age) : names(name), age1(age) {}
	MobilePhone* phone = nullptr;

	void Buy(MobilePhone* p)
	{
		phone = p;
	}

	void Sell()
	{
		phone = nullptr;
	}
	string getName() const {
		return names;
	}

	int getAge() const {
		return age1;
	}



	void vvdMobilePhone(MobilePhone* Phone) {
		mobilePhone = Phone;
	}

	MobilePhone* getMobilePhone() const {
		return mobilePhone;
	}

private:
	std::string names;
	int age1;
	MobilePhone* mobilePhone;

};

int main()
{
	setlocale(0, "");

	MobilePhone* phone = new MobilePhone("Самсунг", "+032568781");
	Person* person = new Person("Человек имя", 17);
	person->vvdMobilePhone(phone);

	cout << "Name: " << person->getName() << "/t";
	cout << "Age: " << person->getAge() << "/n";
	cout << " phone model: " << person->getMobilePhone()->getModel() << "/n";
	cout << " phone number: " << person->getMobilePhone()->getNumber() << "/n";

	delete phone;
	delete person;
}