// COMSC -210 | Lab 15: Movie Class | Anthony R. Sarabia

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

//ASSIGNMENT INSTUCTIONS
//Code a Movie class that has the screen writer, the year released, and the title as its private member variables.
//It has the standard setters and getters for each private member variable.Also code a print() method which prints the object data in a simple format.
//Your code should read data from an input file, using the data below, which lists data in this order : title, year released, screen writer name.
//Read this data into a temporary Movie object.Then append that object to your container.
//For your container, you can choose an <array> class array or a <vector> class vector.
//Store your four records in this container. Towards the end of your main() function, output the contents of the array / vector.

//STEP #1: Coding a Movie class that has screen writer, the year released, and the title as its private member variables
class Movie {

//Private variables	
private:
	string screenWriter;
	int yearReleased;
	string movieTitle;

public:
	//Construtor
	Movie();
	Movie(const string& screenWriter, int year, const string& movieTitle);
	 
	//SETTERS
	void setScreenWriter(const string& screenWriter);
	void setYearReleased(const int year);
	void setMovieTitle(const string& movieTitle);

	//GETTERS
	string getScreenWriter() const;
	int getYearReleased() const;
	string getMovieTitle() const;

	//Print() - main purpose is to print
	void print() const;
};

//STEP #2: Function Definitions
//Movie() default constructor
Movie::Movie() : yearReleased(0) {}

//Now, let's create a Movie() parameterized constructor arguments: screen writer (string), year released (int), movie title (string)
//also, it doesn't return anything
Movie::Movie(const string& writer, int year, const string& title): 
	screenWriter(writer), yearReleased(year), movieTitle(title) {}

//We're getting into the setters now

//setScreenWriter() sets writer's name, returns nothing, arugment is writer (string)
void setScreenWriter(const string& writer) {
	this->screenWriter = writer; 
}