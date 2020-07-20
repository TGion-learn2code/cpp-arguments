// use module / library iostream
// for user created modules / libraries use *.h in the include
#include <iostream>

// Set scope on namespace of standard library std
// this way we can use e.g. cout instead of std::cout
// using namespace std;

/*
 main function; needed for every C++ program
 serves as entry point for our program

 int main: return value of the main() funtion is an integer; return 0 if everything went without errors
 (int argc, const char* argv[]):
 	 any params when calling main has to be in this exact form, although the names (argv, argc) may differ

 	 int argc: is the number of arguments which our program has been started; there is always at least
 	 	 one argument (the program name and path it is started from)
 	 const char* argv[]: point to char array (string) with the actual arguments
 	 	 WARNING: the first argument is at index 0, e.g. argv[0]

 */
int main(int argc, const char* argv[]) {

	std::cout << "***********************" << std::endl;
	std::cout << "**** C++ Arguments ****" << std::endl;
	std::cout << "***********************" << std::endl;
	std::cout << "" << std::endl;

	if (argc == 1) {
		std::cout << "Give me at least one argument!" << std::endl;
		std::cout << "Exciting with error code 1." << std::endl;
		return 1;
	}
	else {
		std::cout << "Number of total arguments given: " << (argc - 1) << std::endl;

		for (int i=1; i<argc; i++) {
			std::cout << "Argument #" << i << " : " << argv[i] << std::endl;
		}

	}
	return 0;
}
