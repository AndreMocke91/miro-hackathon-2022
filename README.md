A VR Client for Miro.


# Prerequisites

This project assumes you'll be working on Windows.

1. Use the Epic Games launcher to install UnrealEngine 4
1. Install Microsoft VisualStudio

# Getting started

## First time project setup

1. Clone this repo into `Documents/Unreal Projects`
1. In the file file explorer, right click on `HandTracking.uproject` and select "Generate Visual Studio project files"
1. In Epic Games launcher > Unreal engine > Library > double click on HandTracking to open the project Unreal
1. In Unreal Engine 4:
  1. Click Compile; the C++ project files should compile successfully
  1. Click Build; the project should build successfully

## Miro API Credentials

To call against the Miro API you will need to provide a valid API token:
1. See the [Miro developer quickstart](https://developers.miro.com/docs/rest-api-build-your-first-hello-world-app) for instructions on how to generate a new token.
2. Add the token to a file under `Handtracking/Config/.miro-api-credentials`
3. Confirm the API credentials are loaded correctly by running the game and confirming that you see a log line like `[MiroApi] Using API access token: <token>`

## Miro Board

The Board used is currently configured as the default value in the Whiteboard > BoardID variable. Make sure you use a board in the same account from which you generated an API token.
