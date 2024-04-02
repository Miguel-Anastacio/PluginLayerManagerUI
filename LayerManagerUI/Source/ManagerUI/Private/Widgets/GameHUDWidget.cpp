// Copyright 2024 An@stacioDev All rights reserved.

#include "Widgets/GameHUDWidget.h"
#include "Components/TextBlock.h"

void UGameHUDWidget::NativeOnInitialized()
{
	Super::OnInitialized();
	// in this example
	// we just set the text to be the name of the player
	const ULocalPlayer* player = GetOwningLocalPlayer();
	if (player && PlayerName)
	{
		PlayerName->SetText(FText::FromString(player->GetName()));
	}
}
