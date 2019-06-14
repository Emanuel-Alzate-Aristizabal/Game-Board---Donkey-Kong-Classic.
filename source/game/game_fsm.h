/*----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <lecheverri@uco.edu.co> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.   Poul-Henning Kamp
 * ----------------------------------------------------------------------------
 * Ing: Luis Felipe Echeverri
 * Company: UCO
 * Date: 27-04-2019
 * Project: Bomber Man
* ----------------------------------------------------------------------------*/

#ifndef GAME_FSM_H_
#define GAME_FSM_H_
#include "map.h"
#include "images/images.h"
#include "MCUFRIEND_kbv.h"
#include "../drivers/custom/JOYSTICK/JOYSTICK.h"

typedef enum {
	init,
	waitingforstart,
	painting_map,
	pause,
	gaming,
	gameover,
}game_states;

void game_fsm(void);
#endif /* GAME_FSM_H_ */
