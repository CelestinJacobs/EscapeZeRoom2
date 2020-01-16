// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class EscapeZeRoom2Target : TargetRules
{
	public EscapeZeRoom2Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "EscapeZeRoom2" } );
	}
}
