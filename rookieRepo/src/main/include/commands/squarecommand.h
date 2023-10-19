// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandHelper.h>
#include <frc2/command/ParallelCommandGroup.h>
#include "commands/newrookieCommand.h"
#include "commands/rookiecommand.h"

class squarecommand

    : public frc2::CommandHelper<frc2::ParallelCommandGroup,
                                 squarecommand> {
 public:
  squarecommand(Shooter6& shooter6);
};
 
