#include "title_stage.h"
#include "global.h"

TitleStage::TitleStage() 
{

}
void TitleStage::Update()
{
    if (inputmanager.keyBuffer['Z'] == 1
        && inputmanager.prevKeyBuffer['Z'] == 0) {
        stagemanager.MakeFirstStage();
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

    TextureElements* newElement2 = texturemanager.GetTexture(TITLE_BUTTON);
    newElement2->g_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);

    RECT rect2;
    rect2.left = 0;
    rect2.top = 0;
    rect2.right = 256;
    rect2.bottom = 64;

    D3DXVECTOR3 pos2(WINDOW_WIDTH*0.6, WINDOW_HEIGHT*0.8, 0);

    newElement2->g_pTextSprite->Draw(newElement2->g_pTexture, &rect, nullptr
        , &pos2, D3DCOLOR_XRGB(255, 255, 255));
    newElement2->g_pTextSprite->End();
}