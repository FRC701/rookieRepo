// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ShootShooter3.h"

ShootShooter3::ShootShooter3(Shooter3& something)
: Something(something)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ShootShooter3::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ShootShooter3::Execute() 
{
  Something.SchoolShooter(1);
}

// Called once the command ends or is interrupted.
void ShootShooter3::End(bool interrupted) {}

// Returns true when the command should end.
bool ShootShooter3::IsFinished() {
  return false;
}
