# Expansion Custom Loading Screen
 Expansion Custom Loading Screen - Template

I'm assuming you already know how to use DayZ Tools.
 
- Download this source folder and add it to your P drive. 
- Add your screenshots to \Data\LoadingScreens , as PNG files
   Replace the example images with your own (Mine are just for reference)
- Open DayZ Tools and convert those files to EDDS format. (Google how-to)
- Edit \Data\LoadingScreens\LoadingImages.json . Add your screenshots.
- Add your logo to \Data\LoadingScreens as a PNG File.
- Convert the logo PNG file to EDDS format.
- Update \scripts\3_Game\CustomLoadingScreen.c with your logo Edds file name (Line 3)
- Edit \Data\LoadingScreens\LoadingMessages.json . Add your own messages.
- Repack , publish and enjoy.

Always open the PBO after building and check all the files that should be there, are there.
Add these in the General > List of Files to Copy Directly list in your PBO Manager..
*.emat;*.edds;*.ptc;*.c;*.imageset;*.layout;*.ogg;*.paa;*.rvmat;*.wrp;*.json

Ask for help in the comments below or join my Discord here: https://discord.gg/E8yn87Ahbx
