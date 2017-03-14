# Geralds_Journey
Welcome to Geralds Joyus Journey.
One thing anybody downloading this and using this in editor will need to do BEFORE starting is to change how cables initialize
when starting the editor. First, navigate to: C:\Program Files (x86)\Epic Games\4.13\Engine\Plugins\Runtime\CableComponent (Or similar).
Look for a file that is named: CableComponent.uplugin (This should be in the same place). Open it in notepad or notepad++ and look for
the line "LoadingPhase" : "Default" which should be at the bottom more or less. Change the "Default" part to "PreDefault". This should fix
any problems with the cables (and any error they may cause).
