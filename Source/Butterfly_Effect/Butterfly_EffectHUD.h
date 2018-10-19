// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Butterfly_EffectHUD.generated.h"

UCLASS()
class AButterfly_EffectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AButterfly_EffectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

