// Fill out your copyright notice in the Description page of Project Settings.

#include "BAPlayerState.h"
#include "BAGameMode.h"

void ABAPlayerState::AddScore(float ScoreDelta)
{
	Score += ScoreDelta;
}

void ABAPlayerState::CheckScore()
{
	if (Score == MaxScore)
	{
		ABAGameMode* GM = Cast<ABAGameMode>(GetWorld()->GetAuthGameMode());
		if (GM)
		{
			//GM-> Call Game Over and open Menu
		}
	}
}
