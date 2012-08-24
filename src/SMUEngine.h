#pragma once
#include "ofMain.h"
#include "SMUPoly.h"
#include "Cylinder.h"
#include "Toroid.h"
#include "Tetrahedron.h"

// Need to inherit from ofBaseApp to have access to
// openFrameworks goodies
class SMUEngine : public ofBaseApp{
    
public:
    ~SMUEngine();
    // openFrameworks functions
    void setup();
    void update();
    void draw();
    
    ofLight lt;
    ofCamera cam;
    ofEasyCam eCam;
    
    Cylinder* cyl;
    Toroid* t;
    Tetrahedron* tet;
   // Cylinder* cyl2;
    //SMUPoly* poly;
    
    

};






















