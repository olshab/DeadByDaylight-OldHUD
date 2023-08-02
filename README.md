# DeadByDaylight-OldHUD
A project to revert all UI changes prior to update 4.5.0

# Preview UI right in Editor
You can check how HUD will look in-game by pressing Play on toolbar (choose it to Standalone mode to open it in Fullscreen with F11).

To add a new widget to viewport, create UserWidget, add ScaleBox to CanvasPanel, set its Anchors and Alignment as in your desired widget, set UserSpecified Scale to 0.5 and add you desired widget to that ScaleBox.
Then open LevelBlueprint and create your intermediate widget with "CreateWidget" node on Event Construct.

# How to package this project into a .pak file
Note that NOT all cooked assets should be included into .pak file.
Open DBDChunking.ini.
Folders and files marked as "DirectoriesToAlwaysCook" should be moved into pak from project cooked folder.
Files marked as "DirectoriesToKeep" should NOT be overriden
