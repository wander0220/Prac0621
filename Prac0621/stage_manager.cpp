#include "stage_manager.h"
#include "first_stage.h"
#include "title_stage.h"
#include "menu_stage.h"
void StageManager::Update() 
{
	if (currentStage != nullptr) {
		currentStage->Update();
	}
}
void StageManager::Render() 
{
	if (currentStage != nullptr) {
		currentStage->Render();
	}
}

void StageManager::MakeTitleStage() 
{
	if (currentStage != nullptr) {
		delete currentStage;
	}
	TitleStage* stage = new TitleStage();
	currentStage = stage;
}
void StageManager::MakeFirstStage()
{
	if (currentStage != nullptr) {
		delete currentStage;
	}
	FirstStage* stage = new FirstStage();
	currentStage = stage;
}
void StageManager::MakeMenuStage()
{
	if (currentStage != nullptr) {
		delete currentStage;
	}
	MenuStage* stage = new MenuStage();
	currentStage = stage;
}