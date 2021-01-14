// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>

class NavNode
{
public:
	FIntVector Coordinates;

	std::vector<NavNode*> Neighbors;

	float FScore = FLT_MAX;
};

struct NodeCompare
{
	bool operator() (const NavNode* lhs, const NavNode* rhs) const
	{
		return (lhs->FScore < rhs->FScore);
	}
};


