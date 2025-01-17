// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ABCharacterItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UABCharacterItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class ARENABATTLE_API IABCharacterItemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//가상함수이므로 ABCharacterBase.h에서 완성해주어야 함
	virtual void TakeItem(class UABItemData* InItemData) = 0;
};
