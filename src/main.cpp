#include "ofMain.h"
#include "SMUEngine.h"
#include "ofAppGlutWindow.h"

//========================================================================
int main( ){

    // declare ofAppGlutWindow window object
    ofAppGlutWindow window;
    
	/**
    /* setup the GL context 
    /* pass in args for initialization
    /* -----> window reference:
	/* -----> width and height:
    /* -----> OF_WINDOW or OF_FULLSCREEN:
    */
    ofSetupOpenGL(&window, 800, 600, OF_WINDOW);

	// start the program running
	ofRunApp( new SMUEngine() );

}
