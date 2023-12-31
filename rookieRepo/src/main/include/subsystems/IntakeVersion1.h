// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <ctre/Phoenix.h>

class IntakeVersion1 : public frc2::SubsystemBase {
 public:
  IntakeVersion1(WPI_TalonFX& ID1 , WPI_TalonFX& ID2);

  /**
   * Will be called periodically whenever the CommandScheduler runs.
   */
  void Periodic() override;
double rushe(double Motorspeed);
double setting(double spin);
double setrushe(double floaat);
 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  WPI_TalonFX& thename; 
  WPI_TalonFX& thename1;
};
