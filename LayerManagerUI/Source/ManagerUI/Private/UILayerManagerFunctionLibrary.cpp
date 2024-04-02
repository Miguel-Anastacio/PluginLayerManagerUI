// Copyright 2024 An@stacioDev All rights reserved.


#include "UILayerManagerFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "LayerManagerHUD.h"
#include "Blueprint/UserWidget.h"

UE_DISABLE_OPTIMIZATION
UUserWidget* UUILayerManagerFunctionLibrary::AddWidgetToLayer(TSubclassOf<class UUserWidget> widgetClass, const FString& layerName, APlayerController* controller)
{
	UUserWidget* widget = CreateWidget<UUserWidget>(controller, widgetClass);
	if(!widget)
		return nullptr;

	widget->AddToViewport();
	ALayerManagerHUD* hud = Cast<ALayerManagerHUD>(controller->GetHUD());
	if (hud)
	{
		hud->PushToLayer(layerName, widget);
		return widget;
	}

	return nullptr;
}

void UUILayerManagerFunctionLibrary::ToggleWidgetVisibility(UUserWidget* widget, const FString& layerName, APlayerController* controller)
{
	ALayerManagerHUD* hud = Cast<ALayerManagerHUD>(controller->GetHUD());
	if (hud && widget)
	{
		if (widget == hud->PeekLayer(layerName))
		{
			hud->PopFromLayer(layerName);
		}
		else
		{
			hud->PushToLayer(layerName, widget);
		}
	}
}
UE_ENABLE_OPTIMIZATION
