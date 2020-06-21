#include "game_background.h"
#include "global.h"

Background::Background() 
{
    backgroundX = 0;
    backgroundY = 0;
}
void Background::Update() 
{
    backgroundY += 10;
    backgroundY = (int)backgroundY % 680;
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

    newElement->g_pTextSprite->Draw(newElement->g_pTexture, &rect, nullptr
        , &pos, D3DCOLOR_XRGB(255, 255, 255));
    newElement->g_pTextSprite->End();


    TextureElements* newElement2 = texturemanager.GetTexture(GAME_BACKGROUND);
    newElement2->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect2;
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 635;
    rect2.bottom = 680;

    D3DXVECTOR3 pos2(backgroundX, backgroundY-680, 0);

    newElement2->g_pTextSprite->Draw(newElement2->g_pTexture, &rect, nullptr
        , &pos2, D3DCOLOR_XRGB(255, 255, 255));
    newElement2->g_pTextSprite->End();
}