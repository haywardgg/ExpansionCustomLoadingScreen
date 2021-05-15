# Expansion Custom Loading Screen
 Expansion Custom Loading Screen - Template

I'm assuming you already know how to use DayZ Tools.

- Download this source folder and add it to your P drive. 

I've included `mylogo.edds`, `screen1.edds` and `screen2.edds` in the `Data\LoadingScreens` folder for reference.
I suggest deleting everything in that folder except for the two .json files before continuing. 

- Add your screenshots and logo to `\Data\LoadingScreens`. Remember to convert them to edds format.
- Edit `\Data\LoadingScreens\LoadingImages.json` and update as necessary with your screenshot names.
- Update `\scripts\3_Game\CustomLoadingScreen.c` with your logo Edds file name (Line 3)
- Edit `\Data\LoadingScreens\LoadingMessages.json` and add your own messages.
- Optional: You can disable the logo in `CustomLoadingScreen.c` line 47 .
- Repack , publish and enjoy.

Always open the PBO after building and check all the files that should be there, are there.
Add these in the General > List of Files to Copy Directly list in your PBO Manager..
`*.emat;*.edds;*.ptc;*.c;*.imageset;*.layout;*.ogg;*.paa;*.rvmat;*.wrp;*.json`

Ask for help in the comments below or join my Discord here: https://discord.gg/E8yn87Ahbx
