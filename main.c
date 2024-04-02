#include <Windows.h>
#include <stdio.h>
#include "keyboard_press_funcs.h"

void main()
{
	//proof of concept build - Railgun (Down, Right, Left, Down, Up, Left, Right)
	
	Sleep(2000);
	
	Press_S();
	Press_D();
	Press_A();
	Press_S();
	Press_W();
	Press_A();
	Press_D();
	
	
}