// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/IncreaseShooterVelocity.h"

IncreaseShooterVelocity::IncreaseShooterVelocity(Shooter5& shooter5) 
:mShooter5(shooter5)
{
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void IncreaseShooterVelocity::Initialize() {
  mShooter5.increaseSpeed(10);
}

// Called repeatedly when this Command is scheduled to run
void IncreaseShooterVelocity::Execute() {
  
}

// Called once the command ends or is interrupted.
void IncreaseShooterVelocity::End(bool interrupted) {}

// Returns true when the command should end.
bool IncreaseShooterVelocity::IsFinished() {
  return false;
}
