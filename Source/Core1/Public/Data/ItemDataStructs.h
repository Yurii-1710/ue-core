#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStructs.generated.h"


UENUM()
enum class EItemQuality : uint8
{
	Common UMETA(DisplayName = "Common"),
	Epic UMETA(DisplayName = "Epic"),
	Legendary UMETA(DisplayName = "Legendary"),
};

UENUM()
enum class EItemType : uint8
{
	Armour UMETA(DisplayName = "Armour"),
	Weapon UMETA(DisplayName = "Weapon"),
	Spell UMETA(DisplayName = "Spell"),
	Quest UMETA(DisplayName = "Quest")
};


USTRUCT()
struct FItemStatistics
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	float ArmourRating;

	UPROPERTY(EditAnywhere)
	float DamageValue;

	UPROPERTY(EditAnywhere)
	float SellValue;
};


USTRUCT()
struct FItemTextData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	FText InteractionText;

	UPROPERTY(EditAnywhere)
	FText UsageText;
};


USTRUCT()
struct FItemNumericData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float Weight;

	UPROPERTY(EditAnywhere)
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere)
	bool bIsStackable;
};


USTRUCT()
struct FItemAssetData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
};


USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemQuality ItemQuality;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemStatistics ItemStatistics;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemTextData TextData;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemAssetData AssetData;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemNumericData NumericData;
};


