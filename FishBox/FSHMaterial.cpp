#include "stdafx.h"
#include "FishBox.h"


FSHMaterial::FSHMaterial(void)
{
	this->diffuse[0] = 1.0f;
	return;
}

std::string FSHMaterial::getMaterialName()
{
	return this->materialName;
}

std::string FSHMaterial::getTextureFilePath()
{
	return this->textureFilePath;
}

float * FSHMaterial::getDiffuse()
{
	return this->diffuse;
}

float * FSHMaterial::getSpecular()
{
	return this->specular;
}

float FSHMaterial::getShinyness()
{
	return this->shinyValue;
}

