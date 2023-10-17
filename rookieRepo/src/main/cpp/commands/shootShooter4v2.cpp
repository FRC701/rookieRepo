// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/shootShooter4v2.h"

shootShooter4v2::shootShooter4v2(Shooter4& shoot2)
: mShoot2(shoot2)
{
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void shootShooter4v2::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void shootShooter4v2::Execute() {
  mShoot2.motorSpeed(0.5);
}

// Called once the command ends or is interrupted.
void shootShooter4v2::End(bool interrupted) {}

// Returns true when the command should end.
bool shootShooter4v2::IsFinished() {
  return false;
}
