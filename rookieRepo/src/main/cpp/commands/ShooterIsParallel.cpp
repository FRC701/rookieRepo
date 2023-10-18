// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/ShooterIsParallel.h"

// NOTE:  Consider using this command inline, rather than writing a subclass.
// For more information, see:
// https://docs.wpilib.org/en/stable/docs/software/commandbased/convenience-features.html
ShooterIsParallel::ShooterIsParallel(Shooter6 &mShooter6)
{
  // Add your commands here, e.g.
  AddCommands(ShooterGoBRRR(mShooter6),
   VelocityGet(mShooter6)
   );
  // AddCommands(FooCommand{}, BarCommand{});
  //never gonna give you up never gonna let you down never gonna a round and desert you
}
//i am a orange banana do do do