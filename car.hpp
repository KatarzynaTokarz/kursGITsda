#include<iostream>

//4.3.Zaimplementuj klas? samoch?d(Car), kt?ra b?dzie mia?a klas?
//wewn?trzn? obs?uguj?c? silnik(Engine) :
//	? silnik ma pojemno?? i typ(Diesel, Petrol)
//	? w silniku mo?na wymieni? olej
//	? samoch?d przechodzi coroczny serwis
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

enum class EngineType { Diesel, Petrol };

class Car 
{
	class Engine
	{
		int size;
		EngineType engineType;

	public:
		void oilChange();
		void setEngineType(EngineType engineType);
	};
	Engine engine;//pole w klasie Car

public:
	Car(EngineType engineType);
	void annualService();
	void oilChange();
};



