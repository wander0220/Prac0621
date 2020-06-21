#include "game_background.h"
#include "global.h"

Background::Background() 
{
    backgroundX = 0;
    backgroundY = 0;
}
void Background::Update() 
{

}
void Background::Render()
{
    TextureElements* newElement = texturemanager.GetTexture(GAME_BACKGROUND);
    newElement->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect;
    rect.left = 0;
    rect.top = 0;
    rect.right = 635;
    rect.bottom = 680;

    D3DXVECTOR3 pos(backgroundX, backgroundY, 0);

    newElement->g_pTextSprite->Draw(newElement->g_pTexture, &rect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));
    newElement->g_pTextSprite->End();
}