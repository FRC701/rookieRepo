// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/Shooter1.h"

Shooter1::Shooter1(WPI_TalonFX& ID1)
    :Shooter1(ID1)
{

}

// This method will be called once per scheduler run
void Shooter1::Periodic() {}

double Shooter1::SpinShooter(double ShooterSpeed){
    ShooterM1.Set(ShooterSpeed);
    return ShooterSpeed;
}

double Shooter1::ShooterSpeed(){
    return ShooterM1.GetSelectedSensorVelocity();
}
double Shooter1::ShooterPosition(){
    return ShooterM1.GetSelectedSensorPosition();
}