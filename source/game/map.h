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

#ifndef GAME_MAP_H_
#define GAME_MAP_H_
#include <stdint.h>
#include "Adafruit_GFX.h"
#include "MCUFRIEND_kbv.h"
#include "images/images.h"
#include "../JOYSTICK/JOYSTICK.h"
#include "utilities.h"

#define SPANX 4
#define SPANY 4
#define ROW 13
#define MAPS 2
#define COLUMN 15
#define OFFSET_MAP_X 0
#define OFFSET_MAP_Y 48

#define RW 1 //reinforced Wall
#define WW 2 //Weak Wall
#define FS 0 //Free Space


#define MAP_SIZE_Y  ROW*TILE_H
#define MAP_SIZE_X  COLUMN*TILE_W

#define TILE_W 16
#define TILE_H 16


extern uint8_t actual_map[ROW][COLUMN];
extern uint16_t actual_map_buffer[(COLUMN*TILE_W)*(ROW*TILE_H)];
extern uint16_t actual_sprint_buffer[];

void choose_game_map(void);
void paint_map(void);


void imagesoverlay( unsigned short *image1, 		//Pointer to Image that will be in front
					unsigned short *background, 	//Pointer to Image that will behind
					unsigned short *image_result, 	//Pointer to Image as result
					int16_t w_background, 			//Width of original background image
													//(It is not the width of the part where the image will be overlaps.
													//this is the full width size of the background image)
					int16_t x_background, 			//horizontal pixel of background will be put image1
					int16_t y_background, 			//vertical pixel of background will be put image1
					int16_t left_w_span, 			//width span to left
					int16_t rigth_w_span, 			//width span to right
					int16_t up_h_span,				//height span to up
					int16_t down_h_span,			//height span to down
					int16_t w, 						//width of the  image1
					int16_t h,						//height of the  image1
					uint16_t color);				//define the transparent color for image1

#endif /* GAME_MAP_H_ */
