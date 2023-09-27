// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/IntakeVersion1.h"

IntakeVersion1::IntakeVersion1(WPI_TalonFX &ID1, WPI_TalonFX &ID2)
    : thename(ID1), 
    thename1(ID2)
{
}

// This method will be called once per scheduler run
void IntakeVersion1::Periodic() {}
/* I wanna learn more about programmiingg
strawberries are the best!
Cats are cute :D*/

/* strawberries are the best!
dogs are cute too :D */
double IntakeVersion1::rushe(double Motorspeed) {
    thename.Set(Motorspeed);
    return Motorspeed;
}
double IntakeVersion1::setting(double spin){
    thename1.Set(spin);
    return spin;
}

double IntakeVersion1::setrushe(double floaat){
thename.Set(floaat);
thename1.Set(floaat);
return floaat;
}