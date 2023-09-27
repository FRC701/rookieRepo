// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class firstSubsytem : public frc2::SubsystemBase {
 public:
  firstSubsytem(WPI_TalonFX& timmmysid, WPI_TalonFX& jimmysid);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
  double TimmyMotorSpin(double speed);
  double JimmyMoterSpin(double speed);
  double StartBothMotors(double speed);

 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonFX& timmyMotor;
  WPI_TalonFX& jimmyMoter;
};
