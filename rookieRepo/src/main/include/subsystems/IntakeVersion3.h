// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class IntakeVersion3 : public frc2::SubsystemBase {
 public:
  IntakeVersion3(WPI_TalonFX& ID1 , WPI_TalonFX& ID2);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
double NameKhoa(double MotorSpeed);
double NameKyle(double MotorSpeed);
double NameJesse(double MotorSpeed);
 private:
 WPI_TalonFX& CreativeMotorName1;
 WPI_TalonFX& CreativeMotorName2;
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
};
