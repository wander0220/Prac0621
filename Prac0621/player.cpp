#include "player.h"
#include "global.h"
Player::Player() 
{
	playerX = WINDOW_WIDTH / 2;
	playerY = WINDOW_HEIGHT * 0.8;

}
void Player::Update() 
{

}
void Player::Render()
{
    TextureElements* newElement = texturemanager.GetTexture(PLAYER_BODY);
    newElement->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect;
    rect.left = 0;
    rect.top = 0;
    rect.right = 64;
    rect.bottom = 64;

    newElement->g_pTextSprite->Draw(newElement->g_pTexture, &rect, nullptr, nullptr, D3DCOLOR_XRGB(255, 255, 255));
    newElement->g_pTextSprite->End();
}