#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "../RobotMap.h"
#include "../Robot.h"
#include "WPILib.h"

class DriveWithJoystick : public Command {
public:
	DriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveWithJoystick_H
