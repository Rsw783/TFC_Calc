#include "TFC Alloys.h"

int main(int argc, char*args[])
{
	
	CreateDisplay();
	atexit(SDL_Quit);//when the program ends, end SDL
	atexit(TTF_Quit);//^same but TTF
	
	int quit = 0,x,y, oreAmounts[4];
	std::string paths[4];
	SDL_Event event;
	
	Vessel Slot1, Slot2, Slot3, Slot4;
	
	infoArea[0].x = 34;//34
	infoArea[0].y = 199;//199
	
	amounts[0].x = amounts[2].x = 455;
	amounts[1].x = amounts[3].x = 492;
	amounts[0].y = amounts[1].y = 173;
	amounts[2].y = amounts[3].y = 208;
	
	while (quit != 1)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
				quit = 1;
			else if (event.type == SDL_MOUSEBUTTONDOWN)
			{
				x = event.button.x;
				y = event.button.y;
				
				if (event.button.button == SDL_BUTTON_LEFT)
				{//if the LMB is clicked
					if (((x >= 34) && (x <= 67)) && ((y >= 22)&&(y <= 55)))
					{//Box 1, Tin -- Smal

						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 1 && Slot1.amount !=16)) && Slot2.oreNumber != 1 && Slot3.oreNumber != 1 && Slot4.oreNumber != 1)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 1;
								paths[0] = "img/Tin/Cassiterite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 1 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 1;
								paths[1] = "img/Tin/Cassiterite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 1 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 1;
								paths[2] = "img/Tin/Cassiterite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 1 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 1;
								paths[3] = "img/Tin/Cassiterite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}	
					else if (((x >= 70) && (x <= 103)) && ((y >= 22)&&(y <= 55)))
					{//Box 2, Zin
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 5 && Slot1.amount !=16)) && Slot2.oreNumber != 5 && Slot3.oreNumber != 5 && Slot4.oreNumber != 5)
							{
								if (Slot1.oreNumber == 0)
								{
									Slot1.oreNumber = 5;
									paths[0] = "img/Zinc/Sphalerite Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[0].c_str());
									InsertOre(vesselSlots, 0);
								}
								
								if (Slot1.amount <16)
									Slot1.amount++;
							}
							else if ((Slot2.oreNumber == 5 || Slot2.oreNumber == 0) && Slot2.amount != 16)
							{
								if (Slot2.oreNumber == 0)
								{
									Slot2.oreNumber = 5;
									paths[1] = "img/Zinc/Sphalerite Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[1].c_str());
									InsertOre(vesselSlots, 1);
								}
								
								if (Slot2.amount <16)
									Slot2.amount++;
							}
							else if ((Slot3.oreNumber == 5 || Slot3.oreNumber == 0) && Slot3.amount != 16)
							{
								if (Slot3.oreNumber == 0)
								{
									Slot3.oreNumber = 5;
									paths[2] = "img/Zinc/Sphalerite Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[2].c_str());
									InsertOre(vesselSlots, 2);
								}
								
								if (Slot3.amount <16)
									Slot3.amount++;
							}
							else if ((Slot4.oreNumber == 5 || Slot4.oreNumber == 0) && Slot4.amount != 16)
							{
								if (Slot4.oreNumber == 0)
								{
									Slot4.oreNumber = 5;
									paths[3] = "img/Zinc/Sphalerite Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[3].c_str());
									InsertOre(vesselSlots, 3);
								}
								
								if (Slot4.amount <16)
									Slot4.amount++;
							}
						 
					}
					else if	(((x >= 109) && (x <= 142)) && ((y >= 22)&&(y <= 55)))
					{//box 3, Native Coppe
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 9 && Slot1.amount !=16)) && Slot2.oreNumber != 9 && Slot3.oreNumber != 9 && Slot4.oreNumber != 9)
							{//box 3, Native Copper
								if (Slot1.oreNumber == 0)
								{
									Slot1.oreNumber = 9;
									paths[0] = "img/Copper/Native Copper Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[0].c_str());
									InsertOre(vesselSlots, 0);
								}
								
								if (Slot1.amount <16)
									Slot1.amount++;
							}
							else if ((Slot2.oreNumber == 9 || Slot2.oreNumber == 0) && Slot2.amount != 16)
							{
								if (Slot2.oreNumber == 0)
								{
									Slot2.oreNumber = 9;
									paths[1] = "img/Copper/Native Copper Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[1].c_str());
									InsertOre(vesselSlots, 1);
								}
								
								if (Slot2.amount <16)
									Slot2.amount++;
							}
							else if ((Slot3.oreNumber == 9 || Slot3.oreNumber == 0) && Slot3.amount != 16)
							{
								if (Slot3.oreNumber == 0)
								{
									Slot3.oreNumber = 9;
									paths[2] = "img/Copper/Native Copper Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[2].c_str());
									InsertOre(vesselSlots, 2);
								}
								
								if (Slot3.amount <16)
									Slot3.amount++;
							}
							else if ((Slot4.oreNumber == 9 || Slot4.oreNumber == 0) && Slot4.amount != 16)
							{
								if (Slot4.oreNumber == 0)
								{
									Slot4.oreNumber = 9;
									paths[3] = "img/Copper/Native Copper Small Ore.bmp";
									vesselSlots = SDL_LoadBMP(paths[3].c_str());
									InsertOre(vesselSlots, 3);
								}
								
								if (Slot4.amount <16)
									Slot4.amount++;
							}
						 
					}	 
					else if (((x >= 145) && (x <= 178)) && ((y >= 22)&&(y <= 55)))
					{//box 4, Tetrahedrit
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 13 && Slot1.amount !=16)) && Slot2.oreNumber != 13 && Slot3.oreNumber != 13 && Slot4.oreNumber != 13)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 13;
								paths[0] = "img/Copper/Tetrahedrite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 13 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 13;
								paths[1] = "img/Copper/Tetrahedrite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 13 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 13;
								paths[2] = "img/Copper/Tetrahedrite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 13 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 13;
								paths[3] = "img/Copper/Tetrahedrite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 184) && (x <= 217)) && ((y >= 22)&&(y <= 55)))
					{//box 5, Malalachit
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 17 && Slot1.amount !=16)) && Slot2.oreNumber != 17 && Slot3.oreNumber != 17 && Slot4.oreNumber != 17)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 17;
								paths[0] = "img/Copper/Malachite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 17 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 17;
								paths[1] = "img/Copper/Malachite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 17 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 17;
								paths[2] = "img/Copper/Malachite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 17 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 17;
								paths[3] = "img/Copper/Malachite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 220) && (x <= 253)) && ((y >= 22)&&(y <= 55)))
					{//box 6, Bismut
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 21 && Slot1.amount !=16)) && Slot2.oreNumber != 21 && Slot3.oreNumber != 21 && Slot4.oreNumber != 21)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 21;
								paths[0] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 21 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 21;
								paths[1] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 21 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 21;
								paths[2] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 21 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 21;
								paths[3] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if	(((x >= 256) && (x <= 289)) && ((y >= 22)&&(y <= 55)))
					{//box 7, Silve
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 25 && Slot1.amount !=16)) && Slot2.oreNumber != 25 && Slot3.oreNumber != 25 && Slot4.oreNumber != 25)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 25;
								paths[0] = "img/Silver/Native Silver Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 25 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 25;
								paths[1] = "img/Silver/Native Silver Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 25 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 25;
								paths[2] = "img/Silver/Native Silver Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 25 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 25;
								paths[3] = "img/Silver/Native Silver Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 295) && (x <= 328)) && ((y >= 22)&&(y <= 55)))
					{//box 8, Native Gol
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 29 && Slot1.amount !=16)) && Slot2.oreNumber != 29 && Slot3.oreNumber != 29 && Slot4.oreNumber != 29)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 29;
								paths[0] = "img/Gold/Native Gold Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 29 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 29;
								paths[1] = "img/Gold/Native Gold Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 29 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 29;
								paths[2] = "img/Gold/Native Gold Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 29 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 29;
								paths[3] = "img/Gold/Native Gold Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
						
					else if (((x >= 34) && (x <= 67)) && ((y >= 59)&&(y <= 92)))
					{//box 9, Tin -- Poo
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 2 && Slot1.amount !=16)) && Slot2.oreNumber != 2 && Slot3.oreNumber != 2 && Slot4.oreNumber != 2)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 2;
								paths[0] = "img/Tin/Poor Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 2 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 2;
								paths[1] = "img/Tin/Poor Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 2 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 2;
								paths[2] = "img/Tin/Poor Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 2 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 2;
								paths[3] = "img/Tin/Poor Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 70) && (x <= 103)) && ((y >= 59)&&(y <= 92)))
					{//box 10, Zin
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 6 && Slot1.amount !=16)) && Slot2.oreNumber != 6 && Slot3.oreNumber != 6 && Slot4.oreNumber != 6)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 6;
								paths[0] = "img/Zinc/Poor Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 6 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 6;
								paths[1] = "img/Zinc/Poor Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 6 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 6;
								paths[2] = "img/Zinc/Poor Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 6 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 6;
								paths[3] = "img/Zinc/Poor Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if	(((x >= 109) && (x <= 142)) && ((y >= 59)&&(y <= 92)))
					{//box 11, Native Coppe
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 10 && Slot1.amount !=16)) && Slot2.oreNumber != 10 && Slot3.oreNumber != 10 && Slot4.oreNumber != 10)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 10;
								paths[0] = "img/Copper/Poor Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 10 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 10;
								paths[1] = "img/Copper/Poor Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 10 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 10;
								paths[2] = "img/Copper/Poor Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 10 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 10;
								paths[3] = "img/Copper/Poor Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 145) && (x <= 178)) && ((y >= 59)&&(y <= 92)))
					{//box 12, Tetrahedrit
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 14 && Slot1.amount !=16)) && Slot2.oreNumber != 14 && Slot3.oreNumber != 14 && Slot4.oreNumber != 14)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 14;
								paths[0] = "img/Copper/Poor Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 14 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 14;
								paths[1] = "img/Copper/Poor Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 14 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 14;
								paths[2] = "img/Copper/Poor Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 14 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 14;
								paths[3] = "img/Copper/Poor Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 184) && (x <= 217)) && ((y >= 59)&&(y <= 92)))
					{//box 13, Malachit
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 18 && Slot1.amount !=16)) && Slot2.oreNumber != 18 && Slot3.oreNumber != 18 && Slot4.oreNumber != 18)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 18;
								paths[0] = "img/Copper/Poor Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 18 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 18;
								paths[1] = "img/Copper/Poor Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 18 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 18;
								paths[2] = "img/Copper/Poor Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 18 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 18;
								paths[3] = "img/Copper/Poor Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
						 
					}
					else if (((x >= 220) && (x <= 253)) && ((y >= 59)&&(y <= 92)))
					{//box 14, Bismut
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 22 && Slot1.amount !=16)) && Slot2.oreNumber != 22 && Slot3.oreNumber != 22 && Slot4.oreNumber != 22)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 22;
								paths[0] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 22 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 22;
								paths[1] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 22 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 22;
								paths[2] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 22 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 22;
								paths[3] = "img/Bismuth/Bismuthinite Small Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
					}
					else if	(((x >= 256) && (x <= 289)) && ((y >= 59)&&(y <= 92)))
					{//box 15, Native Silve
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 26 && Slot1.amount !=16)) && Slot2.oreNumber != 26 && Slot3.oreNumber != 26 && Slot4.oreNumber != 26)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 26;
								paths[0] = "img/Silver/Poor Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 26 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 26;
								paths[1] = "img/Silver/Poor Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 26 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 26;
								paths[2] = "img/Silver/Poor Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 26 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 26;
								paths[3] = "img/Silver/Poor Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 295) && (x <= 328)) && ((y >= 59)&&(y <= 92)))
					{//box 16, Native Gol
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 30 && Slot1.amount !=16)) && Slot2.oreNumber != 30 && Slot3.oreNumber != 30 && Slot4.oreNumber != 30)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 30;
								paths[0] = "img/Gold/Poor Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 30 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 30;
								paths[1] = "img/Gold/Poor Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 30 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 30;
								paths[2] = "img/Gold/Poor Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 30 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 30;
								paths[3] = "img/Gold/Poor Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
						
					else if (((x >= 34) && (x <= 67)) && ((y >= 102)&&(y <= 135)))
					{//box 17, Tin -- Norma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 3 && Slot1.amount !=16)) && Slot2.oreNumber != 3 && Slot3.oreNumber != 3 && Slot4.oreNumber != 3)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 3;
								paths[0] = "img/Tin/Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 3 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 3;
								paths[1] = "img/Tin/Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 3 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 3;
								paths[2] = "img/Tin/Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 3 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 3;
								paths[3] = "img/Tin/Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if	(((x >= 70) && (x <= 103)) && ((y >= 102)&&(y <= 135)))
					{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 7 && Slot1.amount !=16)) && Slot2.oreNumber != 7 && Slot3.oreNumber != 7 && Slot4.oreNumber != 7)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 7;
								paths[0] = "img/Zinc/Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 7 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 7;
								paths[1] = "img/Zinc/Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 7 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 7;
								paths[2] = "img/Zinc/Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 7 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 7;
								paths[3] = "img/Zinc/Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
					}
					else if (((x >= 109) && (x <= 142)) && ((y >= 102)&&(y <= 135)))
					{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 11 && Slot1.amount !=16)) && Slot2.oreNumber != 11 && Slot3.oreNumber != 11 && Slot4.oreNumber != 11)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 11;
								paths[0] = "img/Copper/Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 11 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 11;
								paths[1] = "img/Copper/Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 11 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 11;
								paths[2] = "img/Copper/Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 11 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 11;
								paths[3] = "img/Copper/Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 145) && (x <= 178)) && ((y >= 102)&&(y <= 135)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 15 && Slot1.amount !=16)) && Slot2.oreNumber != 15 && Slot3.oreNumber != 15 && Slot4.oreNumber != 15)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 15;
								paths[0] = "img/Copper/Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 15 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 15;
								paths[1] = "img/Copper/Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 15 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 15;
								paths[2] = "img/Copper/Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 15 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 15;
								paths[3] = "img/Copper/Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 184) && (x <= 217)) && ((y >= 102)&&(y <= 135)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 19 && Slot1.amount !=16)) && Slot2.oreNumber != 19 && Slot3.oreNumber != 19 && Slot4.oreNumber != 19)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 19;
								paths[0] = "img/Copper/Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 19 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 19;
								paths[1] = "img/Copper/Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 19 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 19;
								paths[2] = "img/Copper/Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 19 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 19;
								paths[3] = "img/Copper/Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if	(((x >= 220) && (x <= 253)) && ((y >= 102)&&(y <= 135)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 23 && Slot1.amount !=16)) && Slot2.oreNumber != 23 && Slot3.oreNumber != 23 && Slot4.oreNumber != 23)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 23;
								paths[0] = "img/Bismuth/Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 23 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 23;
								paths[1] = "img/Bismuth/Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 23 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 23;
								paths[2] = "img/Bismuth/Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 23 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 23;
								paths[3] = "img/Bismuth/Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 256) && (x <= 289)) && ((y >= 102)&&(y <= 135)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 27 && Slot1.amount !=16)) && Slot2.oreNumber != 27 && Slot3.oreNumber != 27 && Slot4.oreNumber != 27)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 27;
								paths[0] = "img/Silver/Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 27 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 27;
								paths[1] = "img/Silver/Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 27 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 27;
								paths[2] = "img/Silver/Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 27 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 27;
								paths[3] = "img/Silver/Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}	
					else if (((x >= 295) && (x <= 328)) && ((y >= 102)&&(y <= 135)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 31 && Slot1.amount !=16)) && Slot2.oreNumber != 31 && Slot3.oreNumber != 31 && Slot4.oreNumber != 31)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 31;
								paths[0] = "img/Gold/Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 31 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 31;
								paths[1] = "img/Gold/Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 31 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 31;
								paths[2] = "img/Gold/Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 31 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 31;
								paths[3] = "img/Gold/Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
						
					else if (((x >= 34) && (x <= 67)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 4 && Slot1.amount !=16)) && Slot2.oreNumber != 4 && Slot3.oreNumber != 4 && Slot4.oreNumber != 4)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 4;
								paths[0] = "img/Tin/Rich Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 4 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 4;
								paths[1] = "img/Tin/Rich Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 4 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 4;
								paths[2] = "img/Tin/Rich Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 4 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 4;
								paths[3] = "img/Tin/Rich Cassiterite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if	(((x >= 70) && (x <= 103)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 8 && Slot1.amount !=16)) && Slot2.oreNumber != 8 && Slot3.oreNumber != 8 && Slot4.oreNumber != 8)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 8;
								paths[0] = "img/Zinc/Rich Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 8 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 8;
								paths[1] = "img/Zinc/Rich Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 8 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 8;
								paths[2] = "img/Zinc/Rich Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 8 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 8;
								paths[3] = "img/Zinc/Rich Sphalerite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 109) && (x <= 142)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 12 && Slot1.amount !=16)) && Slot2.oreNumber != 12 && Slot3.oreNumber != 12 && Slot4.oreNumber != 12)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 12;
								paths[0] = "img/Copper/Rich Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 12 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 12;
								paths[1] = "img/Copper/Rich Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 12 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 12;
								paths[2] = "img/Copper/Rich Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 12 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 12;
								paths[3] = "img/Copper/Rich Native Copper Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 145) && (x <= 178)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 16 && Slot1.amount !=16)) && Slot2.oreNumber != 16 && Slot3.oreNumber != 16 && Slot4.oreNumber != 16)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 16;
								paths[0] = "img/Copper/Rich Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 16 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 16;
								paths[1] = "img/Copper/Rich Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 16 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 16;
								paths[2] = "img/Copper/Rich Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 16 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 16;
								paths[3] = "img/Copper/Rich Tetrahedrite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 184) && (x <= 217)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Mal//start her
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 20 && Slot1.amount !=16)) && Slot2.oreNumber != 20 && Slot3.oreNumber != 20 && Slot4.oreNumber != 20)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 20;
								paths[0] = "img/Copper/Rich Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 20 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 20;
								paths[1] = "img/Copper/Rich Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 20 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 20;
								paths[2] = "img/Copper/Rich Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 20 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 20;
								paths[3] = "img/Copper/Rich Malachite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if	(((x >= 220) && (x <= 253)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 17 && Slot1.amount !=16)) && Slot2.oreNumber != 17 && Slot3.oreNumber != 17 && Slot4.oreNumber != 17)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 24;
								paths[0] = "img/Bismuth/Rich Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 24 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 24;
								paths[1] = "img/Bismuth/Rich Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 24 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 24;
								paths[2] = "img/Bismuth/Rich Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 24 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 24;
								paths[3] = "img/Bismuth/Rich Bismuthinite Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					 
				}
					else if (((x >= 256) && (x <= 289)) && ((y >= 139)&&(y <= 172)))
						{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 17 && Slot1.amount !=16)) && Slot2.oreNumber != 17 && Slot3.oreNumber != 17 && Slot4.oreNumber != 17)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 28;
								paths[0] = "img/Silver/Rich Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 28 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 28;
								paths[1] = "img/Silver/Rich Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 28 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 28;
								paths[2] = "img/Silver/Rich Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 28 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 28;
								paths[3] = "img/Silver/Rich Native Silver Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;                
						}
					
				}
					else if (((x >= 295) && (x <= 328)) && ((y >= 139)&&(y <= 172)))
					{//box 5, Ma
						if ((Slot1.oreNumber == 0 || (Slot1.oreNumber == 32 && Slot1.amount !=16)) && Slot2.oreNumber != 32 && Slot3.oreNumber != 32 && Slot4.oreNumber != 32)
						{
							if (Slot1.oreNumber == 0)
							{
								Slot1.oreNumber = 32;
								paths[0] = "img/Gold/Rich Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[0].c_str());
								InsertOre(vesselSlots, 0);
							}
							
							if (Slot1.amount <16)
								Slot1.amount++;
						}
						else if ((Slot2.oreNumber == 32 || Slot2.oreNumber == 0) && Slot2.amount != 16)
						{
							if (Slot2.oreNumber == 0)
							{
								Slot2.oreNumber = 32;
								paths[1] = "img/Gold/Rich Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[1].c_str());
								InsertOre(vesselSlots, 1);
							}
							
							if (Slot2.amount <16)
								Slot2.amount++;
						}
						else if ((Slot3.oreNumber == 32 || Slot3.oreNumber == 0) && Slot3.amount != 16)
						{
							if (Slot3.oreNumber == 0)
							{
								Slot3.oreNumber = 32;
								paths[2] = "img/Gold/Rich Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[2].c_str());
								InsertOre(vesselSlots, 2);
							}
							
							if (Slot3.amount <16)
								Slot3.amount++;
						}
						else if ((Slot4.oreNumber == 32 || Slot4.oreNumber == 0) && Slot4.amount != 16)
						{
							if (Slot4.oreNumber == 0)
							{
								Slot4.oreNumber = 32;
								paths[3] = "img/Gold/Rich Native Gold Ore.bmp";
								vesselSlots = SDL_LoadBMP(paths[3].c_str());
								InsertOre(vesselSlots, 3);
							}
							
							if (Slot4.amount <16)
								Slot4.amount++;
						}
					
					}
				
					//Vessel controls
					else if ((x>=432 && x<=465) && (y>=150 && y<=183))
					{
						if (Slot1.amount < 16)
							Slot1.amount++;
					}
					else if ((x>=469 && x<=502) && (y>=150 && y<=183))
					{
						if (Slot2.amount < 16)
							Slot2.amount++;
					}
					else if ((x>=432 && x<=465) && (y>=189 && 222))
					{
						if (Slot3.amount < 16)
							Slot3.amount++;
					}
					else if ((x>=469 && x<=502) && (y>=189 && 222))
					{
						if (Slot4.amount < 16)
							Slot4.amount++;
					}
					
					oreAmounts[0] = Slot1.amount;
					oreAmounts[1] = Slot2.amount;
					oreAmounts[2] = Slot3.amount;
					oreAmounts[3] = Slot4.amount;
					
					UseClick(oreAmounts, paths);
					
					Slot1.UnifyVesselOres();
					Slot2.UnifyVesselOres();
					Slot3.UnifyVesselOres();
					Slot4.UnifyVesselOres();
				//end LMB control
				}
				else if (event.button.button == SDL_BUTTON_RIGHT)
				{//if the RMB is clicked
					if ((x>=432 && x<=465) && (y>=150 && y<=183))
					{
						if (Slot1.amount > 1)
							Slot1.amount--;
						else if (Slot1.amount == 1)
							Slot1.ClearSlot(0);
					}
					else if ((x>=469 && x<=502) && (y>=150 && y<=183))
					{
						if (Slot2.amount > 1)
							Slot2.amount--;
						else if (Slot2.amount == 1)
							Slot2.ClearSlot(1);
					}
					else if ((x>=432 && x<=465) && (y>=189 && 222))
					{
						if (Slot3.amount > 1)
							Slot3.amount--;
						else if (Slot3.amount == 1)
							Slot3.ClearSlot(2);
					}
					else if ((x>=469 && x<=502) && (y>=189 && 222))
					{
						if (Slot4.amount > 1)
							Slot4.amount--;
						else  if (Slot4.amount == 1)
							Slot4.ClearSlot(3);
					}
					oreAmounts[0] = Slot1.amount;
					oreAmounts[1] = Slot2.amount;
					oreAmounts[2] = Slot3.amount;
					oreAmounts[3] = Slot4.amount;
					
					UseClick(oreAmounts, paths);
					
					Slot1.UnifyVesselOres();
					Slot2.UnifyVesselOres();
					Slot3.UnifyVesselOres();
					Slot4.UnifyVesselOres();
				}
			}
		} 
	}
	return 0;
}
