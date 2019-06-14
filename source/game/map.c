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
 * Description: this code implements two different maps, and have a function
 * 				thats generate a charge the image of MAP to a frame buffer, the pixels
 * 				store in this frame buffer is bases in the tiles that are store in image
 * 				folder.
 * ----------------------------------------------------------------------------*/

#include "map.h"


const uint8_t maps[MAPS][ROW][COLUMN]={
										{
										 {RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW},
										 {RW,FS,FS,FS,WW,WW,WW,WW,WW,WW,WW,FS,FS,FS,RW},
										 {RW,FS,RW,WW,RW,WW,RW,WW,RW,WW,RW,WW,RW,FS,RW},
										 {RW,FS,WW,WW,WW,WW,WW,WW,WW,WW,WW,WW,WW,FS,RW},
										 {RW,WW,RW,WW,RW,WW,RW,FS,RW,FS,RW,WW,RW,WW,RW},
										 {RW,WW,WW,WW,WW,WW,WW,FS,WW,WW,WW,WW,WW,WW,RW},
										 {RW,WW,RW,WW,RW,WW,RW,FS,RW,WW,RW,WW,RW,WW,RW},
										 {RW,WW,WW,WW,WW,WW,WW,FS,WW,WW,WW,FS,WW,WW,RW},
										 {RW,WW,RW,WW,RW,WW,RW,FS,RW,FS,RW,WW,RW,WW,RW},
										 {RW,FS,WW,WW,FS,WW,WW,WW,WW,WW,WW,WW,WW,FS,RW},
										 {RW,FS,RW,WW,RW,WW,RW,WW,RW,FS,RW,FS,RW,FS,RW},
										 {RW,FS,FS,FS,WW,WW,WW,WW,WW,WW,WW,FS,FS,FS,RW},
										 {RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW}
										},

										{
										 {RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW},
										 {RW,FS,FS,FS,WW,WW,WW,WW,WW,WW,WW,FS,FS,FS,RW},
										 {RW,FS,RW,WW,RW,WW,RW,WW,RW,WW,RW,WW,RW,FS,RW},
										 {RW,FS,WW,WW,WW,WW,WW,WW,WW,WW,WW,WW,WW,FS,RW},
										 {RW,WW,RW,WW,RW,WW,RW,FS,RW,FS,RW,WW,RW,WW,RW},
										 {RW,WW,WW,WW,WW,WW,WW,FS,WW,WW,WW,WW,WW,WW,RW},
										 {RW,WW,RW,WW,RW,WW,RW,FS,RW,WW,RW,WW,RW,WW,RW},
										 {RW,WW,WW,WW,WW,WW,WW,FS,WW,WW,WW,FS,WW,WW,RW},
										 {RW,WW,RW,WW,RW,WW,RW,FS,RW,FS,RW,WW,RW,WW,RW},
										 {RW,FS,WW,WW,FS,WW,WW,WW,WW,WW,WW,WW,WW,FS,RW},
										 {RW,FS,RW,WW,RW,WW,RW,WW,RW,FS,RW,FS,RW,FS,RW},
										 {RW,FS,FS,FS,WW,WW,WW,WW,WW,WW,WW,FS,FS,FS,RW},
										 {RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW,RW}},
										};

uint16_t actual_map_buffer[(COLUMN*TILE_W)*(ROW*TILE_H)];

uint16_t actual_sprint_buffer[(TILE_W+(2*SPANX))*((2*SPANY)+(2*TILE_H))];//define size according to maximum convert image

uint8_t actual_map[ROW][COLUMN];

void choose_game_map(void){
	uint8_t i=0,j=0,k=0;
	//note: you should create an random function for map select
	//k=random()%MAPS;
	k=0;
	for(i=0;i<ROW;i++){
		for(j=0;j<COLUMN;j++){
			actual_map[i][j]=maps[k][i][j];
		}
	}

}

void paint_map(void){
	uint16_t i=0,j=0,tile;

	for(i=0;i<MAP_SIZE_Y;i++){
		for(j=0;j<MAP_SIZE_X;j++){

			tile=actual_map[i/16][j/16];
			switch (tile){
				case 0:
					actual_map_buffer[(i*MAP_SIZE_X)+j]=free_space[((i&0x000F)<<4)+(j&0x00F)];
				break;
				case 1:
					actual_map_buffer[(i*MAP_SIZE_X)+j]=reinforced_wall[((i&0x000F)<<4)+(j&0x00F)];
				break;
				case 2:
					actual_map_buffer[(i*MAP_SIZE_X)+j]=weak_wall[((i&0x000F)<<4)+(j&0x00F)];
				break;
			}

		}
	}
	MCUFRIEND_kbv_print_tail(actual_map_buffer,OFFSET_MAP_X,OFFSET_MAP_Y,MAP_SIZE_X,MAP_SIZE_Y);
}
