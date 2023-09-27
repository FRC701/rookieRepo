// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/IntakeV4.h"

IntakeV4::IntakeV4(WPI_TalonFX& ID1, WPI_TalonFX& ID2)
        : LosMotores(ID1),
          LasMotores(ID2)
{
}
// This method will be called once per scheduler run
void IntakeV4::Periodic() {}
 //kaerjgka
/*how to commentafawef awef awega weg awgawe gaweg` */

//we will win comp this year 
//we wont
//jesssdoj fiehrseidgtsjarwfejsgveodfiotdv
//mwah

double IntakeV4:: motorSpeed(double MotorSpeed)
{
    LosMotores.Set(MotorSpeed);
    return MotorSpeed;
}