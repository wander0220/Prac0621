#include "title_stage.h"
#include "global.h"

TitleStage::TitleStage() 
{

}
void TitleStage::Update()
{
    if (inputmanager.keyBuffer[VK_LBUTTON] == 0
        && inputmanager.prevKeyBuffer[VK_LBUTTON] == 1) 
    {
        if (WINDOW_WIDTH * 0.6 < iMouseX && WINDOW_WIDTH * 0.6 + 256 > iMouseX
            && WINDOW_HEIGHT * 0.8 < iMouseY && WINDOW_HEIGHT * 0.8 + 64 > iMouseY)
        {
            stagemanager.MakeFirstStage();
        }
        if (WINDOW_WIDTH * 0.6 < iMouseX && WINDOW_WIDTH * 0.6 + 256 > iMouseX
            && WINDOW_HEIGHT * 0.9 < iMouseY && WINDOW_HEIGHT * 0.9 + 64 > iMouseY)
        {
            stagemanager.MakeMenuStage();
        }
    }

}
void TitleStage::Render()
{
    TextureElements* newElement = texturemanager.GetTexture(TITLE_SCREEN);
    newElement->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect;
    rect.left = 0;
    rect.top = 0;
    rect.right = 635;
    rect.bottom = 480;

    D3DXVECTOR3 pos(0, 0, 0);

    newElement->g_pTextSprite->Draw(newElement->g_pTexture, &rect, nullptr
        , &pos, D3DCOLOR_XRGB(255, 255, 255));
    newElement->g_pTextSprite->End();

    //button 1
    TextureElements* newElement2 = texturemanager.GetTexture(TITLE_BUTTON);
    newElement2->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect2;
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 256;
    rect2.bottom = 64;

    D3DXVECTOR3 pos2(WINDOW_WIDTH*0.6, WINDOW_HEIGHT*0.8, 0);

    newElement2->g_pTextSprite->Draw(newElement2->g_pTexture, &rect2, nullptr
        , &pos2, D3DCOLOR_XRGB(255, 255, 255));
    newElement2->g_pTextSprite->End();

    //button 2
    TextureElements* newElement3 = texturemanager.GetTexture(TITLE_BUTTON);
    newElement3->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    D3DXVECTOR3 pos3(WINDOW_WIDTH * 0.6, WINDOW_HEIGHT * 0.9, 0);

    newElement3->g_pTextSprite->Draw(newElement3->g_pTexture, &rect2, nullptr
        , &pos3, D3DCOLOR_XRGB(255, 255, 255));
    newElement3->g_pTextSprite->End();
}