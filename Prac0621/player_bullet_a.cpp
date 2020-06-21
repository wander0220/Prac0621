#include "player_bullet_a.h"
#include "global.h"

PlayerBulletA::PlayerBulletA(float x, float y, float vx, float vy) 
{
    posX = x;
    posY = y;
    velX = vx;
    velY = vy;
}
void 	PlayerBulletA::Update() 
{
    posX += velX;
    posY += velY;
}
void PlayerBulletA::Render() 
{
    TextureElements* newElement = texturemanager.GetTexture(PLAYER_BULLET);
    newElement->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect;
    rect.left = 0;
    rect.top = 0;
    rect.right = 64;
    rect.bottom = 64;

    D3DXVECTOR3 pos(posX, posY, 0);

    newElement->g_pTextSprite->Draw(newElement->g_pTexture, &rect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));
    newElement->g_pTextSprite->End();
}
