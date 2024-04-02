// Copyright 2024 An@stacioDev All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"

#include "LayerUI.generated.h"

// How many widgets can be visible at the same time
// SINGLE - one
// MULTIPLE - several
UENUM(BlueprintType)
enum class LayerType : uint8
{
	SINGLE UMETA(DisplayName = "Single"),
	MULTIPLE   UMETA(DisplayName = "Multiple"),
};

class UUserWidget;

/**
 * UObject that keeps a stack of UserWidgets
 * Create layers that inherit from this to override the reactions when a widget is added or removed to a layer
 * It is also possible to define the impact that pushing/popping to a layer has on the other layers 
 *
 */
UCLASS(Blueprintable, BlueprintType)
class MANAGERUI_API ULayerUI : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Pushes the specified widget onto the stack of this layer.
	 * @param Widget The widget to push onto the stack.
	 */
	void PushToStack(UUserWidget* widget);

	/**
	* Pops and returns the widget from the top of the stack of this layer.
	* @return The widget popped from the top of the stack, or nullptr if the stack is empty.
	*/
	UUserWidget* PopFromStack();

	/**
	 * Retrieves the widget from the top of the stack of this layer without removing it.
	 * @return The widget at the top of the stack, or nullptr if the stack is empty.
	 */
	UUserWidget* PeakStack() const; 

	/**
	 * Checks if the stack of this layer is empty.
	 * @return True if the stack is empty, false otherwise.
	 */
	bool IsLayerEmpty() const;

	/**
	 * Sets the visibility of the layer.
	 * @param Visibility The visibility to set.
	 */
	UFUNCTION(BlueprintCallable, Category = Layer)
	void SetVisibilityOfLayer(ESlateVisibility visibility);

	/**
	 * Gets the visibility of the layer.
	 * @return The visibility of the layer.
	 */
	UFUNCTION(BlueprintCallable, Category = Layer)
	ESlateVisibility GetVisibilityOfLayer() const;

	/** Clears the stack of widgets in this layer. */
	UFUNCTION(BlueprintCallable, Category = Layer)
	void ClearStack();

	/**
	 * Defines the impact that pushing a widget to this layer has on other layers.
	 * @param OtherLayers Array of other layers affected by the push operation.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "Layer Reaction")
	void OnWidgetPushedOthers(const TArray<ULayerUI*>& otherLayers);
	virtual void OnWidgetPushedOthers_Implementation(const TArray<ULayerUI*>& otherLayers);

	/**
	 * Defines the impact that popping a widget from this layer has on other layers.
	 * @param OtherLayers Array of other layers affected by the pop operation.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = Layer)
	void OnWidgetPoppedOthers(const TArray<ULayerUI*>& otherLayers);
	virtual void OnWidgetPoppedOthers_Implementation(const TArray<ULayerUI*>& otherLayers);

	/**
	 * Defines the impact that clearing this layer has on its widgets.
	 * By default, it changes the widgets visibility to the hidden state.
	 */
	UFUNCTION(BlueprintNativeEvent, Category = Layer)
	void OnLayerCleared();
	virtual void OnLayerCleared_Implementation();


public:
	/** The type of the layer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = true), Category = Layer);
	LayerType Type = LayerType::SINGLE;

	/** The visibility state to set the widget when it is pushed to the layer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere,  meta = (ExposeOnSpawn = true), Category = Layer);
	ESlateVisibility VisibleState = ESlateVisibility::SelfHitTestInvisible;

	/** The visibility state to set the widget when it is popped from the layer. */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ExposeOnSpawn = true), Category = Layer);
	ESlateVisibility HiddenState = ESlateVisibility::Collapsed;

protected:
	/** Array of widgets stacked in this layer. */
	UPROPERTY(VisibleAnywhere, Category = Layer)
	TArray<class UUserWidget*> WidgetStack;

	/**
	* Called when pushing a widget to this layer.
	* By default, uses the layerType to determine visibility of other widgets.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = Layer)
	void OnWidgetPushed(class UUserWidget* widget);
	virtual void OnWidgetPushed_Implementation(class UUserWidget* widget);

	/**
	* Called when popping a widget from this layer.
	* By default, it sets the widget visibility to HiddenState.
	*/
	UFUNCTION(BlueprintNativeEvent, Category = Layer)
	void OnWidgetPopped(class UUserWidget* widget);
	virtual void OnWidgetPopped_Implementation(class UUserWidget* widget);

};
