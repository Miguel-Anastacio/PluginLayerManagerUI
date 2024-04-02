// Copyright 2024 An@stacioDev All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UILayerManagerFunctionLibrary.generated.h"

/**
 *  Utility function library to simplify interacting with the LayerManagerHUD from outside the HUD class
 */
UCLASS()
class MANAGERUI_API UUILayerManagerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Adds a widget to the specified layer.
	 * @param WidgetClass The class of the widget to add.
	 * @param LayerName The name of the layer to add the widget to.
	 * @param Controller The player controller associated with the widget.
	 * @return The created widget, or nullptr if unsuccessful.
	 */
	UFUNCTION(BlueprintCallable, Category = "UI Utils")
	static UUserWidget* AddWidgetToLayer(TSubclassOf<class UUserWidget> widgetClass, const FString& layerName, APlayerController* controller);

	/**
	 * Toggles the visibility of a widget in the specified layer.
	 * @param Widget The widget whose visibility to toggle.
	 * @param LayerName The name of the layer containing the widget.
	 * @param Controller The player controller associated with the widget.
	 */
	UFUNCTION(BlueprintCallable, Category = "UI Utils")
	static void ToggleWidgetVisibility(class UUserWidget* widget, const FString& layerName, APlayerController* controller);
};
