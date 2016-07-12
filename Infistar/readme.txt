/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com
	#2520
	
	synysterdemon@live.co.uk
	
	You should be able to download the latest update(s) on https://update.infistar.de/
	Do not ask me how to get a key, read on that page and you will know.
	However, updates and support are not part of the purchase,
	read more at the very bottom!
*/
/* *******************Developer : infiSTAR (infiSTAR23@gmail.com)******************* */
/* **************infiSTAR Copyright�� 2011 - 2016 All rights reserved.************** */
/* *********************************www.infiSTAR.de********************************* */
==================================================================================================================
IMPORTANT - DLLs:
===================
The .dll files are not essential and not part of the purchase.

You probably NEED "Visual C++ Redistributable Packages for Visual Studio 2013 - 32 Bit version"

ARMA_LOG.dll
is creating (All Logs can be found in the server .rpt file as well, if you do not want to use this dll that is fine):
A3_HACKLOG_DATE.txt
A3_SURVEILLANCELOG_DATE.txt
+[...],

ARMA_LOAD.dll
Used to check for existing updates and resolving steam names of players.
(more comming soon / so actually needed now for some of the functions)
==================================================================================================================
INSTALLATION:
01. Open the .zip file you have gotten from the store and go to "infiSTAR.de_Exile\SERVER_ARMA3_FOLDER\@infiSTAR_Exile\addons\a3_infiSTAR_Exile"
02. Open the "EXILE_AHAT_CONFIG.hpp" (do not edit the other files).
	- add your AdminUID(s)
	- check all the settings/options
	
	You need to set the serverCommandPassword to the serverCommandPassword you have in your servers Config.cfg
	if there is no serverCommandPassword in your Config.cfg yet, set it like:
	serverCommandPassword = "passwordhere";
	
	- It is the most important thing that you read carefully through the "EXILE_AHAT_CONFIG.hpp" and set all settings correctly for your server.


03. Now go to "infiSTAR.de_Exile\SERVER_ARMA3_FOLDER\@infiSTAR_Exile\addons"
	- make the folder you just changed the "EXILE_AHAT_CONFIG.hpp" in ("a3_infiSTAR_Exile") now to a pbo ("a3_infiSTAR_Exile.pbo") file.
		I always use PBO Manager (do a quick google search for it)
		as it allows me to simply right clickt the folder and "Pack into Pbo"

04. Move "a3_infiSTAR_Exile.pbo" on your gameserver, into your "Arma3Server\@ExileServer\addons" folder.
	So you have it in the same folder as "exile_server.pbo" and "exile_server_config.pbo"

05. Now go back to your "infiSTAR.de_Exile\SERVER_ARMA3_FOLDER" folder (in the unpacked zip you got from me)
	- move the dll files you can find there into your Arma3Server directory.

06. Go to "infiSTAR.de_Exile\MPMission"
	- move all the files into your currently used MPMission
	- Open the description.ext in your MPmission with a notepad
	
	- find "class CfgRemoteExecCommands {};" (might also have something within the {} curly brackets)
	- remove it!
	- now add these 2 lines in the file:
	#include "CfgRemoteExec.hpp"
	#include "infiSTAR_AdminMenu.hpp"

07. Copy the BattleyeFilters from "infiSTAR.de_Exile\BattleEye" over into your Battleye folder on the Server.
	Be sure to copy them into the correct folder (FYI: that folder will also be where you will find *FILTERNAME*.log files of Battleye).
	If Battleye causes you trouble, scroll down this readme and read the guide(s) or use one of the tools.
	I am not affiliated with Battleye in any way and if the filters provided by me are not working with your modified server / mission - you have to deal with it yourself.

08. DONE.


Good to know - Keybinds:
1. You can spectate by double clicking the name of a player in the admin menu.
2. Keybinds:
	F1 - Default AdminMenu Key
	F3 - Adminconsole / Debug Console
	F6 - Heal Yourself
	F7 - Heal & Repair withing 15m
	F8 - Flip CursorTarget Vehicle
	F9 - Show Gear of Player you are currently spectating (might close if player moves)
	F10 - Stop Spectating
	F11 - Add Ammo for current weapon
	CTRL & 1 - Light / Zeus
	SHIFT & 4 - Fly Up
	SHIFT & 5 - Teleport in looking direction (if enabled)
	7 - Unlock/Lock targeted Vehicle
	SHIFT & F2 - configviewer
	SHIFT & TAB - Open Map
	SHIFT & I - Show Info (Like Codes of Vehicles and Doors)
	DELETE - Delete CursorTarget
3. If the map is opened and you hold LEFT-ALT key, you can click on the map and teleport there!
4. If you are added in the "EXILE_AHAT_CONFIG.hpp" as an admin, you are able to change from admin to a normal player and back by typing !admin in the chat.
You may want to remove my UID from the _devs array.
==================================================================================================================
Installation-Guide (How to install):
English VIDEO GUIDE (better than TXT):
https://youtu.be/oNZMrs4G2ZE
	thanks TheFlyingJets!

German TXT GUIDE:
http://wiki.grischacraft.ch/hauptspiele/arma3/exile/hilfe/infistar
	vielen lieben Dank Grischabock!

Russian TXT GUIDE:
http://exilemod.ru/forum/index.php?/topic/172-infistar-ustanovka/
	thanks to Ispan55



BattlEye Filters are time consuming and have to be cahnged depending on every small change you do to your server/mission

These guides:
http://www.exilemod.com/topic/74-how-to-battleye-filters-do-it-yourself/?do=findComment&comment=1077
https://pastebin.com/9FBdjS1u

or these programs:
http://www.exilemod.com/topic/15394-battleye-automatic-script-exception-generator/
http://www.exilemod.com/topic/9708-battleye-filter-editor/

can help you solving the issue.
I am not affiliated with Battleye in any way and if the filters provided by me are not working with your modified server / mission - you have to deal with it yourself.


posting on the forums (follow this or you will just slow everyone down)
http://www.exilemod.com/forum/103-anti-hack/
because of a problem? let us know the following:
	- startup parameters for the server (-ServerMod and so on..)
	- server rpt file (complete file, not just a part of it)
	- client rpt file from you when you could not connect/had that error
	- infiSTAR Log files
	- might be needed: mpmission file
	- might be needed: gameserver provider (if it is not your own dedi box - if it is your box, tell us)
make sure to use the latest infiSTAR version!
==================================================================================================================
infiSTAR.de is used and supported by the biggest and best Communities!

I am doing this as a passionate 1-man Project.
The tool is actively developed and updated, trying to get the best
results vs Scripters, Hackers while implementing helpful features to administrate your server(s).

I try to help anyone who needs help although it is very easy structured and self-explaining.


If you have seen my tool on another server and you are not convinced about purchasing it yourself or what exactly it does, 
how it works  or just unsure if you want to purchase it for your server/community.
I can offer you to add your UID to a Test-server so you can at least get a feel of a few benefits you will get when having infiSTAR!

Due to the nature of this software, it needs to be updated quite often, because of new mods, mod updates or new hacks.
I provide Updates and support for my customers for more than 3 years now.
I am happy to go on providing Updates as long as it is possible for me.

Thanks for your attention.

P.S.
Thanks to those, who help(ed) me testing new features, bugs or sending in Hacks to check against them :)
/* *******************Developer : infiSTAR (infiSTAR23@gmail.com)******************* */
/* **************infiSTAR Copyright�� 2011 - 2016 All rights reserved.************** */
/* *********************************www.infiSTAR.de********************************* */