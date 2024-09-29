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

//Define constant
const string FILE_INPUT = "input.txt";

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

//STEP #3a: Function Prototypes for reading from file and outputting 
bool readMovies(vector<Movie>& movies, const string& filename);
void outputMovies(const vector <Movie>& movies);

//STEP #2a: Function Definitions
//Movie() default constructor
Movie::Movie() : yearReleased(0) {}

//Now, let's create a Movie() parameterized constructor arguments: screen writer (string), year released (int), movie title (string)
//also, it doesn't return anything
Movie::Movie(const string& writer, int year, const string& title): 
	screenWriter(writer), yearReleased(year), movieTitle(title) {}

//STEP #2b: Setter Definitions
//setScreenWriter() sets writer's name, returns nothing, arugment is writer (string)
void setScreenWriter(const string& writer) {
	this->screenWriter = writer; 
}
//setYearReleased() sets the year released, returns nothing, arugment is year (int)
void setYearReleased(const int year) {
	this->yearReleased = year;
}
//setMovieTitle() sets movie title's name, returns nothing, arugment is title (string)
void setMovieTitle(const string& movieTitle) {
	this->movieTitle = movieTitle;
}

//STEP #2c: Getter Definitions
//getScreenWriter() returns screen writer name, has no arguments
string Movie::getScreenWriter() const {
	return;
}
//getYearReleased() returns year released, has no arguments
int Movie::getYearReleased() const {
	return;
}
//getMovieTitle() returns movie title, has no arguments
string Movie::getMovieTitle() const {
	return;
}
//STEP #2d: Print() outputs the detials of said movie, 
//and it doesnt have any arguments nor does it return anything
void Movie::print() const {
	cout << "Screenwriter: " << screenWriter << endl;
	cout << "Year released: " << yearReleased << endl;
	cout << "Movie: " << movieTitle << endl;
}

//STEP #3b: Function Definitions for reading from file and outputting 
bool readMovies(vector<Movie>& movies, const string& filename) {
	ifstream inputFile(filename);

	if (!inputFile) {
		cout << "ERROR! Can't open file " << filename << endl;
		return false;
	}
	string writer, title;
	int year
};
void outputMovies(const vector <Movie>& movies) {
	 
};