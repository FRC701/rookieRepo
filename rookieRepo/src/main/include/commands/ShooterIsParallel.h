// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/ParallelCommandGroup.h>
#include "commands/ShooterGoBRRR.h"
#include "commands/VelocityGet.h"

class ShooterIsParallel
    : public frc2::CommandHelper<frc2::ParallelCommandGroup,
                                 ShooterIsParallel> {
 public:
  ShooterIsParallel(Shooter6& mShooter6);
};
