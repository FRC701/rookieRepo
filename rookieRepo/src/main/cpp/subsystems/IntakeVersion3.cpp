// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/IntakeVersion3.h"

IntakeVersion3::IntakeVersion3(WPI_TalonFX &ID1, WPI_TalonFX &ID2)
    : CreativeMotorName1(ID1),
      CreativeMotorName2(ID2)
{
}

// This method will be called once per scheduler run
void IntakeVersion3::Periodic() {}

// anything something another change
// anything something dlksjbals
// any change an edit another edit

double IntakeVersion3:: NameKhoa(double MotorSpeed)
{CreativeMotorName1.Set(MotorSpeed);}