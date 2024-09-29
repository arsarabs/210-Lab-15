// COMSC -210 | Lab 15: Movie Class | Anthony R. Sarabia

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

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
	Movie(const string& movieTitle, int year, const string& screenWriter);
	 
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

//STEP 4: main()
int main() {
	vector <Movie> movies;

	if (!readMovies(movies, FILE_INPUT)) {
		cout << "Failed to load movies from file " << endl;
		return 1;
	}
	outputMovies(movies);
	return 0;
}

//STEP #2a: Function Definitions
//Movie() default constructor
Movie::Movie() : yearReleased(0) {}

//Now, let's create a Movie() parameterized constructor arguments: screen writer (string), year released (int), movie title (string)
//also, it doesn't return anything
Movie::Movie(const string& title, int year, const string& writer):
	movieTitle(title), yearReleased(year), screenWriter(writer) {}

//STEP #2b: Setter Definitions
//setScreenWriter() sets writer's name, returns nothing, arugment is writer (string)
void Movie::setScreenWriter(const string& writer) {
	this->screenWriter = writer; 
}
//setYearReleased() sets the year released, returns nothing, arugment is year (int)
void Movie:: setYearReleased(const int year) {
	this->yearReleased = year;
}
//setMovieTitle() sets movie title's name, returns nothing, arugment is title (string)
void Movie:: setMovieTitle(const string& movieTitle) {
	this->movieTitle = movieTitle;
}

//STEP #2c: Getter Definitions
//getScreenWriter() returns screen writer name, has no arguments
string Movie::getScreenWriter() const {
	return screenWriter;
}
//getYearReleased() returns year released, has no arguments
int Movie::getYearReleased() const {
	return yearReleased;
}
//getMovieTitle() returns movie title, has no arguments
string Movie::getMovieTitle() const {
	return movieTitle;
}
//STEP #2d: Print() outputs the detials of said movie, 
//and it doesnt have any arguments nor does it return anything
void Movie::print() const {
	cout << "Movie: " << movieTitle << endl;
	cout << "Year released: " << yearReleased << endl;
	cout << "Screenwriter: " << screenWriter << endl;
}

//STEP #3b: Function Definitions for reading from file and outputting 
bool readMovies(vector<Movie>& movies, const string& filename) {
	ifstream inputFile(filename);

	if (!inputFile) {
		cout << "ERROR! Can't open file " << filename << endl;
		return false;
	}
	string writer, title;
	int year;

	//need to create a while loop that will read and populate the movie objects
	while (getline(inputFile, title) && (inputFile >> year), (inputFile.ignore()) && getline(inputFile, writer)) {
		Movie tempMovie(title, year, writer);
		movies.push_back(tempMovie);
	}
	inputFile.close();
	return true;
};
void outputMovies(const vector <Movie>& movies) {
	cout << "Movies List: " << endl;
	for (const auto& movie : movies) {
		movie.print();
	}
};