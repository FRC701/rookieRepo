// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/firstSubsytem.h"

firstSubsytem::firstSubsytem(WPI_TalonFX& timmysid, WPI_TalonFX& jimmysid)
: timmyMotor(timmysid),
    jimmyMoter(jimmysid)
{

}

// This method will be called once per scheduler run
//hello
void firstSubsytem::Periodic() {}
//qubek
double firstSubsystem::StartMotorSpin(double speed){
    timmyMotor.
}