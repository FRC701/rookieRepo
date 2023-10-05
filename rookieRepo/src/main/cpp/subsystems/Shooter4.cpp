// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter4.h"

Shooter4::Shooter4(WPI_TalonFX& ID1)
        : Motor(ID1)
{
}
// This method will be called once per scheduler run
void Shooter4::Periodic() {}


double Shooter4:: motorSpeed(double MotorSpeed)
{
    Motor.Set(MotorSpeed);
    return MotorSpeed;
}

x