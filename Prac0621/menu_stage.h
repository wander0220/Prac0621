#pragma once
#include "stage.h"

class MenuStage : public Stage 
{
public:
	MenuStage();
	void Update() override;
	void Render() override;

};