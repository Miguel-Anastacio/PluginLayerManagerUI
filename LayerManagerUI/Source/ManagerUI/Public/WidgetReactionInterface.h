// Copyright 2024 An@stacioDev All rights reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WidgetReactionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class MANAGERUI_API UWidgetReactionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface adds events to define behaviour when widget is pushed/popped to/from a layer
 * This events are supposed to be called by creating custom LayersUI either in C++ or blueprints
 */
class MANAGERUI_API IWidgetReactionInterface
{
	GENERATED_BODY()

public:
	/**
	 * Defines the reaction when the widget is pushed.
	 * This function can be overridden to implement specific behavior.
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Widget Reaction")
	void OnWidgetPushed();
	virtual void OnWidgetPushed_Implementation() {};
	/**
	* Defines the reaction when the widget is popped.
	* This function can be overridden to implement specific behavior.
	*/
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Widget Reaction")
	void OnWidgetPopped();
	virtual void OnWidgetPopped_Implementation() {};
};
