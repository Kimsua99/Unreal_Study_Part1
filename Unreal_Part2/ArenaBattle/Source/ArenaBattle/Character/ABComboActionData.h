// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ABComboActionData.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API UABComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UABComboActionData();

	//�׼� �����Ϳ� ������ �Ӽ� �� ����

	//��Ÿ�� ���� �̸�
	UPROPERTY(EditAnywhere, Category = Name)
	FString MontageSectionNamePrefix;

	//�� �� ���� �޺� �׼��� �ִ���
	UPROPERTY(EditAnywhere, Category = Name)
	uint8 MaxComboCount;

	//�������� ���� ��� �ӵ��� ������ ��Ȯ�� Ÿ�ֿ̹� üũ �Ͼ�� ����
	UPROPERTY(EditAnywhere, Category = Name)
	float FrameRate;

	//�Է��� ������ �ԷµǾ������� �����ϴ� �����ӵ� ����
	UPROPERTY(EditAnywhere, Category = Name)
	TArray<float> EffectiveFrameCount;
};