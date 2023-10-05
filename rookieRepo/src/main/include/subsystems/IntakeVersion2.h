// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class IntakeVersion2 : public frc2::SubsystemBase {
 public:
  IntakeVersion2(WPI_TalonFX& ID1, WPI_TalonFX& ID2);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
  double SETspeed(double Motorspeed);
  double SETspin(double Motorspin);
  double SETspinSpeed(double Spinspeed);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonFX& IntakeM1;
  WPI_TalonFX& IntakeM2;
};
