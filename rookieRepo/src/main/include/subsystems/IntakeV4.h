// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class IntakeV4 : public frc2::SubsystemBase {
 public:
  IntakeV4(WPI_TalonFX& ID1, WPI_TalonFX& ID2);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;


  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
double motorSpeed2(double MotorSpeed);
double motorRun(double MotorSpeed);
double motorSpeed(double MotorSpeed);
  private:
  WPI_TalonFX& MotorOne;
  WPI_TalonFX& MotorTwo;
};

