#pragma once
class Stage 
{
public:
	virtual ~Stage() {};
	virtual void Update() = 0;
	virtual void Render() = 0;

};