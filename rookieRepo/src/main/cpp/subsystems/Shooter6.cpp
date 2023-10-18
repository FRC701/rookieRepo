// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter6.h"

Shooter6::Shooter6(WPI_TalonFX& IDLeft)
        : ShooterLeft(IDLeft)
{
}
// This method will be called once per scheduler run
void Shooter6::Periodic() {}

double Shooter6::activateMotor(double MotorSpeed)
{
    ShooterLeft.Set(MotorSpeed);
    return MotorSpeed;
}