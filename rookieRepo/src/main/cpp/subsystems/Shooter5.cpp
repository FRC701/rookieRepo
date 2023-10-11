// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter5.h"


Shooter5::Shooter5(WPI_TalonFX& ID1)
        : MotorShooter(ID1)
{
}
// This method will be called once per scheduler run
void Shooter5::Periodic() {}

double Shooter5::activateMotor(double MotorSpeed) 
{
    MotorShooter.Set(MotorSpeed);
    return MotorSpeed;
}

double Shooter5::returnFive()
{
    return 5;
}
double Shooter5::returnThree()
{
    return returnFive() - 2;
}
double Shooter5::combineAllReturns()
{
    return activateMotor(5.5) + returnFive() + returnThree();
}
double Shooter5::getMotorVelocity()
{
    return MotorShooter.GetSelectedSensorVelocity();
}
double Shooter5::getMotorTick()
{
    return MotorShooter.GetSelectedSensorPosition();
}