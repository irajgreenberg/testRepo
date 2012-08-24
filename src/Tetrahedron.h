//
//  Tetrahedron.h
//  tut03_Tetrahedron
//
//  Created by Ira Greenberg on 4/29/12.
//  Copyright 2012 SMU. All rights reserved.
//

#ifndef tut03_Tetrahedron_Tetrahedron_h
#define tut03_Tetrahedron_Tetrahedron_h

#include "ofMain.h"
#include "surf3D.h"

class Tetrahedron {
    
private:
    ofVec3f loc;
    ofVec3f dim; // overall size of Tetrahedron
       
    Surf3D surfs[4];

    void init();
    
public:
    
    // constructors
    
    Tetrahedron(ofVec3f loc = ofVec3f(0, 0, 0), ofVec3f dim = ofVec3f(1, 1, 1));
    
    void display();
    
};


#endif
