#ifndef TFCALLOYS_H
#define TFCALLOYS_H

#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <string>
#include <sstream>

SDL_Surface *screen = NULL, *background, *vesselSlots, *numbers, *info[6];
SDL_Rect vesselOresImg[4], oreAmount[4], layout, infoArea[6], amounts[4];//still need to do alloy math, vessel amounts numbers & info pane

TTF_Font *font = NULL;
SDL_Color textColor = {255, 255, 255};

const char* MakeChar(int);//, int, int, int);
void VesselControl(int);
void UseClick(int [], std::string []);

class Vessel
{
	public:
		
	int amount, oreNumber, units;
	bool hasTin, hasZinc, hasCopper, hasBismuth, hasSilver, hasGold;
	void ClearSlot(int);
	void InsertOre(SDL_Surface, int);
	void UnifyVesselOres();
	Vessel();
	
};

void CreateDisplay()
{
	SDL_Init(SDL_INIT_VIDEO);
	screen = SDL_SetVideoMode(600,365,32, SDL_HWSURFACE);
	
	TTF_Init();
	font = TTF_OpenFont("Font.ttf", 12);
	//vesselOresImg1-2-3-4.x/y = values;
	vesselOresImg[0].x = vesselOresImg[2].x = 432;
	vesselOresImg[1].x = vesselOresImg[3].x = 468;
	vesselOresImg[0].y = vesselOresImg[1].y = 150;
	vesselOresImg[2].y = vesselOresImg[3].y = 187;
	
	
	layout.x = layout.y = 0;
	layout.x = layout.y = 0;
	
	background = SDL_LoadBMP("img/Whole Layout.bmp");
	SDL_BlitSurface(background,NULL,screen,&layout);
	SDL_Flip(screen);
}


void UseClick(int oreAmounts[], std::string paths[])
{				
	for (int x=0;x<4;x++)
	{
		if (oreAmounts[x]< 2)
			oreAmounts
		const char* ores = MakeChar(oreAmounts[x]);
		if (oreAmounts[x] > 0)
		{
			vesselSlots = SDL_LoadBMP(paths[x].c_str());
			SDL_BlitSurface(vesselSlots,NULL, screen, &vesselOresImg[x]);
			
			info[x] = TTF_RenderText_Blended(font, ores, textColor);
			SDL_BlitSurface(info[x],NULL,screen,&amounts[x]);
		}
		else 
		{
			vesselSlots = SDL_LoadBMP("img/Blank.bmp");
			SDL_BlitSurface(vesselSlots,NULL,screen,&vesselOresImg[x]);
		}
	}
	
	SDL_Flip(screen);
}

const char* MakeChar(int x)
{	
	std::stringstream convert;
	convert << x;
	std::string amt = convert.str();
	const char* out = amt.c_str();
	
	return out;
}

Vessel::Vessel()
{
	amount = oreNumber = 0;
	hasTin = hasZinc = hasCopper = hasBismuth = hasSilver = hasGold = false;
}

void InsertOre(SDL_Surface* what, int x)
{
	SDL_BlitSurface(what,NULL,screen,&vesselOresImg[x]);
	SDL_Flip(screen);
}

void Vessel::ClearSlot(int x)
{
	oreNumber = 0;
	hasTin = hasZinc = hasCopper = hasBismuth = hasSilver = hasGold = false;
	
	vesselSlots = SDL_LoadBMP("img/Blank.bmp");
	SDL_BlitSurface(vesselSlots,NULL,screen,&vesselOresImg[x]);
	SDL_Flip(screen);
	
}

void Vessel::UnifyVesselOres()
{
	if (oreNumber>0 && oreNumber<5)
		hasTin = true;
	else if (oreNumber>4 && oreNumber<9)
		hasZinc = true;
	else if (oreNumber>8 && oreNumber<21)
		hasCopper = true;
	else if (oreNumber>20 && oreNumber<25)
		hasBismuth = true;
	else if (oreNumber>24 && oreNumber<29)
		hasSilver = true;
	else if (oreNumber>28 && oreNumber<33)
		hasGold = true;
}

#endif
