#include <MaxEngine.h>

class MaxPlatformer : public MaxEngine::Application {

public: 
	MaxPlatformer() {

	}

	~MaxPlatformer() {

	
	
	}

};

/*
	This function, defined as an extern in the engine, is resolved and called 
	upon the loading of the engine into memory. It's for this reason we don't need a 
	int main() function in the game itself, as this is declared by the engine library.
	Due to the method signature of this functionality, it also means that the WINMAIN function
	is technically contained within MaxEngine.dll
*/
MaxEngine::Application* MaxEngine::createApplication() {
	return new MaxPlatformer();
} 