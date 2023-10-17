// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ActivateShooter2.h"

ActivateShooter2::ActivateShooter2(Shooter5& shooter5) 
:mShooter5(shooter5)
{
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ActivateShooter2::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ActivateShooter2::Execute() {
  mShooter5.activateMotor(2.6);
}

// Called once the command ends or is interrupted.
void ActivateShooter2::End(bool interrupted) {
  mShooter5.activateMotor(0);
}

// Returns true when the command should end.
bool ActivateShooter2::IsFinished() {
  return false;
}
