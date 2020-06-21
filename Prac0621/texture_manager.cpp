#include "texture_manager.h"
#include "global.h"

void TextureManager::LoadTexture(const TCHAR* name, int id)
{
	TextureElements* newTexture = new TextureElements();
	newTexture->id = id;

	D3DXCreateSprite(g_pd3dDevice, &newTexture->g_pTextSprite);
	D3DXCreateTextureFromFile(g_pd3dDevice,name,&newTexture->g_pTexture);

	texture.push_back(newTexture);
}
TextureElements* TextureManager::GetTexture(int id) 
{
	for (int i = 0; i < texture.size(); i++) {
		if (texture[i]->id == id) {
			return texture[i];
		}
	}
	return nullptr;
}