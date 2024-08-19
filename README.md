Create a simple C++ class Car that represents a car object. The class should have the following attributes:
- make (string) 
- model (string)
- year (int)
- mileage (double)
  
Requirements:
1. Define the class with private attributes and public getter and setter methods for each attribute. 
2. Implement a method displayInfo() that prints the car’s information in a user-friendly format.
3. Write a main function to create a few instances of the Car class, set their attributes, and display their information.
4. Extend the Car class from Task 1 to include different types of constructors.

Requirements:

5. Implement a default constructor that initializes the car’s attributes to default values (e.g., empty strings for make and model, 0 for year and mileage). 
6. Implement a parametrized constructor that takes arguments for make, model, year, and mileage and initializes the attributes accordingly.
7. Implement a copy constructor that creates a new Car object as a copy of an existing one.
8. Modify the main function to demonstrate the use of all three constructors.

Add behavior to the Car class to simulate the car’s functionality.
1. Implement a method drive(double distance) that increases the car’s mileage by the specified distance.
2. Implement a method service() that resets the car’s mileage to 0, simulating a complete service.
3. Modify the main function to demonstrate the car’s behavior by creating a car object, driving it for a certain distance, servicing it, and displaying the updated information.
