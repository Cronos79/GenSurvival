// (C) Copyright 2023 by CronoGames All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Texture2D.h"
#include "GenItemMaster.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	RESOURCE	UMETA(DisplayName = "Resource"),
	EQUIPABLE	UMETA(DisplayName = "Equipable"),
	ARMOR		UMETA(DisplayName = "Armor"),
	CONSUMABLE	UMETA(DisplayName = "Consumable"),
	BUILDABLE	UMETA(DisplayName = "Buildable")
};

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	COMMON		UMETA(DisplayName = "Common"),
	UNCOMMON	UMETA(DisplayName = "Uncommon"),
	MAGIC		UMETA(DisplayName = "Magic"),
	RARE		UMETA(DisplayName = "Rare"),
	EPIC		UMETA(DisplayName = "Epic"),
	LEGENDARY	UMETA(DisplayName = "Legendary")
};

UENUM(BlueprintType)
enum class EArmorType : uint8
{
	HELMET		UMETA(DisplayName = "Helmet"),
	SHOULDER	UMETA(DisplayName = "Shoulder"),
	CHEST		UMETA(DisplayName = "Chest"),
	BELT		UMETA(DisplayName = "Belt"),
	GLOVES		UMETA(DisplayName = "Gloves"),
	LEGS		UMETA(DisplayName = "Legs"),
	BOOTS		UMETA(DisplayName = "Boots")
};

UENUM(BlueprintType)
enum class EJewelType : uint8
{
	AMULET		UMETA(DisplayName = "Amulet"),
	LRING		UMETA(DisplayName = "Left ring"),
	RRING		UMETA(DisplayName = "Right ring")
};

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	MAINHAND	UMETA(DisplayName = "Main hand"),
	OFFHAND		UMETA(DisplayName = "Off hand"),
	RANGED		UMETA(DisplayName = "Ranged")
};

UENUM(BlueprintType)
enum class EAnimationState : uint8
{
	DEFAULT		UMETA(DisplayName = "Default"),
	HATCHET		UMETA(DisplayName = "Hatchet"),
	BOW			UMETA(DisplayName = "Bow"),
	SWORD		UMETA(DisplayName = "Sword")
};

USTRUCT(BlueprintType)
struct FGenEquipableInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName SocketName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EAnimationState AnimationState;
};

USTRUCT(BlueprintType)
struct FGenItemInfo : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemQuantity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UTexture2D* ItemIcon;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ItemName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText ItemDesc;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemDamage;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemRarity ItemRarity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemCurrentHP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemMaxHP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsStackable;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ItemStackSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemType ItemType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<AGenItemMaster> ItemClassRef;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EArmorType ArmorType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bUseAmmo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 CurrentAmmo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 MaxAmmo;
};

UCLASS(BlueprintType)
class GENSURVIVAL_API AGenItemMaster : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGenItemMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
