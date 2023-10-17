// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/shootShooter4v3.h"

shootShooter4v3::shootShooter4v3(Shooter4& shoot3) 
: mShoot3(shoot3)
{
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void shootShooter4v3::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void shootShooter4v3::Execute() {
  mShoot3.motorSpeed(0.6);
}

// Called once the command ends or is interrupted.
void shootShooter4v3::End(bool interrupted) {}

// Returns true when the command should end.
bool shootShooter4v3::IsFinished() {
  return false;
}
