// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class Shooter4 : public frc2::SubsystemBase {
 public:
  Shooter4(WPI_TalonFX& ID1);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;

  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
double motorSpeed(double MotorSpeed);
double returnFive();
double returnThree();
  private:
  WPI_TalonFX& Motor;

};