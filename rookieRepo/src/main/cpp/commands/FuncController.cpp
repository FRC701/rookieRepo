// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/FuncController.h"

FuncController::FuncController(Shooter1& shooter1)
:mShooter1(shooter1)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
//What happens first
void FuncController::Initialize() {}

// Called repeatedly when this Command is scheduled to run
//exec repeated forever
void FuncController::Execute() {
mShooter1.SpinShooter(1);
}

// Called once the command ends or is interrupted.
// condition which causes the end
void FuncController::End(bool interrupted) {}

// Returns true when the command should end.
// when command ends meaning something returns false
bool FuncController::IsFinished() {
  return false;
}
