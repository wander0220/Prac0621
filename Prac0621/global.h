#pragma once
#include <d3dx9.h>
#include "texture_manager.h"
#include "input_manager.h"
#include "stage_manager.h"
#include "gamesystem.h"

extern LPDIRECT3D9             g_pD3D ;
extern LPDIRECT3DDEVICE9       g_pd3dDevice ;

extern TextureManager texturemanager;
extern InputManager inputmanager;
extern StageManager stagemanager;
extern GameSystem gamesystem;

extern ID3DXFont* g_pFont;
extern ID3DXSprite* g_pTextSprite;
extern WCHAR* g_strTextBuffer;

extern int iMouseX ;
extern int iMouseY;

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

#define PLAYER_BODY 1000
#define PLAYER_BULLET 1001

#define GAME_BACKGROUND 3000
#define TITLE_SCREEN 3001
#define TITLE_BUTTON 3002