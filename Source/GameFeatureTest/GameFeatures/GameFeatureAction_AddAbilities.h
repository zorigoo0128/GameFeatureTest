// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFeatureAction_WorldActionBase.h"
#include "Abilities/GameplayAbility.h"

#include "GameFeatureAction_AddAbilities.generated.h"

UCLASS(MinimalAPI, meta=(DisplayName="Add Abilities"))
class UGameFeatureAction_AddAbilities final : public UGameFeatureAction_WorldActionBase
{
	GENERATED_BODY()
	
public:
	//~UGameFeatureAction interface
	virtual void OnGameFeatureActivating(FGameFeatureActivatingContext& Context) override;
	virtual void OnGameFeatureDeactivating(FGameFeatureDeactivatingContext& Context) override;
	//~UGameFeatureAction interface

	
};
