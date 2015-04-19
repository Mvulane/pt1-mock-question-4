///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name:
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include <iostream>
using namespace std;

class Animal{
public:
	virtual void name(){};
	virtual void does(){};
private:
	

};

class Bird : public Animal{
public:
	void name(){
		cout << "Bird" << endl;
	}
	void does(){
		cout << "Sings" << endl;
	}
};

class Dog :public Animal{
	void name(){
		cout << "Dog" << endl;
	}
	void does(){
		cout << "Bunks" << endl;
	}

};

int main()
{
	Animal *animalptr1[2];

	Bird birdptr;
	Dog dogptr;

	animalptr1[0] = &birdptr;
	animalptr1[1] = &dogptr;

	for (int i = 0; i < 2; i++)
	{
		animalptr1[i]->name();
		cout << " ";
		animalptr1[i]->does();
		cout << endl;
	}
	
	system("pause");
	return 0;
}
