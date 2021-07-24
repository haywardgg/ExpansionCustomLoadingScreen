# Expansion Custom Loading Screen
 Expansion Custom Loading Screen - Template

I'm assuming you already know how to use DayZ Tools.

- Download and unzip this project to your P drive, then rename the folder to `ExpansionCustomLoadingScreen`.

I've included `mylogo.edds`, `screen1.edds` and `screen2.edds` in the `Data\LoadingScreens` folder for reference.
I suggest deleting everything in that folder except for the two .json files before continuing. 

- Add your screenshots and logo to `\Data\LoadingScreens` (edds format).
- Edit `\Data\LoadingScreens\LoadingImages.json` and update as necessary with your screenshot names.
- Update `\scripts\3_Game\CustomLoadingScreen.c` with your logo Edds file name (Line 3)
- Edit `\Data\LoadingScreens\LoadingMessages.json` and add your own messages.
- Optional: You can disable the logo in `CustomLoadingScreen.c` line 47 .
- Pack, publish and enjoy.

How to convert image files to Edds?  
In DayZ Tools Workshop, right mouse click the image file and choose "Register Resource and Import".

Always open the PBO after building and check all the files that should be there, are there.  
Add these in the General > List of Files to Copy Directly list in your PBO Manager..  
`*.emat;*.edds;*.ptc;*.c;*.imageset;*.layout;*.ogg;*.paa;*.rvmat;*.wrp;*.json`
