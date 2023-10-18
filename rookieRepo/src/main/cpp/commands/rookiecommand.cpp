// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/rookiecommand.h"

rookiecommand::rookiecommand(Shooter6& shooter6)
:mShooter6(shooter6)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void rookiecommand::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void rookiecommand::Execute() {
  mShooter6.activateMotor(0.5);
}

// Called once the command ends or is interrupted.
void rookiecommand::End(bool interrupted) {}

// Returns true when the command should end.
bool rookiecommand::IsFinished() {
  return false;
}
