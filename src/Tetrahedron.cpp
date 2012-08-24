//
//  Tetrahedron.cpp
//  tut03_toroid
//
//  Created by Ira Greenberg on 4/29/12.
//  Copyright 2012 SMU. All rights reserved.
//

#include <iostream>
#include "Tetrahedron.h"


Tetrahedron::Tetrahedron(ofVec3f loc, ofVec3f dim):
loc(loc), dim(dim){
    init();
}

/*
 1  1  1   -1  1 -1    1 -1 -1
 -1  1 -1   -1 -1  1    1 -1 -1
 1  1  1    1 -1 -1   -1 -1  1
 1  1  1   -1 -1  1   -1  1 -1
 */
void Tetrahedron::init()
{
    surfs[0] = Surf3D( ofVec3f(10.5,  10.5,  10.5), ofVec3f(-10.5,  10.5, -10.5), ofVec3f(10.5, -10.5, -10.5) );
    surfs[1] = Surf3D( ofVec3f(-10.5,  10.5,  -10.5), ofVec3f(-10.5,  -10.5, 10.5), ofVec3f(10.5, -10.5, -10.5) );
    surfs[2] = Surf3D( ofVec3f(10.5,  10.5,  10.5), ofVec3f(10.5,  -10.5, -10.5), ofVec3f(-.5, -.5, .5) );
    surfs[3] = Surf3D( ofVec3f(10.5,  10.5,  10.5), ofVec3f(-10.5,  -10.5, 10.5), ofVec3f(-10.5, 10.5, -10.5) );
}


void Tetrahedron::display()
{
    ofPushMatrix();
   // ofScale(dim.x, dim.y, dim.z);
    for ( int i = 0; i<4; i++){
        surfs[i].display();
    }
    ofPopMatrix();
}
