// Copyright 2024 An@stacioDev All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetReactionInterface.h"
#include "MainMenuWidget.generated.h"
/**
 * Custom main menu widget that adds loading level asynchronously to create a smoother experience when loading the game level.
 */
class UButtonWidget;

UCLASS(Abstract, BlueprintType)
class MANAGERUI_API UMainMenuWidget : public UUserWidget, public IWidgetReactionInterface
{
    GENERATED_BODY()

public:
    /**
     * Asynchronously loads the specified level.
     * @param LevelDir The directory of the level to load.
     * @param LevelName The name of the level to load.
     */
    UFUNCTION(BlueprintCallable, Category = "Load")
    void AsyncLevelLoad(const FString& LevelDir, const FString& LevelName);

protected:
    /** Called when preheating finished. */
    UFUNCTION()
    void OnPreheatFinished() const;

    virtual void NativeOnInitialized() override;

    /**
     * Callback function called when asynchronous level loading finished.
     * @param LevelName The name of the loaded level.
     */
    void AsyncLevelLoadFinished(const FString& LevelName);

    /** Starts the game. */
    UFUNCTION()
    void StartGame();

    /** Quits the game. */
    UFUNCTION()
    void QuitGame();

protected:
    /** The start button widget. */
    UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "Widget")
    TObjectPtr<UButtonWidget> StartButton;

    /** The quit button widget. */
    UPROPERTY(meta = (BindWidget), BlueprintReadWrite, Category = "Widget")
    TObjectPtr<UButtonWidget> QuitButton;

    /** The name of the level to load when pressing the start button. */
    UPROPERTY(EditAnywhere, Category = "Start Level")
    FString StartLevelName;

    /** The directory of the level to load when pressing the start button. */
    UPROPERTY(EditAnywhere, Category = "Start Level")
    FString LevelDirectory;

    /** The minimum time in seconds to wait for level loading. */
    UPROPERTY(EditAnywhere, Category = "Start Level")
    float MinimumLevelLoadTime;

    /** The name of the loaded level. */
    FString LevelName;
};
