// Copyright 2024 An@stacioDev All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LayerManagerHUD.generated.h"

/**
 * Simplifies the management of UI in game by adding fucntionality that splits widgets into different layers
 * Each layer can be customized to react differently when a widget is added or removed
 */
class UUserWidget;
//class LayerUI
UCLASS( Blueprintable, BlueprintType)
class MANAGERUI_API ALayerManagerHUD : public AHUD
{
	GENERATED_BODY()

public:
public:
    /** Registers a default layer with the specified name. */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    void RegisterDefaultLayer(const FString& Name);

    /**
     * Registers a layer with the specified name and associated ULayerUI.
     * @param Name The name of the layer.
     * @param Layer The ULayerUI associated with the layer.
     * @param bCurrent Indicates whether this layer should be set as the current layer.
     */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    void RegisterLayer(const FString& Name, ULayerUI* Layer, bool bCurrent = false);

    /** Removes the layer with the specified name. */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    void RemoveLayer(const FString& Name);

    /**
     * Adds a widget to the specified layer. If the layer does not exist, a new one is created.
     * @param Name The name of the layer.
     * @param Widget The widget to add to the layer.
     */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    void PushToLayer(const FString& Name, UUserWidget* Widget);

    /**
     * Removes and returns the widget from the top of the specified layer.
     * @param Name The name of the layer.
     * @return The widget removed from the top of the layer, or nullptr if the layer is empty.
     */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    UUserWidget* PopFromLayer(const FString& Name);

    /**
     * Removes and returns the widget from the top of the current layer.
     * @return The widget removed from the top of the current layer, or nullptr if the current layer is empty.
     */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    UUserWidget* PopFromCurrentLayer();

    /** Clears all layers. */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    void ClearAllLayers();

    /** Clears the layer with the specified name. */
    UFUNCTION(BlueprintCallable, Category = "Layer")
    void ClearLayer(const FString& Name);

    /**
     * Gets the layer with the specified name.
     * @param Name The name of the layer to retrieve.
     * @return The ULayerUI associated with the specified name, or nullptr if not found.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Layer")
    ULayerUI* GetLayer(const FString& Name) const;

    /**
     * Gets the tag of the current layer.
     * @return The tag of the current layer.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Layer")
    FString GetCurrentLayerTag() const;

    /**
     * Retrieves the widget from the top of the specified layer without removing it.
     * @param Name The name of the layer.
     * @return The widget at the top of the specified layer, or nullptr if the layer is empty.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Layer")
    UUserWidget* PeekLayer(const FString& Name) const;

    /**
     * Checks if a widget is on top of the specified layer.
     * @param Name The name of the layer.
     * @param Widget The widget to check.
     * @return True if the widget is on top of the specified layer, false otherwise.
     */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Layer")
    bool IsWidgetOnTopOfLayer(const FString& Name, UUserWidget* Widget) const;

public:
    /** The ID of the current layer. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Layer")
    FString CurrentLayerID;

protected:
    /** Map of layer names to ULayerUI instances. */
    UPROPERTY(VisibleAnywhere, Category = "Layer")
    TMap<FString, ULayerUI*> LayersUI;

    /** Array that keeps track of the order of layers visible on the viewport. */
    UPROPERTY()
    TArray<FString> LayerOrder;
};
