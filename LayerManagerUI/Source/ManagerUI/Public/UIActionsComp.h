// Copyright 2024 An@stacioDev All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIActionsComp.generated.h"
/*
	Adds input actions usually associated with UI
	(Like pause menu or a inventory menu)
	In your projects you can use this as is and add it to your player controller
	Or you can use it has a base to create your own functionality
*/

class UInputMappingContext;
class UInputAction;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MANAGERUI_API UUIActionsComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UUIActionsComp();
	/**
	 * Binds actions in C++ by calling this function in YourPlayerController::SetupInputComponent.
	 * @param EnhancedInputComponent The EnhancedInputComponent to bind actions to.
	 */
	void BindActions(class UEnhancedInputComponent* enhancedInputComponent);
	/**
	 * Adds a UI mapping context to the specified subsystem.
	 * @param Subsystem The subsystem to add the mapping context to.
	 */
	UFUNCTION(BlueprintCallable, Category="Action Mapping")
	void AddUIMappingContext(class UEnhancedInputLocalPlayerSubsystem* subsystem);
	/**
	 * Removes a UI mapping context from the specified subsystem.
	 * @param Subsystem The subsystem to remove the mapping context from.
	 */
	UFUNCTION(BlueprintCallable, Category = "Action Mapping")
	void RemoveUIMappingContext(class UEnhancedInputLocalPlayerSubsystem* subsystem);

	/** Toggles the inventory. - Example function action */
	UFUNCTION(BlueprintCallable, Category = Action)
	void ToggleInventory();
	/** Pauses the game. - Example function action */
	UFUNCTION(BlueprintCallable, Category = Action)
	void Pause();

protected:
	virtual void BeginPlay() override;

	/** The priority of the mapping context. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	int32 MappingContextPriority;

	/** The UI mapping context. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* UIMappingContext;

	/** The action for pausing the game. - Example action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* PauseAction;

	/** The action for toggling the inventory. - Example action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputAction* InventoryAction;
		
};
