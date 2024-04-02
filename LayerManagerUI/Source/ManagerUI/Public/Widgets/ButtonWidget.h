// Copyright 2024 Anast@cioDev All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WidgetReactionInterface.h"
#include "ButtonWidget.generated.h"

/** Custom delegate to use if you nedd to know which button was clicked */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomButtonClickedSignature, class UButtonWidget*, Button);
/**
 * Custom Button - create custom looks for it by creating BP widgets that inherit from this one
 */
UCLASS(Abstract, BlueprintType)
class MANAGERUI_API UButtonWidget : public UUserWidget, public IWidgetReactionInterface
{
	GENERATED_BODY()

public:
    /** Gets the button associated with this widget. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Button")
    class UButton* GetButton() const { return Button; };

    virtual void NativePreConstruct() override;
    virtual void NativeOnInitialized() override;

    /** The text displayed on the button. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Text")
    FText Text;

    /** Delegate called when the button is clicked. */
    FCustomButtonClickedSignature OnClickedDelegate;

protected:
    /** Called when the button is clicked. */
    UFUNCTION()
    void OnButtonClicked();

    /** The button widget. */
    UPROPERTY(meta = (BindWidget))
    TObjectPtr<class UButton> Button;

    /** The text block widget displaying the button text. */
    UPROPERTY(meta = (BindWidget))
    TObjectPtr<class URichTextBlock> ButtonText;
};
