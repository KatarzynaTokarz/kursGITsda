#include<iostream>

//4.3.Zaimplementuj klasê samochód(Car), która bêdzie mia³a klasê
//wewnêtrzn¹ obs³uguj¹c¹ silnik(Engine) :
//	• silnik ma pojemnoœæ i typ(Diesel, Petrol)
//	• w silniku mo¿na wymieniæ olej
//	• samochód przechodzi coroczny serwis
//class Person {
//	class Address {
//	public:
//		string street;
//		int houseNo;
//	};
//	Address address;
//public: Person(string street, int houseNo) {
//	address.street = street;
//	address.houseNo = houseNo;
//}
//};

enum EngineType { Diesel, Petrol };

class Car 
{
	class Engine
	{
		int size;
		EngineType engineType;

	public:
		void oilChange();
	};
	Engine engine;
public:
	void annualService();
	void oilChange() {
		engine.oilChange();
	}
};



