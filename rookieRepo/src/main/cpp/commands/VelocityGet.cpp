// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/VelocityGet.h"

VelocityGet::VelocityGet(Shooter6& shooter)
:mShooter6(shooter)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void VelocityGet::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void VelocityGet::Execute() {}

// Called once the command ends or is interrupted.
void VelocityGet::End(bool interrupted) {}

// Returns true when the command should end.
bool VelocityGet::IsFinished() {
  return false;
}
