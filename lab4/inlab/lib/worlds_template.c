/**************************************************************************
 * FILE NAME:  worlds.c
 *
 * EECS461 at the University of Michigan
 * Virtual Worlds library - Template
 *
 * Created Sept 2003 David Thorsley
 *
 * Revision History:
 *  7-27-06 lovelljc
 *
 * Revised and adapted to use at IMRT ETH Zurich
 * 151-0593-00 Embedded Control Systems (ECS)
 *
 * Revision History:
 *  2008-09-04      Marianne Schmid
 *  2011-02-10      Thomas Schneider
 *  2012-08-15      Patrick M�ller
 **************************************************************************/

#include <worlds.h>
#include <mpc5553.h>

float virtualSpring(float angle) {
    /* Compute the torque for the virtual spring based
     on the current angle (lab 4) */
    float torque;
    /*fill in here*/
    return torque;
}


float virtualWall(float angle) {
    /* Compute the torque for the virtual wall based
     on the current angle (lab 4)  */
    float torque;
    /*fill in here*/
    return torque;
}


float virtualSpringDamper(float angle, float velocity) {
    /* Compute the torque for the virtual spring-damper based
     on the current angle and velocity (lab 6)*/
    float torque = 0;
    /*fill in here*/
    return torque;
}


float virtualWallDamper(float angle, float velocity) {
    /* Compute the torque for the virtual wall-damper based
    on the current angle and velocity (lab 6)*/
    float torque = 0;
    /*fill in here*/
    return torque;
}

float virtualSpringMass(float angle) {
    /* Compute the torque for the virtual spring-mass system based
     on the current angle (lab 6)
     Use TIMESTEP as defined in worlds.h*/
    float torque = 0;
    /*fill in here*/
    return torque;
}


float virtualSpringMassDamper(float angle, float velocity) {
    /* Compute the torque for the virtual spring-mass-damper system
     based on the current angle and velocity (lab 6)
     Use TIMESTEP as defined in worlds.h*/
    /*fill in here*/
    float torque=0;
    return torque;
}

float virtualSpringMassDamperEx(float angle, float velocity, float K, float M) {
    /* Compute the torque for the virtual spring-mass-damper system
     based on the current angle and velocity (lab 6), adjust spring constant K and mass M
     Use TIMESTEP as defined in worlds.h*/
    float torque=0;
    /*fill in here*/
    return torque;
}

float virtualKnob(float angle, float velocity){
    /* Compute the torque for the virtual knob system
     based on the current angle and velocity (lab 6)
     Use TIMESTEP as defined in worlds.h
    */
    float torque = 0;
    return torque;
}



// EOF
