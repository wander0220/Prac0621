#pragma once
#include "stage.h"
#include "player.h"
#include "game_background.h"

class FirstStage :public Stage
{
public:

	FirstStage();
	void Update() override;
	void Render() override;

	Player player;
	Background background;

	//ID3DXFont* font;
	//int i;

	/*ID3DXFont* g_pFont;
	ID3DXSprite* g_pTextSprite;
	WCHAR* g_strTextBuffer;*/
};