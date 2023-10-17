// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ActivateShooter.h"

ActivateShooter::ActivateShooter(Shooter5& shooter5) 
:mShooter5(shooter5)
{
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ActivateShooter::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ActivateShooter::Execute() {
  mShooter5.activateMotor(1500);
}

// Called once the command ends or is interrupted.
void ActivateShooter::End(bool interrupted) {
  mShooter5.activateMotor(0);
}

// Returns true when the command should end.
bool ActivateShooter::IsFinished() {
  return false;
}

