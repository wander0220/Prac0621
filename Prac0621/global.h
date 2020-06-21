#pragma once
#include <d3dx9.h>
#include "texture_manager.h"
#include "input_manager.h"
#include "first_stage.h"

extern LPDIRECT3D9             g_pD3D ;
extern LPDIRECT3DDEVICE9       g_pd3dDevice ;

extern TextureManager texturemanager;
extern InputManager inputmanager;

extern FirstStage firstStage;

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

#define PLAYER_BODY 1000

#define GAME_BACKGROUND 3000