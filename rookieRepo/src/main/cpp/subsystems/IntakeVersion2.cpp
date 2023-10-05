// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/IntakeVersion2.h"

IntakeVersion2::IntakeVersion2(WPI_TalonFX& ID1, WPI_TalonFX& ID2)
    : IntakeM1(ID1)
    ,IntakeM2(ID2)
{
}

// This method will be called once per scheduler run
void IntakeVersion2::Periodic() {}
// comment here again, again
// comment here again grrrrr its gone
// branching off the branch woahhhh
// branching off the branch part 2
// part 3 omg
double IntakeVersion2::SETspeed(double Motorspeed)
{
    IntakeM1.Set(Motorspeed);
    return Motorspeed;
}
double IntakeVersion2::SETspin(double Motorspin)
{
    IntakeM2.Set(Motorspin);
    return Motorspin;
}