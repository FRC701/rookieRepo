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
double firstSubsytem::TimmyMotorSpin(double speed){
    timmyMotor.Set(speed);
    return speed;
}
double firstSubsytem::JimmyMoterSpin(double speed){
    jimmyMoter.Set(speed);
    return speed;
}
double firstSubsytem::StartBothMotors(double speed){
    jimmyMoter.Set(speed);
    timmyMotor.Set(speed);
    return speed;
}