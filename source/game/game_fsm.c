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
 * Description: this code implements the finite state machine frome play game,
 * 				the MCU begin at init state in this, the MCU print the wellcome
 * 				image in TFT, and pass to other state calling waitingforstart,
 * 				in this the MCU is waiting while the player press to BTNA button,
 * 				when this take place, the FSM jump to another state caller
 * 				painting_map when select a random map and paint it in the TFT,
 * 				after it the MCU jump to state gaming where the microcontroller
 * 				check the button BTNA for pause the game and call other two FSM
 * 				bomberman_fsm() & bomb_fsm() who manager the move of bomberman and
 * 				bomb manager.
 * ----------------------------------------------------------------------------*/


#include "game_fsm.h"
#include "Fonts/FreeSerifItalic12pt7b.h"
#include "bomberman_fsm.h"
#include "bomb_fsm.h"
#include "../../drivers/custom/TFT/images/images.h"

game_states game_state=init;

void game_fsm(void){
	MCUFRIEND_kbv_fillBMP(pantallaInicial);


}

