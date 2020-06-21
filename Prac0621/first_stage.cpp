#include "first_stage.h"
#include "global.h"
#include <string>
FirstStage::FirstStage() 
{
}
void FirstStage::Update() 
{
	background.Update();
	player.Update();
	gamesystem.Update();
}
void FirstStage::Render() 
{
	background.Render();
	player.Render();
	gamesystem.Render();

}