#include "first_stage.h"

FirstStage::FirstStage() 
{

}
void FirstStage::Update() 
{
	background.Update();
	player.Update();
}
void FirstStage::Render() 
{
	background.Render();

	player.Render();
}