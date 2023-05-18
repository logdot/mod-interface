#pragma once
#define DllExport extern "C" __declspec( dllexport )

/**
 * The name of your mod.
 * Must be unique.
 *
 * *REQUIRED*
 */
DllExport const char* Name();

/**
 * The version of your mod.
 *
 * *REQUIRED*
 */
DllExport const char* Version();

/**
 * The version of the game your mod is intended to work on.
 *
 * *REQUIRED*
 */
DllExport const char* GameVersion();

/**
 * The github link to your mod.
 *
 * *OPTIONAL* Can return empty string
 */
DllExport const char* GithubLink();