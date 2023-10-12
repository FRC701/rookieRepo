// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter6.h"

Shooter6::Shooter6(WPI_TalonFX& ID1)
        : ShooterLeft(ID1)
{
}
// This method will be called once per scheduler run
void Shooter6::Periodic() {}

double Shooter6::ActivateShooterLeft(double MotorSpeed)
{
    ShooterLeft.Set(MotorSpeed);
    return MotorSpeed;
}
double Shooter6::GetVelocity()
{
    return ShooterLeft.GetSelectedSensorVelocity();
}
double Shooter6::ShooterLeftTick()
{
    return ShooterLeft.GetSelectedSensorPosition();
}
//i need to figure out what it is i need to do fabricate a lie and relay it back to you in my head its only letters make it make sense to make it better

