
#include "ofMain.h"
#include "testApp.h"

int main() 
{
	ofSetupOpenGL(640, 480, OF_WINDOW );
	testApp APP;
	ofRunApp( &APP );
}
