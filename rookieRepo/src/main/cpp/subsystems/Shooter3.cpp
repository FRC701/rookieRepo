// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter3.h"

Shooter3::Shooter3(WPI_TalonFX& ID1)
:Momor(ID1)
{

}

// This method will be called once per scheduler run
void Shooter3::Periodic() {}

double Shooter3::SchoolShooter(double Speed)
{
Momor.Set(Speed);
return Speed;
}
double Shooter3::MallShooter()
{
    return 5;
}

double Shooter3::DriveByShooter()
{
    return MallShooter()-2;
}