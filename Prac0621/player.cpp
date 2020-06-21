#include "player.h"
#include "global.h"
Player::Player() 
{
	playerX = WINDOW_WIDTH / 2;
	playerY = WINDOW_HEIGHT * 0.8;

}
void Player::Update() 
{
    if (inputmanager.keyBuffer[VK_LEFT] == 1)
        playerX -= 1;
    if (inputmanager.keyBuffer[VK_RIGHT] == 1)
        playerX += 1;
    if (inputmanager.keyBuffer[VK_UP] == 1)
        playerY -= 1;
    if (inputmanager.keyBuffer[VK_DOWN] == 1)
        playerY += 1;

    if (inputmanager.prevKeyBuffer['Z'] == 0 &&
        inputmanager.keyBuffer['Z'] == 1){
        gamesystem.PrintPlayerBullet(playerX+5, playerY - 5);
    }

    //화면 바깥으로 나가지 말어라...
    if (playerX < 0) playerX = 0;
    if (playerX > WINDOW_WIDTH) playerX = WINDOW_WIDTH; if (playerX < 0) playerX = 0;
    if (playerY < 0) playerY = 0;
    if (playerY > WINDOW_HEIGHT) playerY = WINDOW_HEIGHT;


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

    D3DXVECTOR3 pos(playerX, playerY, 0);

    newElement->g_pTextSprite->Draw(newElement->g_pTexture, &rect, nullptr, &pos, D3DCOLOR_XRGB(255, 255, 255));
    newElement->g_pTextSprite->End();
}