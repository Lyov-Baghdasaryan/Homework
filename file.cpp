#include <iostream>
#include <string>

class Car{
private:
	std::string make;
	std::string model;
	int year;
	double mileage;
public:
	//Default constructot
	Car(){
		make = '\0';
		model = '\0';
		year = 0;
		mileage = 0;
	}
	//Parametric constructor
	Car(std::string make, std::string model, int year, double mileage){
		this->make = make;
		this->model = model;
		this->year = year;
		this->mileage = mileage;
	}
	//Copy constructor
	Car(const Car* other){
		make = (*other).make;
		model = (*other).model;
		year = (*other).year;
		mileage = (*other).mileage;
	}
	std::string getMake(){ return make; }
	void setMake(std::string make){ this->make = make; }
	
	std::string getModel(){ return model; }
	void setModel(std::string model){ this->model = model; }	

	int getYear(){ return year; }
	void setYear(int year){ this->year = year; }

	double getMileage(){ return mileage; }
	void setMileage(double mileage){ this->mileage = mileage; }

	void displayInfo(){
		std::cout << "\tMake from : " << make << std::endl;
		std::cout << "\tModel is : " << model << std::endl;
		std::cout << "\tYear : " << year << std::endl;
		std::cout << "\tMileage : " << mileage << std::endl; 
	}
	
	//Methods
	void drive(double distance){
		mileage += distance;
	}
	void service(){
		mileage = 0;
	}

};

int main()
{	
	Car car1;
	std::cout << "Default constructor" << std::endl;
	car1.displayInfo();

	Car car2("Japan", "Toyota", 2020, 43.001);
	std::cout << "Initialize with parametric constructor" << std::endl;
	car2.displayInfo();
	
	Car car3(car2);
	std::cout << "Initialize with copy constructor" << std::endl;
	car3.displayInfo();
	
	std::cout << "Here worked setter" << std::endl;
	car1.setMake("Russia");
	car1.setModel("Marusia");
	car1.displayInfo();
	
	std::cout << "Toyota after drive 150 Mil" << std::endl;
	car2.drive(150);
	car2.displayInfo();
	
	std::cout << "Toyota after service" << std::endl;
	car2.service();
	car2.displayInfo();

	return 0;
}
