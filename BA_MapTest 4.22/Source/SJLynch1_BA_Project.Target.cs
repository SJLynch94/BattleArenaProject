// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class SJLynch1_BA_ProjectTarget : TargetRules
{
	public SJLynch1_BA_ProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "SJLynch1_BA_Project" } );
	}
}
