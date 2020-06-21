#pragma once
#include <vector>
#include <d3dx9core.h>

using namespace std;

class TextureElements 
{
public:
	int id;
	LPDIRECT3DTEXTURE9      g_pTexture ;
	ID3DXSprite* g_pTextSprite ;

};
class TextureManager 
{
public:
	vector<TextureElements*> texture;
	void LoadTexture(const TCHAR* name, int id);
	TextureElements* GetTexture(int id);

};