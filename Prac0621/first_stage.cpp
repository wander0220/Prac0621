#include "first_stage.h"
#include "global.h"
#include <string>
FirstStage::FirstStage() 
{
}
void FirstStage::Update() 
{
	background.Update();
	player.Update();
	gamesystem.Update();
}
void FirstStage::Render() 
{
	/*D3DXCreateFont(g_pd3dDevice, -12, 0, FW_BOLD, 1, FALSE, DEFAULT_CHARSET,
		OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE,
		L"System", &g_pFont);

	g_pFont->DrawText(NULL, L"This is a trivial call to ID3DXFont::DrawText", -1, nullptr, DT_NOCLIP,
		D3DXCOLOR(1.0f, 0.0f, 0.0f, 1.0f));*/

	background.Render();
	player.Render();
	gamesystem.Render();

}