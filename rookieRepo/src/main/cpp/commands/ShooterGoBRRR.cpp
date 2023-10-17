// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ShooterGoBRRR.h"

ShooterGoBRRR::ShooterGoBRRR(Shooter6& shooter)
:mShooter6(shooter)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void ShooterGoBRRR::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void ShooterGoBRRR::Execute() {
  mShooter6.ActivateShooterLeft(5);
}

// Called once the command ends or is interrupted.
void ShooterGoBRRR::End(bool interrupted) {
  mShooter6.ActivateShooterLeft(0);
}

// Returns true when the command should end.
bool ShooterGoBRRR::IsFinished() {
  return false;
}
