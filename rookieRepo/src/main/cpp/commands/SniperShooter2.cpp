// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/SniperShooter2.h"

SniperShooter2::SniperShooter2(Shooter6& shooter2)
: Shooter2(shooter2)
 {
  // Use addRequirements() here to declare subsystem dependencies.
}

// Called when the command is initially scheduled.
void SniperShooter2::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void SniperShooter2::Execute() 
{
  Shooter2.ActivateShooterLeft(0.5);
}

// Called once the command ends or is interrupted.
void SniperShooter2::End(bool interrupted) {}

// Returns true when the command should end.
bool SniperShooter2::IsFinished() {
  return false;
}
