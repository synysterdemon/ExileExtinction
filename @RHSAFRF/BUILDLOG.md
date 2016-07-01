
# Revision 1854 - Soul_Assassin

Last minute FT2 image update

# Revision 1853 - reyhard

@ string hotfix

# Revision 1852 - reyhard

@ random texture picking in eden


# Revision 1851 - Redphoenix

^ Mi24 control stick animation close T1634

# Revision 1850 - reyhard

@ fixed T80U nsvt missing geometry - close T1636
@ 9m112m didn't used new saclos guidance - close T1633
@ fixed ob681-2 shadow lod - close T1630
@ Ka-52 stick control reversed
^ increased 2a70 dispersion
^ calibrated UPK23-250 gunpods mem points


# Revision 1849 - reyhard

^ Gsh30/23 & FAB can now use BIS CCIP function

# Revision 1848 - reyhard

@ missing driver proxy in cargo lod of t80u series
@ fixed bmp3 bow gunner death anims
^ removed that fancy a3 targeting system that will be introduced in 1.60 patch

# Revision 1847 - reyhard

^ tweaked weapon groups, now bmp3 & bmd4 has main cannon & atgm in 1st group, autocannon in 2nd & pkt in 3rd grp

# Revision 1846 - reyhard

^ more tweaks to 1P63

# Revision 1845 - reyhard

^ changed name of 3bm46 to 3bm48
^ 9s475 code cleanup
^ tweaked 1p63 reticle

# Revision 1844 - reyhard

^ 9s475 test

# Revision 1843 - reyhard

@ small hotfix

# Revision 1842 - reyhard

@ findAngle error hotfix
^ bmp3 visors zoom level
^ added some debug information to 9s475 handler + weapons are restored after ui deinitialization (so ai can use missiles again)

# Revision 1841 - Soul_Assassin

^ 6Sh116 lod switching
@ Attempt fix shiny clan logo on EMR uniform

# Revision 1840 - Soul_Assassin

@ Added missing EMR fieldcap to VA

# Revision 1839 - Soul_Assassin

@ Fixed missing author macro from various Magazines and grenades

# Revision 1838 - Redphoenix

^ more Objects should now be visible in Zeus Missions

# Revision 1837 - Redphoenix

@ added Zeus do Takistan-Zeus (Missions)
@ added GREF Virtual Weapon Box to all Zeus missions (Missions)


# Revision 1836 - reyhard

^ Mi-24 use now new SACLOS guidance
^ Mi-24 9S475 handler now use same camera quirk fix as Ka-52
^ tweaked RWR script
@ SU-25 RWR
+ added incoming missile announcer to PAK-FA
^ vehicles spawned by rhs virtual garage are now destroyable
^ tweaked para drop waypoint behavior 
^ tweaked bmp-3 driver non pip view block
^ calibrated PKT FCS calculations
^ significant improved FCS calculations for BMP3 HE rounds
^ tank ATGMs are now launched at 3 degrees angle above line of sight

# Revision 1835 - da12thMonkey

@ Some weapons missing RHS author tags (PP-2000 pistol slot, TR-8 pistol slot etc.)

# Revision 1834 - Redphoenix

^ GaZ66 should now be able to repair more than just one BTR80

# Revision 1833 - Redphoenix

more CfgPatches 

# Revision 1832 - Redphoenix

^ CfgPatches Fixes

# Revision 1831 - sabre

[Textures] Adapted 74m textures to 100 series rifles.

# Revision 1830 - reyhard

@ fixed brake light not working due to being in camo selection
^ added wooden log to damageHide selection

# Revision 1829 - reyhard

@ scoped out non matching camo variants for bmd1 - close T1605

# Revision 1828 - reyhard

@ fixed GAZ66 R142 alpha sorting in res lods
@ legacy insurgents bmd inheritance

# Revision 1827 - reyhard

^ increased Vikhr HE effect
@ fixed ural missing geometry - close T1549
@ fixed SACLOS script producing error on dedicated server - close T1604

# Revision 1826 - da12thMonkey

^ Field Cap EMR Summer (Alt) moved slightly to the right, to fix clipping against the head mesh

# Revision 1825 - Soul_Assassin

@ Fixed EMR cap Alternative variant

# Revision 1824 - Soul_Assassin

@ Fix wrong BMP-3 hiddenSelection assignments - close T1598

# Revision 1823 - Soul_Assassin

@ Fixed wrong German BTR strings.

# Revision 1822 - reyhard

^ tweaked bmp3 FG & hitpoints
^ added one nonpip window for bmp3 driver
@ fixed maxPlayers param in zeus missions descripton.ext

# Revision 1821 - Stagler

^Moved Zsh-1-2 forward so fits better with A3 balaclavas

# Revision 1820 - reyhard

@ VG fixes

# Revision 1819 - Redphoenix

^replaced VVS with BIs Virtual Garage (thanks @reyhard)
+ GREF repawn Point

# Revision 1818 - reyhard

+ added hidden selections to BMP3 series
+ added sand textures to BMP3
+ added spall & engine destruction to BMP3 (WIP, will update it today again)
@ fixed destruction selections on BMP3 - close T1571
^ changed aksu74 recoil to mxc
+ added modified virtual garage function with global vehicle spawning


# Revision 1817 - Redphoenix

+ VVS to Zeus missions
+ GREF to Zeus missions

# Revision 1816 - gurdy

@ stringtable error

# Revision 1815 - j0zh94

^ Moved SSH so balaclava doesn't clip as much

# Revision 1814 - gurdy

- scope out EMR (Alt.) 

# Revision 1813 - gurdy

+ VSR 6sh92
+ VSR Field cap
+ EMR 6B13 variants

# Revision 1812 - reyhard

@ XEH fix

# Revision 1811 - gurdy

^ 6b27 emr tex

# Revision 1810 - gurdy

^ khaki M88 gear

# Revision 1809 - reyhard

@ zeus now starts on ground - radial blur fix

# Revision 1808 - reyhard

@ replaced aia tp cfg names with generic, a2 origin ones

# Revision 1807 - reyhard

@ enabled altis zeus mission

# Revision 1806 - reyhard

@ fixed SACLOS guidance not working on Cherno & other a2 maps - close T1583

# Revision 1805 - reyhard

+ added visual era destruction on T80U series - close T869
+ added hidden selections to T80U series
^ optimized T80U series resolution lods
^ changed gunner & commander get in memory points position for T-80 series
^ improved T80U series firegeometry - new ERA hitpoints & geometry improvments  - close T1353
^ T80U & T80A commander can now use binoculars when turned out
@ removed recompile param from AFRF


# Revision 1804 - Kllrt

@ Fixed RGO missing semicolon in rvmat

# Revision 1803 - reyhard

+ added cargo system to BMD-1/2
+ added engine smoke effect to T tanks, 2S25 & BMD4
@ fixed gap in T-72B3, T-90 & T-90A FG

# Revision 1802 - reyhard

@ added missing maxZeroing param to PK & SVD
^ fold script improvement

# Revision 1801 - reyhard

^ improved SACLOS guidance
^ optimized maljutka reload sequence
@ elevation indicator in ka52 showed wrong values

# Revision 1800 - reyhard

@ bmp1 turret interior not moving with turret
^ added FCS calculations to Ka-52 autocannon 
^ improved maljutka reload anim behaviour in MP

# Revision 1799 - reyhard

+ added afghan national army emblem to decals
^ tweaked BMD-1 maljutka relaod hatch interior
@ missing author in pbo prefix
@ M117 guidance fixed - close T1574
@ text on RGO/RGN grenades was inverted
^ added shadow lods to RGO/RGN placed grenades

# Revision 1798 - PuFu

AKM normals green chnl fix :((

# Revision 1797 - gurdy

@ possible fix for emr fieldcap 2 model

# Revision 1796 - Soul_Assassin

@ Fixed weird looking uv on RGN/RGO
^ Inverted grenade normals the right way around

# Revision 1795 - reyhard

@ BMP1D was missing top cargo positions get in memory points

# Revision 1794 - reyhard

+ added sand t72/t90 reskins
^ improved tank flag spawning in 3den
^ attempt to fix 9m14 reload bug in MP

# Revision 1793 - reyhard

@ fixed spawning tube upon magazine change
^ tweaked metis spent tube creation point

# Revision 1792 - reyhard

+ added maljutka reload anim for BMP1 & BMD1
^ SACLOS guidance improved in 3rd person view - there may be still quirks if you launch missile 3rd person view but launching in gunner view & then switching to 1st or 3rd person view should work - close T1567
^ some tweaks to spent tube script - still not fixed reloading different mags though

# Revision 1791 - gurdy

+ khaki gear updates

# Revision 1790 - Bakerman

+ RGN model
+ RGO model
@ VOG(s) texture paths

# Revision 1789 - PuFu

rakurs cleanup

# Revision 1788 - da12thMonkey

@ AKS-74UN .rvmat was being inherited from the rhs_weap_aks74u parent class hiddenselectionsmaterials entry.

# Revision 1787 - reyhard

+ spent tubes effect after atgm reload
@ BMP-2 launcher selection fix

# Revision 1786 - reyhard

+ added Konkurs reload anim for BMP-2
+ added engine destruction effect for BMD1/2 (also tweaked their hitpoints a little bit)
^ tweaked BMD1/2 destruction textures
^ reenabled spent caps hidding on BMD2M
^ changed GAZ66 & Ural groups so AA variant use trucks with Zu23-2
^ added res lods to some BMD proxies

# Revision 1785 - reyhard

@ rotors shadows didn't hide on ejection
^ MFD target pone correction
@ bad proxy in K36D5 seat firegeometry

# Revision 1784 - reyhard

^ calibrated & added AA markings for 1PZ32 sight on BTR-80
+ added gun limits for BTRs
+ added antenna anim for BTR-60
^ tweaked camera twiching when going into ground lock for AFRF vehicles


# Revision 1783 - Bakerman

^ Mi-24P Gsh-30-2K camera shake
^ SU-25 Gsh-30-2 camera shake
^ Ka-52 2A42 camera shake

# Revision 1782 - reyhard

@ missing file

# Revision 1781 - reyhard

@ fixed initSpeed thing that broke most of muzzle velocities (i.e. KPVT & PKT had same muzzle velocity because of that)
^ tweaked initSpeeds of GSh autocannons
^ calibrated PP61AM (merge from GREF)

# Revision 1780 - reyhard

i don't know what i just did

# Revision 1779 - PuFu

rakurs+NVG Z position

# Revision 1778 - PuFu

updated rakurs Z position

# Revision 1777 - reyhard

@ Ka-52 camera twitching when going into ground stabilization mode
@ Obyekt-681 commander proxy position
@ BMP1K missing hidden selection for wheels in 1st res lod
@ duplicated mesh elements for BMP2D in 1st res lod
^ Gunner cover texture 
^ Ka-52 ejection script multiplayer compatibility improvement
@ missing author tag in pboprefix of camo folders
+ added sand textures for bmp1/2, btr 70/80, ZSU, 2S3, Gaz66 & Ural by beaar

# Revision 1776 - Soul_Assassin

^ Closed gap on UAZ wheels

# Revision 1775 - Soul_Assassin

^ Asian faces removed from russian soldiers. They do not work with balaclavas well.

# Revision 1774 - bek

^ Tweaked 1PN138 position
close T1556

# Revision 1773 - PuFu

^ added nvg-14 + rakurs combo
first commit

# Revision 1772 - Soul_Assassin

^ Improve 6B47 lod switching.

# Revision 1771 - gurdy

^ more MSV tests

# Revision 1770 - Soul_Assassin

@ Attempt to fix some Russians speaking English.

# Revision 1769 - Soul_Assassin

Various stringtable fixes

# Revision 1768 - Soul_Assassin

^ Lowered Beret 4th variant
^ Texture updates

close T1427

# Revision 1767 - gurdy

^ emr field cap 2 texture

# Revision 1766 - Soul_Assassin

^ Stringtable for alternative EMR

# Revision 1765 - gurdy

^ MSV emr texture

# Revision 1764 - gurdy

+ config for new emr variant

# Revision 1763 - gurdy

^ emr textures

# Revision 1762 - bek

^ Changed AKS74u texture (still tweaking)

# Revision 1761 - gurdy

+ EMR (Alt)

# Revision 1760 - gurdy

@ msv emr

# Revision 1759 - gurdy

^ msv textures

# Revision 1758 - reyhard

+ added 9m111 handling for BMD-1P
@ BMD-1R rocket hidding

# Revision 1757 - Soul_Assassin

^ Ural gets new KAMA wheels

# Revision 1756 - reyhard

@ svds selector fix

# Revision 1755 - Soul_Assassin

@ Fixed missing PKT muzzle flash for T-90 and T-90A

# Revision 1754 - Soul_Assassin

@ SVDS NPZ small mesh issue fixed

# Revision 1753 - Soul_Assassin

^ Beanie stringtables added
^ Ballistic data correct for soft headwear in VA
@ ZSh-7A glass disappearing in distant lods

# Revision 1752 - Soul_Assassin

Upped required arma version to 1.58 - work on T1532

# Revision 1751 - j0zh94

^ Replaced 7.62x54R on PKM belt with new textures for visual update

# Revision 1750 - reyhard

@ t72b3 loadout hotfix

# Revision 1749 - bek

+ added PBS-4 to cfgPatches

# Revision 1748 - Redphoenix

^ L159 L39 decals

# Revision 1747 - Redphoenix

removed faulty path (forgot to upload)

# Revision 1746 - Redphoenix

^ RHS:GREF Grey Squadron decals file paths

# Revision 1745 - bek

^ Tweaked AKS-74un texture + rvmat

# Revision 1744 - ballistic09

+ CDF, ChDKZ, and camo tent textures

# Revision 1743 - reyhard

duh

# Revision 1742 - reyhard

@ kornet launch not producing smoke

# Revision 1741 - reyhard

+ added new scripted SACLOS guidance for ATGMs
@ fixed missing Kornet FG 
@ fixed T72B3 loadout
^ added spent cap effect to metis & kornet
^ auto track can now lock on all vehicles by default so it's possible to lock & fire tank atgm at slow flying helicopter

# Revision 1740 - reyhard

^ tweaked engine destruction effect
^ added atgm cap effect for brdm2 launcher
@ fixed missing mags error
@ fixed BTR gunner door string & get in/out anim

# Revision 1739 - gurdy

+ new 6b27 emr texture
@ emr cap 2 metal specularity

# Revision 1738 - reyhard

@ S5 mag string fixed
^ tweaked GSh23L firerate (faster 2 times, cus there are 2 gunpods)
^ tweaked upk23-250 gunpod muzzle flash
^ added engine smoke effect to russian wheeled vehicles
^ added option to turn off playing of gesture on deploy (PKM/PKP)

# Revision 1737 - bek

+ added aks74un and un_folded to cfgpatches
(whatever that is)

# Revision 1736 - bek

^ Updated virtualAmmoBox.sqf with aks74un (removed 74u_plum)

# Revision 1735 - reyhard

^ tweaked 1p63 reticle illumination

# Revision 1734 - reyhard

^ tweaked AK74 stock hand anim
^ tweaked AS-VAL grip hand anim
^ changed AK74 hand anim to stock one
^ tweaked BMPs destruction textures
^ tweaked BMPs hitpoints
@ varius fixes for BMPs
+ added turret servo sounds for BMPs, BMDs & BTRs
+ added proper handling of ATGM on BMP1-P
+ added spall simulation for BMPs
+ added KPVT (& PKT for BTR80A) shell ejection
+ added empty atgm tubes (not configured yet)
+ added generic decal reading function (no need to create separate init.sqf file anymore unless you want define some special effects)
^ added RPG backpack with only VL rounds
^ added spiral movement to tank atgm 
^ tweaked metis reload anims
^ revamped AT14 cover ejection script
@ 9M113 shadow selection
^ tweaked 6b13 weight

# Revision 1733 - PuFu

fixed illumination for rakurs (monkey FTW) and further nohq tweaks

# Revision 1732 - PuFu

rakurs ilum try + normal change (30% decrees)

# Revision 1731 - bek

^ aks74un section count

# Revision 1730 - Soul_Assassin

Hardcoded rvmat paths to 74UN models

# Revision 1729 - bek

^ tweaked aks74un icons

# Revision 1728 - bek



# Revision 1727 - bek

close T1445
+ PBS4 icons
+ proper AKS74un icons
+ Stringtable for PBS-4
^ Stringtable for AKS74u

# Revision 1726 - bek

^ Tweaked ak74u accessory textures

# Revision 1725 - Soul_Assassin

Force weapons2 rebuild to fix issue with AKS-74UN rvmats not loading

# Revision 1724 - Soul_Assassin

+ New wheel models and textures for UAZ
+ Replaced PGO scope on SPG9 (static and UAZ) with high res model in primary LODs
^ Lowered the Rakurs model slightly to sit better on NPZ rail

# Revision 1723 - da12thMonkey

Previous Rakurs repositioning hadn't applied to other LODs

# Revision 1722 - bek

+ AKS-74un
+ AKS-74un (Folded)
+ PBS-4 Suppressor
- AKS-74u (Plum)
- AKS-74u (Plum, Folded)

todo:

Stringtables, Inventory icons

# Revision 1721 - PuFu

updated rvmats and position for RIS

# Revision 1720 - da12thMonkey

@ Fixed - couldn't look through Rakurs-PM optics (added Empty model entry to modelOptics)
^ Standardised Rakurs opticsZoom values with other RHS collimator sights

# Revision 1719 - bek

^ AKS74u plum normal map; was missing ribs on mag

# Revision 1718 - da12thMonkey

^ PP-2000 can mount RHS picatinny optics, same as NPZ

# Revision 1717 - reyhard

@ rail fix

# Revision 1716 - MistyRonin

+ Add rakursPM to picatinny rail - Test try 2

# Revision 1715 - MistyRonin

@ Fix Russian picattinny class inheritance.

# Revision 1714 - MistyRonin

+ Add rakursPM to picatinny rail - Test try 

# Revision 1713 - PuFu

rollback on rhs_side_slot

# Revision 1712 - PuFu

^ added Rakurs-PM

# Revision 1711 - gurdy

@ forgot to add cap to model.cfg

# Revision 1710 - gurdy

+ new textures for EMR cap and model/tex for alternate

# Revision 1709 - da12thMonkey

@ Fixed - Kornet was disassembling to Metis bags

# Revision 1708 - reyhard

^ added spiral movment to 9m133 missile model + changed rocket motor effect
^ configured some more atgm variants
^ added manual reload for ATGMs
^ kornet now use proper missile model

# Revision 1707 - bek

+ stringtable for AKS74u (Folded) and Plum/Folded
+ AKS74u to virtualAmmoBox.sqf

# Revision 1706 - Redphoenix

^ closed lense cover for Kornet base backpack

# Revision 1705 - Redphoenix

+ Kornet Tube and Base as backpacks

# Revision 1704 - reyhard

+ added infantry paradrop waypoint
^ added some randomization to btr cargo anims
^ reduced Ka-52 laser cooldown time
@ CDF decals broken
^ experimental: tweaked cfgPatches for rhs_c_weapons/config.cpp

# Revision 1703 - reyhard

@ fixed kornet reload anims
^ added attribute to BTRs & BMPs to disable external mount
^ tweaked BMP front static anim

# Revision 1702 - Redphoenix

trigger jenkins - BUILD IT

# Revision 1701 - Redphoenix

just some kornet things for reyhard

# Revision 1700 - Soul_Assassin

Fixed beret configuration - close T1427

# Revision 1699 - Redphoenix

@ Kornet vehicle now uses Kornet launcher and mags

# Revision 1698 - reyhard

^ randomized static cargo anims & incorporated some il padrino poses
@ fixed getin order
^ improved geo & FG of bmps
^ tweaked Ob-681 proxies

# Revision 1697 - da12thMonkey

^ Altered Kornet gunner .rtm - head positioned for a better view and right wrist is a little less "stretchy" under IK

# Revision 1696 - Redphoenix

+ empty shadowLOD10


# Revision 1695 - reyhard

@ inverted kornet maingun axis

# Revision 1694 - Redphoenix

@ Kornet String
@ Kornet Reticle

# Revision 1693 - reyhard

^ tweaked IK anims for Kornet
@ fixed changed inherited gunner point - close T1501
^ tweaked PKM feedtray cover anim

# Revision 1692 - Redphoenix

@ metis gunnerview for Kornet
^ fixed wrong mesh for trigger & triggerhouseing for Kornet

# Revision 1691 - da12thMonkey

^ Improved Kornet gunner's hand IK - now follows rotation of the hand-cranks as well as the overall turret traverse

# Revision 1690 - da12thMonkey

+ New gunner .rtm for 9К135 Kornet and hand IK
@ Kornet faction classes parent changed from rhs_Metis_Base to rhs_Kornet_Base

# Revision 1689 - gurdy

+ new 6sh92 emr textures

# Revision 1688 - Redphoenix

+  gunner proxies for Kornet

# Revision 1687 - Redphoenix

+ CDF low-viz roundel and training squadron decals

# Revision 1686 - Bakerman

Kornet ammo & mags

# Revision 1685 - Bakerman

Kornet string entries

# Revision 1684 - Soul_Assassin

Change to decal index

# Revision 1683 - Redphoenix

+ 9K133 Missle Launcher Kornet
+ 9M133 missile model

# Revision 1682 - Redphoenix

removed accidental obj upload

# Revision 1681 - Redphoenix

+ Berets: VDV v3, MP v2, VP - T1427

# Revision 1680 - Soul_Assassin

^ CDF roundels added to Aviation

# Revision 1679 - Soul_Assassin

@ Small spelling error in SU-25 attributes.

# Revision 1678 - Soul_Assassin

+ Added various CDF decals

# Revision 1677 - PuFu

@ fixed Gorka's wound textures
close T1446

# Revision 1676 - bek

^ Added AKS74u plum rvmat (I always forget to add one file...)

# Revision 1675 - Soul_Assassin

Finalized EMR uniform.

# Revision 1674 - gurdy

+ emr MSV texture

# Revision 1673 - reyhard

+ added cargo system to BMP-2 (WIP)
+ added rear doors anims to BMP-1 (heavily wip) & BMP-2
+ added experimental Obyekt 681-2 IFV (WIP)
@ fixed crazy sections count for BMP-2
^ optimized BMPs resolution lods
^ renamed BMP-2 (e) to BMP-2 (obr. 1980g.) & regular BMP-2 to BMP-2 (obr. 1986g.)
@ fixed rhs_weap_902a->Mode_Burst, by rhsafrf\addons\rhs_sounds\config.bin/CfgWeapons/rhs_weap_902b/Double/
^ tweaked Su-25 MFD
^ tweaked Btr-60 & 80 eden attributes
^ tweaked cargo anims for Ural & Gaz-66 - no more rifles clipping through the roof
^ tweaked malyutka res lods
^ added cap disappearing effect to BMP-2 ATGM
@ fixed AGS-30 dissapering in 2nd res lod
^ callibrated RPG-26 & RShG-2 ironsights
@ missing DLC icon for Zu-23-2

# Revision 1672 - bek

+ Added AKS74u (Plum) variant

# Revision 1671 - bek

^ Copied AKS74u shadow tweak to folded version

# Revision 1670 - bek

^ Tweaked AKS74u shadow lod (fixed mag shadow clipping)

# Revision 1669 - Redphoenix

^ raised height of VDV beret 2 a bit

# Revision 1668 - Redphoenix

+ 2nd VDV beret - T1427

# Revision 1667 - reyhard

+ added initial eden configuration for BTR-70. btr-80 & 60 need some tweaks - close T1337
^ tweaked AKSU-74 hand anim
@ fixed broken PGS64 shadow 
@ fixed pso script that was broken once again
^ added AK-104 & 105 as placeable object
@ some fixes to tochka-u fire waypoint
^ changed behaviour or Ka-52 blades physic
^ tweaked once again Ka-52 ejection angle
@ removed laser lock from FAB-250 bombs
^ decal related variables used in 3den are no longer synchronized
^ RPG-26 & RShG-2 can now be packed to bag pack 
^ reduced proxy ammount on T-72 obr 85
@ fixed "[weapon rhs_weap_akms]: item[rhs_acc_dtk] does not match to this weapon!" errors for akm, svd & asval
^ reduced poly count on last res lod of emr uniform

# Revision 1666 - reyhard

^ tweaked Ka-52 ejection angle
^ added main & tail rotor centers to Mi-8 - enabling rotor breaking upon collision 
@ Mi8MT & MTV-3 crew fans not changing to blured version

# Revision 1665 - bek

^ Tweaked AKS74u textures on dev build lighting

# Revision 1664 - Soul_Assassin

^ EMR uniforms fully replaced
^ Stringstable entries for Gorka and Izlom

# Revision 1663 - reyhard

^ changed ejection condition - it's still not correct since it should be possible to eject even on ground

# Revision 1662 - reyhard

@ samshin hotfix

# Revision 1661 - reyhard

ASK74u:
@ wrong selection name in model cfg (magazine rotation during reload)
^ added bolt movement during reload
^ added separate reload anims with moved left arm to the rear, so it matches magazine position of weapon

# Revision 1660 - reyhard

+ first version of Ka-52 ejection system
@ spare wheel alpha sorting in cargo lod
@ fixed Mi-24 & Ka-52 blade destruction upon impact - missing proper blade center memory points
^ renamed Su-25SM to Su-25 to better represent current model available in game
^ removed pilot twitching/leaning in ejection seats
+ added Khaki fieldcap for M88 uniform (thx Gurdy!)
^ some fcs tweaks

# Revision 1659 - Soul_Assassin

Fixed UV for insignia on EMR uniforms

# Revision 1658 - sabre

[Textures] EMR edit of Gurdy original version 1

# Revision 1657 - gurdy

@ new EMR texture version 3

# Revision 1656 - reyhard

- removed wrong .tga texture

# Revision 1655 - Soul_Assassin

Added patches to EMR uniform (can someone plz check? Not sure if works) - work on T1208

# Revision 1654 - Soul_Assassin

+ Added green and visored ZSh-7A helmets

# Revision 1653 - Soul_Assassin

Added lods to EMR uniforms

# Revision 1652 - Soul_Assassin

^  Added hiddenSelections to balaclavas

# Revision 1651 - reyhard

^ another round of safemode improvements 
@ fixed turned in t-72/t-90 animations
@ typo in 9m124 ammo name
@ Su-25 ejection seat is now hidding properly - close T1475
@ fixed Tigr destruction effects - close T1476
@ Tigr-M gunner turned in view
^ tweaks to Tigr-STS weapon changing script
^ added AKS74u to armored crewmans 
^ added ability to hide commander nsvt on T80U tanks

# Revision 1650 - Soul_Assassin

Added vogless 6Sh116 - close T1452

# Revision 1649 - reyhard

@ PAK-FA pilot anim is now properly looped + proper death anim added
@ holdster anim of UPK23 pod caused errors with Ka-52
^ safemode & PSO-1 script now properly deinitalize after embarking vehicles

# Revision 1648 - Soul_Assassin

^ 6Sh116 texture tweaks and lods - work on T1452

# Revision 1647 - reyhard

^ converted vikhr guidance script to per frame solution
@ t80 ammo slot missing
^ improved autotrack adjustments & replaced lineIntersect with checkVisibility command
^ various small adjustments to Ka-52 scripts

# Revision 1646 - Soul_Assassin

Reverted the PSO-1M2-1 position

# Revision 1645 - reyhard

^ reduced secondary explosion for Tigrs
@ some tigr fixes

# Revision 1644 - reyhard

+ eden integration for russian tanks - custom ammo, habar control, etc.
^ tweaked ballistic calculations
^ added M112M2 & M124 atgms cfgs
@ fixed pso-1m21 used wrong mem points
^ tweaked Tochka-U special waypoints
@ some FCS were missing max lase range + tweaked minimum lase range for few others
^ added russian federation ground forces honor emblem
@ fixed not all decals visible on T80B series
@ fixed serious flaw in bmp3 gunner/commander pip handler causing fps drop
^ improved snorkel script performance
@ bmp3 used wrong ballistic callculator
^ overall script performance tweaks
^ added honor emblem to T80U on IR lamp


# Revision 1643 - gurdy

+ version 2 of new EMR texture

# Revision 1642 - Soul_Assassin

^ PSO-1M2-1 position moved to align with PSO-1 - fixed T1444

# Revision 1641 - gurdy

^ 6B23 olive 
^ 6B7-1M olive
^ 6sh116 flora 

# Revision 1640 - gurdy

+ Added flora and OD 6sh116 pouches

# Revision 1639 - reyhard

+ added tochka-u special waypoints - deploy & fire
+ added eden attributes to bmp & bmd^ added turret emblems to BMP-1 
@ fixed BMP-2 turret emblems visibilit (still needs tweaking)
@ fixed brm1k wrong inheritance in model.cfg
^ tweaked Ka-52 & Mi-24 speed
^ tweaked vikhr missile stability
^ added door anims to ural/uaz eden attributes
^ replaced animate with animateSource (1.58 required)
^ some scripts optimizations

# Revision 1638 - Soul_Assassin

6B7-1M balaclava texture fixed - T1454

# Revision 1637 - gurdy

+ emr uniform test textures

# Revision 1636 - Soul_Assassin

Rescaled 6Sh116 pouches - work on T1452

# Revision 1635 - reyhard

+ added eden attributes to UAZ, Ural, ZSU23-4, T-50, Su-25, Mi-24, Mi-8, Ka-52, 2S3, BMD1/2/4, BMP-3, T-72/T-90 [on basic level now],PTS-1 [with ability to attach cargo], Tochka-U [with ability to deploy Tochka], Tigr & Sprut
^ various script improvements
^ increased lethality of R77/R74 AA missiles by simplyfing their geometries & adding autocenter=0 param (dunno which made it working it though)
@ fixed ZSU23-4 disappearing hatch after destruction
^ updated destruction textures for ZSU23-4 & BTR-60
@ BMD-2 had some missing decals due to alpha sorting
^ added honor emblem on IR lamp for T-72 obr84-89
^ improved nuke script fx & stability
^ added some monitor elements to Ka-52
^ some preparation for Ka-52 eject system


# Revision 1634 - Soul_Assassin

6Sh116 improvements: tweaked textures, pouch scale corrected, hidden selections

# Revision 1633 - Soul_Assassin

^ Second iteration of 6Sh116 weighing
@ Fixed 6B47 shadows

# Revision 1632 - reyhard

^ updated scopes secondary eye mem points
@ pso1 handler script didn't changed scope variants properly 

# Revision 1631 - reyhard

^ added ability to make some adjustments while in tracking mode

# Revision 1630 - reyhard

@ small hotfix

# Revision 1629 - reyhard

+ first upload of Ka-52 remake - new UI, animations, fixed HUD, added Shkval
+ Vikhr burst mode
^ 9k114 & other similiar atgms use bis rocket model temporarily (since it's better than current malyutka model)
^ changed T-50 HUD color to green
^ Su-25 CAS variant with 160 S-8 rockets
@ fix to Mi-24 atgm fix
@ PSO-1 illumnination script affected other ui


# Revision 1628 - j0zh94

^ Improved SSH specular map

# Revision 1627 - Bakerman

^ RHS_fnc_firedSaclos now uses cursorObject command

# Revision 1626 - MistyRonin

+ Add VMF Recon groups

# Revision 1625 - reyhard

+ added hidden selections to PKM, PKP, AKM, AS VAL/VSS & AKS74U 
+ added commander FFV (or ability to use binocular only in case of tanks with commander shield) to T-72/T-90 series
^ tweaked 2s25 & BMD-4 FFV animations
@ fixed D-30 empty last res lod
@ fixed wrong inheritance of akm w/ gp25 in model.cfg


# Revision 1624 - Soul_Assassin

+ Added 6B23 with 6Sh116 (first iteration)

# Revision 1623 - Soul_Assassin

Finilized new EMR weighting

# Revision 1622 - reyhard

^ aligned PAK-FA MFD
+ added seat ejection script to PAK-FA & SU-25
@ SU-25 instruments flickering during night
^ new anims for PAK-FA & SU-25 pilot
^ improved performance of PAK-FA scripts (initialzation/handling)
^ increased pip windows resolution in PAK-FA pilot view (map & mirrors are now sharper)
+ added master safe mode to Su-25 & PAK-FA
^ removed parachutes from jet pilots
^ changed Su-25 MFD - probably going to be replaced with some sort of script since it's impossible to program CCIP into arma MFD's
^ gunner of Ka-52 is now copilot

# Revision 1621 - reyhard

get cat test

# Revision 1620 - Soul_Assassin

wa[Testing stuff6]
^ Improved bla
+ Added some more bla
wooo



# Revision 1619 - Soul_Assassin

wa[Testing stuff5]
^ Improved bla
+ Added some more bla
wooo



# Revision 1618 - Soul_Assassin

[Testing stuff4]
^ Improved bla
+ Added some more bla
wooo


# Revision 1617 - Soul_Assassin

[Testing stuff3]
^ Improved bla
+ Added some more bla
wooo


# Revision 1616 - Soul_Assassin

[Testing stuff2]
^ Improved bla
+ Added some more bla
wooo


# Revision 1615 - Soul_Assassin

[Testing stuff]
^ Improved bla
+ Added some more bla
wooo


# Revision 1614 - reyhard

@ removed bysta proxy from 3 & 4 res lod

# Revision 1613 - ballistic09

@ Fixed wrong model for VDV Flora uniform

# Revision 1612 - ballistic09

@ Fixed wrong model for VDV Mountain Flora uniform

# Revision 1611 - Soul_Assassin

^ Adjusted vest positions to fit uniforms better - close T1426
@ Fixed 6B26 VA RHS icon

# Revision 1610 - reyhard

^ realigned as val/vss ironsights
^ tweaked pkp/pkm & svd hand anim (wrists position)

# Revision 1609 - Soul_Assassin

More fixes on EMR weights.
^ Adjusted 6B23 position for testing.

# Revision 1608 - MistyRonin

^ Changed AFRF CTI name from Discontinued to Legacy

# Revision 1607 - MistyRonin

@ Unhidden CTI AFRF groups (switched name to discontinued)

# Revision 1606 - MistyRonin

- Hidden AFRF CTI Groups

# Revision 1605 - Soul_Assassin

^ Small EMR weight adjustments - work on T1208
@ PP-2000 has proper DLC icon now

# Revision 1604 - Soul_Assassin

Some EMR weighing fixes - work on T1208

# Revision 1603 - Soul_Assassin

+ New EMR uniform - work on T1208

# Revision 1602 - reyhard

^ increased bmp track armor - close T1412
^ tweaked tigr sts turret handling
^ added reloaded event handler which removes spent magazines from tigr (works with 1.57+, doesn't cause problems on stable)
^ added placeable magazines
^ added ground magazine models for pya, pm & pmm magazines
^ changed Cars 2d editor vehicleClass into Car (couldn't pick rhs cars otherwise)
^ added missing safemode handler for pistols

# Revision 1601 - bek

^ PM safety animation (Pistol safety doesn't seem to engage yet but the anims ready for when it does)

# Revision 1600 - MistyRonin

+ Add vehicle VMF groups & revamp the infantry one

# Revision 1599 - Bakerman

^ 9x39mm ballistics

# Revision 1598 - reyhard

@ safemode script for russian weapons
^ tweaked asval & vss fire selector anims
^ improved magazine movement during reload anim for PM, PMM & PYa
@ added missing mass to PM, PYa & PP2000
@ fixed cfgPatches for rhs_c_airweapons/config.cpp
@ changed uvsource in rvmats from "tex1" to "tex"
@ added some missing items in virtual ammbox

# Revision 1597 - reyhard

@ bmd-4 max gun elevation

# Revision 1596 - reyhard

^ weapon save mode system framework
^ tweaked two handed ak anim (used now as a placeholder on svd - at least sound & anims are synced)
^ tweaked svd reload anims
@ commander turret lock t90 while driver is turned out

# Revision 1595 - Soul_Assassin

Test

# Revision 1594 - reyhard

^ changed PK 7.62 strings
^ radio voice protocol improvements
^ added dlc mark to identities 

# Revision 1593 - reyhard

^ improved script handling after loading game

# Revision 1592 - reyhard

^ improved crates textures (black shadows removed from the bottom) & physx lods
^ improved weapon scripts
+ added ability to specify if disposable launchers are thrown away automatically after changing weapon in rhs menu options (by default turned on)

# Revision 1591 - Soul_Assassin

+ Added CDF aviation umber set

# Revision 1590 - reyhard

@ Mi8-AMTSh tail rotor didn't changed into blur mode
^ tweaked Ural phyxs lod
@ hidden pp2000 from showing up in holsters
^ script optimizations
@ fixed "tex1" references in rvmats

# Revision 1589 - Soul_Assassin

FT2 picture added to main

# Revision 1588 - reyhard

^ added reslods to russian weapon/ammo crates
+ added hand anim handling script for PK
+ added folding script for PP-2000
^ updated virtualAmmoBox.sqf
^ updated rhs_c_weapons cfgPatches
+ added new magazines to PKM/PKP

# Revision 1587 - bek

^ Changed AKS74u skeleton name to be more unique, and altered zasleh to muzzleFlash in model.cfg

# Revision 1586 - reyhard

+ added PP-2000
@ fixed 7.62x54r 100rnd mag strings

# Revision 1585 - Bakerman

Gsh23L burst set to 4

# Revision 1584 - bek

^ Tweaked AKS74u & Makarov PM material, model


# Revision 1583 - reyhard

^ modified Ural & Gaz-66 physx lods

# Revision 1582 - reyhard

@ primaryObserver workaround experiment
- removed repeatString function
^ changed 57-N-323S penetration

# Revision 1581 - MistyRonin

- Hide AFRF CTI SPG9

# Revision 1580 - reyhard

+ added retexturability for BMD4

# Revision 1579 - bek

^ Makarov PM holster PointerSlot
^ Makarov rvmat

# Revision 1578 - Soul_Assassin

@ Fixed EMR fieldcaps - close T1364
- Removed desert EMR fieldcap

# Revision 1577 - reyhard

^ added platoon & army labels to decal settings

# Revision 1576 - reyhard

@ Gaz66 attributes typo
@ UAZ open lights were always lit

# Revision 1575 - reyhard

^ added tail_decals section to Su-25
^ added VG/eden textureSources for ZSU
^ changed Ural plate number font
^ improved 122mm casing behaviour
^ tweaked D30 packing script
^ added hand anims for D30 handles
^ replaced getRandomArElement function with selectRandom introduced in 1.56
^ Tigr-STS & M has now TFAR LR radio
@ fixed T90 wind sensor texture bug - close T1371
@ fixed NSVT feedtray issues - close T1374
^ WIP work on integrating 3den into our vehicles: Gaz-66 received option to hide spare wheel & light cover, change plate number & font type and ability to deploy R142N mast. more to come
@ fixed 1P63 transformations
@ fixed missing uv set in 1st res lod for berets (diagnostic exe spam)

# Revision 1574 - bek

RSP-30 flare recoil fix
close T1372 (credit to soulassassin for figuring it out)

# Revision 1573 - Stagler

*Added subdued VMF Shevrons for use with EMR uniform (when finished)

# Revision 1572 - MistyRonin

+ First batch of VMF Recon configs.

# Revision 1571 - Soul_Assassin

AS Val and VSS grip systems finalized - close T1134

# Revision 1570 - Soul_Assassin

@ Small missing polygon on T-72/T-90 models - close T1311

# Revision 1569 - bek

aks74u shadow fixes

# Revision 1568 - Bakerman

^ Simple HEAT simulation for vehicles without composite armour

# Revision 1567 - Soul_Assassin

Finilized 6B7-1M helmet- added lods and ESS versions - close T277

# Revision 1566 - bek

6b4 / NVM-14 nightvision base block piece
close T1358
pgs64_74u shadowvolume lods

# Revision 1565 - Bakerman

9M120 magazine for superhind

# Revision 1564 - reyhard

@ CBA compatibility attempt - T1361

# Revision 1563 - Soul_Assassin

NS3 model tweaks and 6B47 texture/mat tweaks.

# Revision 1562 - Soul_Assassin

+ Added NS-3 goggles - close T1317

# Revision 1561 - bek

@ missing semicolon

# Revision 1560 - gurdy

@ more texture tweaks and fixes

# Revision 1560 - gurdy

@ more texture tweaks and fixes

# Revision 1559 - gurdy

^ 6b7 textures

# Revision 1558 - gurdy

@ 6b23 texture fixes


# Revision 1557 - gurdy

^ RU 6B23s

# Revision 1556 - Redphoenix

^ Lots of missing stringtables added

# Revision 1555 - Soul_Assassin

Removed balaclavas from hiddenselections on 6B47

# Revision 1554 - MistyRonin

^ Add VMF crew for the VMF vehicles. 

# Revision 1553 - reyhard

@ bmp3 SpeechVariants
@ Sprut-SD brake lights always lit

# Revision 1552 - reyhard

^ improved tochka-u missiles fuse reliability by using per frame handler
^ user action visibility tweaks

# Revision 1551 - reyhard

@ fixed btr80 pip memory points
^ changed modelToWorld to modelToWorldVisual
^ changed FCS font to purista

# Revision 1550 - Soul_Assassin

Finalize 6B47 - close T802

# Revision 1549 - Soul_Assassin

6B47 material/normal and shadow tweaks. Reduced nohq and smdi resolution.

# Revision 1548 - Soul_Assassin

+ Added 6B47 helmet

# Revision 1547 - reyhard

^ eden categories for placeable items

# Revision 1546 - Bakerman

Added a catch all to the CM interface

# Revision 1545 - Bakerman

^ Brand new CM interface for improved performance and reliability

# Revision 1544 - bek

Reverted AKS74u 'eye' memorypoint to Reyhard's version

# Revision 1543 - gurdy

@ match uniform more closely

# Revision 1542 - gurdy

@ Attempt at fieldcap material fix

# Revision 1541 - gurdy

+ New EMR Field Cap

# Revision 1540 - bek

added aks74u icons that I forgot to tag (derp)

# Revision 1539 - reyhard

^ ramp binding for AFRF

# Revision 1538 - bek

close T1132

Updated AKS74u icons/stringtable/textures

# Revision 1537 - Soul_Assassin

Perst-1IK no longer references the flashlight script - T1354

# Revision 1536 - Redphoenix

^ corrected Perst1IK rotation
^ laser memory points

# Revision 1535 - Redphoenix

+  Perst-1IK - close T1137

# Revision 1534 - bek

Significantly reduced SVD section count (20 to 2 for SVDM, 10 - 4 for SVDS)

# Revision 1533 - bek

^ Tweaked AKS-74U model/tex/cfg

Increased dispersion, removed 'ammo' named selection, slight texture tweak

# Revision 1532 - Bakerman

^ Decreased suppressor velocity increase to 1%

# Revision 1531 - Bakerman

@ Suppressors no longer modify hit values

# Revision 1530 - reyhard

removed uber params from aks74u

# Revision 1529 - bek

^ Tweaked AKS74u (Folded) shadow/geo/firegeo to match the folded stock

# Revision 1528 - bek

+ Added: AKS-74U (Folded)

# Revision 1527 - Soul_Assassin

Tweaked NVG mat - close T1352

# Revision 1526 - Bakerman

T1303 T-80UK memory points fixed
T1212 T-80UK FG for shtora

# Revision 1525 - reyhard

^ tweaked aks74u config 
^ added zeroing mem points for aks74u
@ fixed aks74u muzzle flash

# Revision 1524 - bek

T1352 quick attempt, feel free to alter

(reduced spec, gloss, fresnel)

# Revision 1523 - reyhard

@ muffled sound fix (works with 1.56)

# Revision 1522 - bek

^ Tweaked: AKS-74u textures + ironsight

# Revision 1521 - reyhard

^ experimental turret locking tweak

# Revision 1520 - reyhard

@ autoloader tweaks - close T1329
^ added workaround for broken mi24 atgms

# Revision 1519 - MistyRonin

+ Add AI Weapon AKS74U + Sup

# Revision 1518 - MistyRonin

^ Add AKS74U to Russian armed crews. 

# Revision 1517 - bek

aks74u texture update + stringtable

# Revision 1516 - Kllrt

Added Tan DF15 uniform variant

# Revision 1515 - bek

T1132 progress: Initial injection of aks74u

Textures are still a work in progress, as are minor details like UI images, stringtable entries, model.cfg tweaks ...

# Revision 1514 - Kllrt

Fixed AFRF stringtable

# Revision 1513 - PuFu

tweaked VSS stock texture
added grip hand anim (thanks to il_padrino)

# Revision 1512 - MistyRonin

+ Add Eden group images for AFRF
+ Add Eden categories for AFRF

# Revision 1511 - reyhard

^ enabled proxy retexturing for t72, spurt sd & a2 port vehicles
+ added 122mm spent shell model & textures

# Revision 1510 - reyhard

@ rpg7 rounds scope
^ ui initializaion fix
^ tkn3 uv mapping tweak

# Revision 1509 - Soul_Assassin

^ RGN and RGO stringtables added - closes T1327

# Revision 1508 - Redphoenix

^ player should now see T-50s wingtips close T1344

# Revision 1507 - Redphoenix

^ Updated ak74m_plum_co.paa texture (by Blackmetal)
^ Desatureated Plaum magazine for AK74 Fullplum (by Blackmetal)

# Revision 1506 - gurdy

@ potential VMF uniform fix

# Revision 1505 - MistyRonin

+ VMF infantry groups
^ First batch of Russian VMF configs
^ First addition of Eden subcategories for the Russian Forces
^ First addition of Eden group icons for the Russian Forces

# Revision 1504 - Soul_Assassin

+ Added Flora VMF uniforms - close T1326

# Revision 1503 - Bakerman

Fixed RGNO issue caused by script update

# Revision 1502 - Bakerman

Improved and fixed keyEvent functions

# Revision 1501 - Bakerman

+ RHS_fnc_addKeyEvent
+ RHS_fnc_removeKeyEvent

# Revision 1500 - Bakerman

^ HEAT warhead simulation performance & reliability

# Revision 1499 - reyhard

^ some FCS tweaks
^ tweaked 3UBR6/8 timeToLive
^ 2016 update package - changed bmd4 loadout from 3UBR6 to 3UBR8
^ lined up igla with eye memory points
+ added new TKN3 reticle with calibrated (more or less) range finder 

# Revision 1498 - Redphoenix

+ 6B7-1M in combination with balaclavas and/or covers
^ improved some 6B7-1M files

# Revision 1497 - reyhard

^ tweaked T-72 FCS
^ tweaked 1g42 & essa FCS
@ fixed ak74 plum stringtables

# Revision 1496 - Bakerman

@ 3UOF17 & 3UOF19 can now reach max range

# Revision 1495 - Bakerman

@ Lowered 2A70 ammo velocity to correct values
^ 3UOF19-1 airburst script performance & reliability
^ BMP-3 Vesna-K & BMD-4M loaded with 3UOF19-1 airburst shells
^ 2S25 Sprut-SD loaded with 3BM46 shells

# Revision 1494 - Redphoenix

^ Corrected the new AK74 textures

# Revision 1493 - Redphoenix

@ Finalizing VDV and MP berets - close T443
^ Misty's Stringtable.xml mishap BVEUCASE HE'S NOT USING STRONGFORGE GODDAMIT

# Revision 1492 - Redphoenix

^ Updated Black AK-74M textures by Blackmetal

# Revision 1491 - Redphoenix

^ inverted Y-channel for new AK74 textures

# Revision 1490 - Redphoenix

@ 6B7-1M Padding Issue

# Revision 1489 - gurdy

@ 6b7-1m cover

# Revision 1488 - reyhard

^ added new pictures for gaz66 w/ zu23 & tochka-u
- removed nvg from msv flora units
^ tweaked ak stock anim

# Revision 1487 - gurdy

@ EMR tweaks again

# Revision 1486 - gurdy

^ 6b7 texture updates

# Revision 1485 - Redphoenix

+ 6B7-1M Cover version
^ 6B7-1M coverles version model fixes
^ VDV beret update
+ MP beret
+ author tags to ZSH

# Revision 1484 - Bakerman

One last RGNO scrip fix 

# Revision 1483 - Bakerman

More RGNO script improvements

# Revision 1482 - Bakerman

Another RGNO impact script improvement

# Revision 1481 - Bakerman

^ RGNO impact script

# Revision 1480 - Bakerman

Corrected some tiny mistakes in last shtora commit.

# Revision 1479 - Bakerman

^ New shtora lights
@ Lowered HE & HEAT ricochet angles
T1303 - Added light p3d, still needs thermal flares

# Revision 1478 - reyhard

^ improved RPG7 sight script stability
^ potential fix for wrong init elev
^ reverted tracer settings for yakb

# Revision 1477 - MistyRonin

@ Fix line feed in AFRF Rifles config

# Revision 1476 - MistyRonin

+ Add AK74M Full plum GP-25 variants 

# Revision 1475 - Redphoenix

+ full plum AK74 textures

# Revision 1474 - reyhard

^ dual ammo for yakb
@ destruction rvmats for gaz-66 w/ zu23-2

# Revision 1473 - reyhard

@ fixed Beryeza light
^ readded barrel recoil for zu23-2
^ changed recoil for folded AK74m
@ fixed AKMS shadow
^ temporary changed spg9 sound to rpg (couldn't stand it more)
+ added Gaz-66 with ZU-23-2

# Revision 1472 - bek

@ Fixed AFRF weapon recoil (T648)
I'm yet to download USAF dev

# Revision 1471 - reyhard

@ mi24 rotor shadow fix
^ zeroed 1pn22m1 sight
^ zeroed PGO9 sight
@ removed balistic computer & canLock from 2a28 grom
^ tweaked OG & PG9/15 ballistic
+ added SPG-9M with PGOK9 sight
+ added 1pn22m2 sight for bmp1
^ tweaked Mi24 control block script
^ removed inverted shadow from PKAS & 1P63

# Revision 1470 - reyhard

+ added KPS-53AV collimator sight & 9S475 missile reticle for mi24
@ ural w/ zu23 ammo visiblity 
@ added baseweapon to val grip
^ experimental dispersion increase for russian tank cannons
^ increased dispersion of yakb

# Revision 1469 - reyhard

bye bye

# Revision 1468 - reyhard

+ added hidden selections for 2S25
@ added missing files
^ tweaked gaz-66 driver anim 
@ fixed Mi8amtsh reticle selection
@ fixed Tochka-U camo selection

# Revision 1467 - Redphoenix

^ higher normal map resolution for VDV beret
^ size and fit of VDV beret

# Revision 1466 - reyhard

^ tweaked lead script
^ added fire on move script
@ removed empty res lods from 6b7
@ fixed 6b7 string
^ improved thermal screen visuals

# Revision 1465 - PuFu

scope for arsenal...

# Revision 1464 - PuFu

added grip versions

# Revision 1463 - PuFu

updated configs and strings

# Revision 1462 - PuFu

fix typo

# Revision 1461 - PuFu

+ added VSS with frontgrip
+ added AS VAL with frontgrip

# Revision 1460 - reyhard

@ TEST - replaced decal init from call to spawn

# Revision 1459 - reyhard

^ tweaked PKM nohq
^ tweaked BPK-1-42 reticle

# Revision 1458 - reyhard

@ fixed pkm ironsight bone
+ added PKP iron sight anims

# Revision 1457 - reyhard

@ deleted textures that shouldn't be in afrf repo

# Revision 1456 - reyhard

@ fixed Ural ZU23-2 optics
@ fixed something in Ural ZU23-2
^ tweaked Ural ZU23-2 attenuation (cannot go better)
+ added iron sight anims for PKM, SVD-M & SVD-S (PKP left, yay)
^ lowered muzzle velocity of SVD-S
@ break lights always lit on SS21
+ added camo variants for BMD1-2, BTR70 & SS21
@ fixed ironsight selection on AK104 & AK105


# Revision 1455 - reyhard

@ fixed beret typo
^ cleaned up named properties mess in beret model

# Revision 1454 - bek

Added stringtable for 1PN138 NVG

# Revision 1453 - Redphoenix

^ missing VDV badge in first res Lod
@ textures for VDV beret

# Revision 1452 - Stagler

-Attempted to fix beret "lol"

# Revision 1451 - Redphoenix

+ VDV Beret

# Revision 1450 - Redphoenix

+ 6B7-1M w/o Balaclava

# Revision 1449 - reyhard

+ added ironsight anims for AK74M series & AS VAL/VSS
^ tweaked AKM ironsight anims for new 7.62x39 ballistic
^ increased 7.62 mags mass & decreased it for 5.45

# Revision 1448 - bek

^ Improved Makarov PM's eye memory point

# Revision 1447 - MistyRonin

@ Fix AFRF Zeus items' files coherence with US. 

# Revision 1446 - Bakerman

^ 7.62x54 ballistics

# Revision 1445 - Bakerman

^ 5.45x39 & 7.62x39 ballistics

# Revision 1444 - reyhard

^ tweaked T-72 tracks shadow
^ added moving ironsights to rest of akm family
^ tweaked pkm ironsight size

# Revision 1443 - Bakerman

Fixed rvmat paths again T1283

# Revision 1442 - Bakerman

Fixed rvmat paths T1283

# Revision 1441 - Bakerman

Injected S13 launcher p3d & textures T1283

# Revision 1440 - reyhard

@ WIP ironsight anims for AKM

# Revision 1439 - reyhard

^ experimental tracks for T-72 series with some alpha love

# Revision 1438 - reyhard

@ rear FFV turrets get in/out memory points were inverted
^ added proper picture for Ural w/ zu23
^ tweaked view limits of Ural w/ zu23 cargo
@ fixed some .rpt errors
@ fixed some uv errors on t80
^ added some missing equipment to VAB
+ added hidden selections to backpacks, 6b13 & vydra

# Revision 1437 - reyhard

+ added ZU-23-2
@ fixed some FCS errors
@ fixed NSV feedtray cover selection
^ tweaked NSV textures
^ added new entries c_troops cfgPatches

# Revision 1436 - j0zh94

^ Updated SSH68 textures to lower glossy look

# Revision 1435 - reyhard

@ mod.cpp fix

# Revision 1434 - Soul_Assassin

+ R-77 missile config added - close T1104

# Revision 1433 - Soul_Assassin

+ Added EMR-Desert patchless uniform - close T1193

# Revision 1432 - reyhard

@ another hotfix to autotrack

# Revision 1431 - reyhard

@ autotrack fix

# Revision 1430 - reyhard

@ fixed T-72 rear wheel shadow
^ added proper K10T collimator for T-72 & T-80
^ cleaned up t-80 textures & Materials
^ optimized reslods for T-80
+ added hidden selections for t-80 
@ replaced BTR80a ammo with UBR8
@ aligned right bow mg reticle for bmp3 & bmds

# Revision 1429 - Stagler

-Updated ZSh-1-2 Config

# Revision 1428 - Stagler

-Fixed Poly error on Zsh-1-2
-Added Zsh-1-2 (Balaclava)

# Revision 1427 - bek

@ Fixed: AK-74M had wildly different dispersion values for single fire and automatic fire
+ Added: Makarov PM
^ Tweaked PSO-1M2-1 resolution lod

note: May still need to tweak PM 'eye' memory point and its model.cfg reload animation... please take a look at the reload anim if you can, it jumps around a bit at the end.

# Revision 1426 - MistyRonin

+ Give NVG to Russian Squad Leaders & Officers

# Revision 1425 - reyhard

@ fixed broken cti indep scopes

# Revision 1424 - reyhard

- disabled proxy retexturing till RC come out

# Revision 1423 - reyhard

^ increased T80 series reverse speed
^ added camo selections to air wrecks
^ reprofixed, optimized reslods, cleaned up & added camo selections to t72&t90
@ fixed T80UK & T80UM antenna anims
^ added green cartridges for AKs
^ tweaked VG compatibility with our decal system
^ added numplate selections to cars & trucks (WIP)

# Revision 1422 - MistyRonin

@ CTI insurgents artillery to scoped to 1 to allow retro compatibility.

# Revision 1421 - MistyRonin

@CTI insurgents scoped to 1 to allow retro compatibility.

# Revision 1420 - LAxemann

Added: New matching SVD reload sounds
Tweaked: Increased volume of most weapon mechanics

# Revision 1419 - LAxemann

Added: New SVD sounds (will be improved)
Fixed: AK103 Forest Tail was missing
Tweaked: Closure volume levels, weapon mechanics are now audible again when firing (Who lowered their volume?)

# Revision 1418 - reyhard

@ cargo comparment for GAZ66 cargo
@ zenit missing textures in res lod
^ autoloader params are saved when changing seats
^ tweaked 1G46 & 1G42 reticle 
^ tweaked disposable launchers loading

# Revision 1417 - reyhard

@ fixed Tigr doors & windows uv mapping

# Revision 1416 - reyhard

^ bmp & btr squad leaders disembark when in combat

# Revision 1415 - reyhard

@ fixed hitpoints compilation
@ fixed t72 aa group
@ fixed btr60 optic zoom
+ added zeus placable uniforms/Headgear/etc

# Revision 1414 - bek

+ Added NVM-14 inventory / ui icon

# Revision 1413 - Stagler

-Slightly adjusted headstrap (again lolooo)

# Revision 1412 - bek

@ Fixed NVM-14 ShadowLOD error, corrected classname (rhs_1PN138)

# Revision 1411 - bek

+ Added: NVM-14 nightvision monocular
^ Tweaked PSO-1M2-1 Diffuse texture + res lods

# Revision 1410 - Soul_Assassin

Unburn @Stagler

# Revision 1409 - Stagler

-"Configged" and "stringtabled" in Black Zsh-1-2 variant

# Revision 1408 - Stagler

-Adjusted chinstrap for ZSh-1-2
-Added Black texture variant

# Revision 1407 - MistyRonin

+ Add VSS marksman classes

# Revision 1406 - Redphoenix

- reduced offroad Coef

# Revision 1405 - reyhard

^ tweaked CBA compatibility 
^ tweaked GSh-30 & added GSh-30-2K with low RPM mode
@ fixed rpg7 script not working for zeus controlled units
^ forced visibility of Kamaz Typhoon in VG
^ added 9S475 reticle for Mi24, WIP on working KPS-53AV collimator

# Revision 1404 - Bakerman

^ Vest HitPoints

# Revision 1403 - Soul_Assassin

Version changed. Jenkins revival.

# Revision 1402 - Pufu

first commit of 2016! | changed zeroing | fixed some trigger and fire selector mem points

# Revision 1401 - Bek

+ PSO-1M2-1 model

# Revision 1400 - reyhard

^ tweaked AK prone animation

# Revision 1399 - Bakerman

^ Upped subsonic ammo damage
^ Weapon strings
Minor VSS related fixes

# Revision 1398 - reyhard

^ tweaked RPG7 ironsight markings
^ tweaked Igla rocket behaviour

# Revision 1397 - Pufu

^ VSS custom geo lod + bisurf
^ AS VAL custom geo lod + bisurf
closes T1027

# Revision 1396 - Pufu

+ Added 2DP Zenit RIS variant
close T1135

# Revision 1395 - reyhard

@ fixed tracer mags

# Revision 1394 - Pufu



# Revision 1393 - Stagler

-Changed chinstrap on Zsh-1-2

# Revision 1392 - Bakerman

+ VSS magazines

# Revision 1391 - Pufu

+ added VSS

# Revision 1390 - Stagler

- Zsh-1-2 texture updates! yay!

# Revision 1389 - reyhard

@ fixed faces for some russian troops
^ tweaked autoloader behaviour in semi mode when switching between weapons
+ RPG7 ironsight "animations"

# Revision 1388 - Bakerman

T-90 shtora firegeo


# Revision 1387 - Bakerman

T-90A shtora firegeo

# Revision 1386 - reyhard

@ missing shoes in gorka 2nd res lod

# Revision 1385 - reyhard

^ improved ballistic calculations on uneven terrain
^ added iron sight secondary mode handling for scopes

# Revision 1384 - Stagler

- More Zsh model updates lol!

# Revision 1383 - Stagler

-Tweaked Zsh-1-2 placement on head

# Revision 1382 - Stagler

-Tweaked specular map

# Revision 1381 - Stagler

-Added first version of ZSh-1-2 (would appreciate some help doing better textures :) )

# Revision 1380 - reyhard

^ improved t80 optic & removed old FCS weapon
@ changed t90a weapon to 2a46m-5
@ fixed zero divisor thing - close T1213
^ empty tanks with autoloader now starts with empty main cannon too

# Revision 1379 - Stagler

-Added hidden selections to Balaclava models

# Revision 1378 - Bakerman

^ Armor compatibility, hitPart function now runs on ALL vehicles
T1210

# Revision 1377 - reyhard

@ zeroing tex offset fix
@ proper inheritance for igla twice
@ missing podnos weapon string
@ bad move connection in RHS_Metis_Gunner

# Revision 1376 - Bakerman

Sneaky edit while reyhard naps

# Revision 1375 - Bakerman

One more

# Revision 1374 - Bakerman

Removed a XEH I missed

# Revision 1373 - Bakerman

AFRF menu version

# Revision 1372 - reyhard

@ small sts tweaks

# Revision 1371 - reyhard

@ ultimate fix for tigr sts gunner swapping
@ increased AI gunner compatibility with Tigr STS
@ fixed wrong memory points on used disposable launchers
^ improved reliability disposable launcher script 

# Revision 1370 - Bakerman

@ PTS-M now Zeus remote control compatible

# Revision 1369 - Bakerman

@ PTS-M lowering ramp under water

# Revision 1368 - reyhard

^ improved ammo indexing
^ tanks with player manned gunner starts with unloaded main gun

# Revision 1367 - Bakerman

^ RGN/O impact function reliability

# Revision 1366 - reyhard

@ fixed T90 hatch axies - commander need new turned out anim later
@ fixed PZU-5 misalignment on T90 & T90A
@ fixed NSVT smoke positions - close T1209
^ added NSVT effects to T80A & T80UE-1

# Revision 1365 - Bakerman

^ Barrel heat refraction only visible on high graphical settings

# Revision 1364 - Bakerman

Removed Tigr wheel shadows T1194

# Revision 1363 - reyhard

@ Changed AGS30 COM to prevent flipping
@ Fixed 1G42 style selector position while using menu options
@ Fixed DshkM minitripod max elev
@ removed hint from t72 autoloader

# Revision 1362 - MistyRonin

+ Add more MVD OSN roles

# Revision 1361 - MistyRonin

@ Fix faction issue with MVD OSN

# Revision 1360 - MistyRonin

+ Adding Izlom Uniform & first MVD unit

# Revision 1359 - Bakerman

@ Tigr wheel shadow
T1194 Temporary fix until Vas can do it properly

# Revision 1358 - reyhard

@ another attempt at tigr sts fixing
^ added destruction textures for russian static weapons
^ improved autoloader: t72b variants (excluding B3) need to be reload after each shot with Reload key (default R). Other tanks, have sequential loading switch which can be toggled with Swim Down key (default Z)
^ new GUI elements for 1G42

# Revision 1357 - Bakerman

^ Retreading script performance
@ Retreading MP issue
Missed two EH
T1072 - Updated scripts

# Revision 1356 - Bakerman

^ Decal scripts

# Revision 1355 - Bakerman

@ Sprut-SD & BMD-4 decals

# Revision 1354 - MistyRonin

@Fix MSV Flora armored crew loadout issue

# Revision 1353 - Bakerman

@ Armored crew had no Ak-74 ammo
Close T1197

# Revision 1352 - Bakerman

Added BMD-1P/K init EH

# Revision 1351 - Bakerman

@ Beanie UI picture
@ 6B13 UI picture
@ 6B23 mountain les UI picture
@ 6Sh92 UI picture
@ Vest armor descriptions

# Revision 1350 - reyhard

@ fixed wrong path to proxy on t72b3

# Revision 1349 - gurdy

+ SKOL MVD uniform

# Revision 1348 - MistyRonin

@Fix VDV Desert classname misshap

# Revision 1347 - Bakerman

Build trigger

# Revision 1346 - MistyRonin

+Add VDV Desert-EMR groups

# Revision 1345 - LAxemann

Added: New DHSKM/NSV/Kord sounds

# Revision 1344 - Bakerman

^ Stacked EventHandlers for all vehicles
T1202 AFRF

# Revision 1343 - Bakerman

@ SHTORA detection script returning false positive

# Revision 1342 - Bakerman

^ SHTORA sensor margin of error
Close T1200

# Revision 1341 - Bakerman

Fixed function name boo boo

# Revision 1340 - Bakerman

^ Tigr STS inventory animations for RPG-26 cargo
Close T1199

# Revision 1339 - MistyRonin

^Add more headgear to randomizer and fixes

# Revision 1338 - Bakerman

@ SHTORA T-80UK user control actions added

# Revision 1337 - Bakerman

Added missing file

# Revision 1336 - Bakerman

^ SHTORA script performance

# Revision 1335 - reyhard

+ added hiddenSelections to SSh-68 helmet
^ another attempt at tigr sts gunner fixing
@ fixed tigr sts AGS30 anims
^ added visible wings in pilot view for Su25

# Revision 1334 - Bakerman

Removed systemChat from rhs_shtoraAngle.sqf

# Revision 1333 - Bakerman

@ SHTORA deflect script error
@ SHTORA animation angle inverted

# Revision 1332 - Soul_Assassin

@ Fixed 6B28 balaclava variant chinstrap hiddenselections.

# Revision 1331 - reyhard

@ removed beard & black camo faces
@ attempt at fixing tigr sts gunner

# Revision 1330 - reyhard

^ autotracking improvment
@ added missing buoyancy parametr to btr80a
^ improved VG garage support for Ka60
@ fixed missing explosion sounds for grom cannon
^ identity cfg cleanup

# Revision 1329 - MistyRonin

+ Add Insurgent backpacks & Fixes

# Revision 1328 - MistyRonin

@Fix strings and last updates

# Revision 1327 - MistyRonin

@Further updates of Insurgent loadout, and also insurgent group update

# Revision 1326 - MistyRonin

@First update & clean of insurgent configs

# Revision 1325 - MistyRonin



# Revision 1324 - reyhard

@ fixed mi8mtv3 fab russian translation
@ fixed asval folding
^ added zeroing for nsvt
^ tweaked pzu5 position
^ tweaked elevation limits for bmp
^ added bmp1/2 insurgent camo to VG 

# Revision 1323 - reyhard

@ as val selector fix
@ max elev fix for t72

# Revision 1322 - reyhard

@ fixed Igla locking

# Revision 1321 - reyhard

@ fixed Virtual Garage options & parts hiding for PAK FA
@ fixed scarf visible in 1st person view
^ tweaked Tigr STS PKM zoom level
@ fixed Tigr-M & STS plate numbers

# Revision 1320 - vasmkd

tigr ao fixes and door fixes

# Revision 1319 - Bek

^ added weapon_plate penetration rvmat to the AS Val

# Revision 1318 - reyhard

@ fixed AGS30 assembly - close T1182
@ fixed AK103 gp25 npz hand anim - close T1185
^ tweaked asval handanim

# Revision 1317 - Bakerman

cfgHints fix

# Revision 1316 - Bakerman

Minor fixes for retread actions

# Revision 1315 - Bakerman

Fixception

# Revision 1314 - Bakerman

Tigr spare fix

# Revision 1313 - vasmkd

tigr camo and green ao fixes

# Revision 1312 - Bakerman

+ Field manual entries for ground radar and shtora
^ Retreading script control variables

# Revision 1311 - reyhard

^ new tigrs camo versions added

# Revision 1310 - vasmkd

Tigr exterior texture updates for green and camo version. added AO and made 4k texture files to blend better with sts extras

# Revision 1309 - vasmkd

rhs tigr interior update


# Revision 1308 - reyhard

^ changed PKM mags in tigr to mag proxy one

# Revision 1307 - reyhard

^ tweaked t72 gun depression 
@ fixed ags30 mag visibility - close T1179
+ removed dont Create AI from Tigr-M since it's trouble some to maintain hatch closed otherwise - close T1180
@ fixed wrong uvmaping on tigr-m doors - close T1181

# Revision 1306 - Redphoenix

+ Tigr AS map

# Revision 1305 - Bakerman

Removed systemChat from rhs_shtoraDeflect.sqf

# Revision 1304 - Bakerman

Improved shtora deflection

# Revision 1303 - Bakerman

@ Silencers no longer reduce muzzle velocity
^ Short AK variants have reduced muzzle velocity

# Revision 1302 - Bakerman

VAB new static weapon bags added

# Revision 1301 - Bakerman

VAB updates

# Revision 1300 - reyhard

^ added boxes to the back of armed uazs - gunners no longer floats
^ updates to CTI missions
^ made realistic animations for static AGS
+ added zeroing for rpg7 ironsights (without animations) - close T1098
+ configured tigr sts - close 1086
+ configured tigr-m - close T1086
^ tweaked pkm ironsight & reload anims

# Revision 1299 - gurdy

@ fixed spacing error

# Revision 1298 - gurdy

@ More names

# Revision 1297 - gurdy

@ Igla tripod name

# Revision 1296 - Bakerman

Metis now calls saclos function

# Revision 1295 - Bakerman

^ Shtora now interferes with SACLOS guidance

# Revision 1294 - MistyRonin

@ Added more Russian surnames - to add more color.

# Revision 1293 - Redphoenix

^soften suspenion for BMD-1/2

# Revision 1292 - Bakerman

Shtora re-enabled, but made less intrusive.

# Revision 1291 - Bakerman

Zeus missions updated

# Revision 1290 - Redphoenix

+missing Tigr STS AO

# Revision 1289 - Bakerman

Indep limb damage

# Revision 1288 - Bakerman

^ Limb damage
Reduced subsonic ammo damage a bit

# Revision 1287 - Redphoenix

^corrected Tigr STS Hatch textures

# Revision 1286 - Bakerman

Removed unnecessary values

# Revision 1285 - Bakerman

More AS Val config values

# Revision 1284 - Redphoenix

+ correct TigrM interior proxy

# Revision 1283 - Bakerman

Updated function headers

# Revision 1282 - Bakerman

^ Increased PSNR-5K FOV from 30 to 42

# Revision 1281 - Bakerman

Removed AS Val muzzle flash

# Revision 1280 - Bakerman

1p78 tinted http://zenphotos.net/file/Online/SVD/Optics/1P78-ReticuleDay01.JPG

# Revision 1279 - Bakerman

Optic tinting is back in

# Revision 1278 - Bakerman

Subsonic ammo improvements

# Revision 1277 - MistyRonin

@Fixes for Russian troops

# Revision 1276 - Soul_Assassin

Pak Fa map fixed

# Revision 1275 - Soul_Assassin

T-50 Afterburner death disappear fix maybe

# Revision 1274 - MistyRonin

^ Added painted faces to VDV Recon scouts. 

# Revision 1273 - reyhard

@ muffled sounds bug fix
+ added camo faces to VDV recon
@ fixed pso1 script loop

# Revision 1272 - Bakerman

Reverted rhs_sight_pso1.sqf

# Revision 1271 - Bakerman

Reverted PSO tint

# Revision 1270 - Bakerman

^ Weapon strings
+ PSO scope tint

# Revision 1269 - Soul_Assassin

Zenit flashlight string fixes

# Revision 1268 - Redphoenix

+ preliminary AO maps added to Tigr Exterior and Dashboard

# Revision 1267 - MistyRonin

^ Updated PSO sight for AS Val.

# Revision 1266 - Redphoenix

^ fixed window Alpha - Tigr STS
^ fixed LOD problems - Tigr STS

# Revision 1265 - reyhard

@ insurgents hitpoints hotfix

# Revision 1264 - Redphoenix

-removed hemtt_a4 pbos in Zeus missions

# Revision 1263 - Soul_Assassin

OG15V and PG-15V reverted back to ShellBase - close T1089

# Revision 1262 - Soul_Assassin

Static weapons dlc icon fixes - close T1116
Stringtable fixes for statics

# Revision 1261 - Soul_Assassin

@ Fixed Mi-8 map icons - close T1117

# Revision 1260 - Soul_Assassin

Helmet balaclavas replaced

# Revision 1259 - reyhard

@ infantry damage fix

# Revision 1258 - Bek

+ Added reticle textures

# Revision 1257 - Bek

+ PSO-1M21 Reticle

# Revision 1256 - Soul_Assassin

Standalone type 1 and 2 balaklavas ready

# Revision 1255 - Bakerman

+ Gsh-30-1
T1102 Improved afterburner script (still needs custom button)

# Revision 1254 - Redphoenix

+ new Zeus missions (thanks to @Bakerman)

# Revision 1253 - Soul_Assassin

Work on balaclava - T1106

# Revision 1252 - Soul_Assassin

@ Fixed BTR-70 weird proxy position

# Revision 1251 - Bakerman

Zeus test missions

# Revision 1250 - Soul_Assassin

^ Added salvo modes for BM-21  - close T926

# Revision 1249 - Soul_Assassin

+ Added compatibility with Lesh's Tow Mod - close T1101

# Revision 1248 - Soul_Assassin

@ Fixed T-90A antenna.

# Revision 1247 - Bakerman

Zeus fix test

# Revision 1246 - Bakerman

+ VG-40MD smoke shell
^ 3D17 shell trajectory
GDM40 & VG40MD gear picture

# Revision 1245 - Bakerman

As val recoil
Added temporary weapon tails

# Revision 1244 - Bakerman

Asval mag config entry

# Revision 1243 - Pufu

position rel to ground

# Revision 1242 - Pufu

as val mag

# Revision 1241 - Bakerman

Asval magazine pictures

# Revision 1240 - reyhard

+ added framework for PSO-1M2-1
^ tweaked crew loadouts
@ fix to sound muffling

# Revision 1239 - MistyRonin

@ Switched RU mortar & howitzer to artillery 

# Revision 1238 - gurdy

^ static weapon naming (hopefully)

# Revision 1237 - MistyRonin

@ Corrected drivers of the Tigrs. 

# Revision 1236 - gurdy

+ icon for RVA

# Revision 1235 - Redphoenix

fixed the world

# Revision 1234 - Bakerman

+ RGO hand grenade

# Revision 1233 - Bakerman

Tigr model.cfg updates

# Revision 1232 - Bakerman

Tigr STS magazine animations

# Revision 1231 - Redphoenix

@replaced some old author tags with Author_Macro

# Revision 1230 - Redphoenix

+Kord magazine
+RPG26 stowed
+ammoboxes for the Tigr-STS

# Revision 1229 - Bakerman

T965 more armor improvements

# Revision 1228 - reyhard

@ fixed asval nsp mounting
+ added asval npz to virtualAmmoBox

# Revision 1227 - reyhard

+ added 'vest' with pistol holster only (for drivers mainly)
@ fixed curator scope for patchless uniforms
^ moved a little bit folded AK

# Revision 1226 - Redphoenix

fixed many many many STS errors
resized hole for new hatch to avoid seeing the seam
fixed the damn doors

# Revision 1225 - Soul_Assassin

Added AS-VAL with NPZ - close T1105

# Revision 1224 - Bakerman

T965 armor level definitions

# Revision 1223 - Soul_Assassin

+ New balaklava model

# Revision 1222 - Soul_Assassin

Desert cap fix - close T1100

# Revision 1221 - Soul_Assassin

PAK-FA flight dynamics improvements

# Revision 1220 - LAxemann

Added: AS VAL sounds and configs
Fixed: Some inheritance-related AK sound bugs

# Revision 1219 - Soul_Assassin

PAK-FA Acceleration tweaked

# Revision 1218 - Soul_Assassin

^ Uniform textures dirtied up

# Revision 1217 - Redphoenix

^T-50 Afterburner rvmat update

# Revision 1216 - Bakerman

Fixed as val zeroing

# Revision 1215 - reyhard

+ added taktikul mag grip handling anim for as val

# Revision 1214 - Bakerman

Afterburner.sqf made Zeus compatible

# Revision 1213 - reyhard

@ shake radius hotfix

# Revision 1212 - Redphoenix

numerous Tigr-M and normal Tigr fixes
- set scope=1 for all FFV Tigrs to remove the duplicate vehicle from the Arsenal

# Revision 1211 - Redphoenix

fixed afterburner rvmat file path for T-50

# Revision 1210 - reyhard

@ fixed bmd2m FCS
+ added some missing mags to virtual arsenal
@ fixed missings string - close T1099

# Revision 1209 - Soul_Assassin

No more error on factions in editor
@ AK-103 NPZ GP-25 can now load GP rounds.
@ BMD-2M FCS fixes


# Revision 1208 - Soul_Assassin

MSV BMP1/2 has correct red numbers

# Revision 1207 - Soul_Assassin

PAKFA envelope tweaks

# Revision 1206 - Redphoenix

Even more Tigr-M LOD fixes

# Revision 1205 - Pufu

normals update

# Revision 1204 - reyhard

@ static weapons fixes

# Revision 1203 - Pufu

fix weird shading due to padding 

# Revision 1202 - Soul_Assassin

Pak Fa Afterburner script initial and maneuverability increase.

# Revision 1201 - Redphoenix

^Generic T-50 texture

# Revision 1200 - Pufu

shadowlods

# Revision 1199 - Bakerman

TigrM smoke

# Revision 1198 - Redphoenix

+ Desert EMR Fieldcap to VR Box

# Revision 1197 - Bakerman

T965 AFRF Vests & Helmets

# Revision 1196 - Bakerman

Minor heavyweapons updates

# Revision 1195 - Redphoenix

+ added Desert EMR Uniform to Virtual Ammobox

# Revision 1194 - Soul_Assassin

@ Magnified scope ranging (PSO/1P29/PGO) - close T1067

# Revision 1193 - reyhard

@ fixed weapon bay closure
^ tweaked D30 magazines
^ moved gp25 reload gesture to muzzle
+ added don't createAI for bmps & btrs - close T1084
@ turned off bmp3 debug messages

# Revision 1192 - MistyRonin

@Updated mags and fixes for diff VDV units.

# Revision 1191 - Bakerman

Upped ASVAL rof to 900rpm

# Revision 1190 - MistyRonin

@ Testing macro for efficiency in RU VDV Des

# Revision 1189 - Bakerman

Tigr wheel fixes

# Revision 1188 - MistyRonin

+ Added VDV desert crew

# Revision 1187 - MistyRonin

@ Add missing line in RHS troops config

# Revision 1186 - MistyRonin

@Add VDV Desert troops

# Revision 1185 - MistyRonin

+ First addition of Desert Uniform for the Russian side

# Revision 1184 - reyhard

@ fixed lopatka shadow

# Revision 1183 - Bakerman

T1072 Updated action condition

# Revision 1182 - Redphoenix

@ BMP-1/2 PhysX - close T1078
- auto-brake from T-72
+ UI Icon for Tigr-M

# Revision 1181 - MistyRonin

@Add AS Val and its ammo to AFRF weapon crates and mags, as well as a Zeus item. Additionally adding VDV Recon Marksman (Val) to VDV Recon sniper groups

# Revision 1180 - MistyRonin

@ Few fixes for AS Val configs

# Revision 1179 - MistyRonin

@ Updated classnames for Val

# Revision 1178 - MistyRonin

+ Add AS Val soldiers in VDV

# Revision 1177 - Bakerman

AS VAL sounds fixed

# Revision 1176 - Bakerman

Temp ASVAL sounds

# Revision 1175 - Soul_Assassin

AS Val injection

# Revision 1174 - Redphoenix

@ Tigr-M LODs
way tooooooooooooooooooooooooooooooooooooooooo many Tigr-M things....
+ Tigr-STS strings and config

# Revision 1173 - Bakerman

+ 9x39mm SP5 & SP6

# Revision 1172 - Pufu

first AS VAL commit

# Revision 1171 - MistyRonin

+ Add VDV recon groups 

# Revision 1170 - Redphoenix

+ Initial Tigr-M injection - T1086


# Revision 1169 - MistyRonin

@Fixed MSV EMR Grenadier classname mishap - Work on T552.

# Revision 1168 - MistyRonin

@Update MSV & VDV groups - Work on T552

# Revision 1167 - MistyRonin

@Config MSV troops with realistic load-outs - Work on T552

# Revision 1166 - Soul_Assassin

^ Moved SVD aimpoint closer -close task T1083

# Revision 1165 - Bakerman

T1072 Retreading for Tigr

# Revision 1164 - Bakerman

T1072 Added missing gaz66r142 spare wheel hitpoints

# Revision 1163 - Bakerman

T1072 Retreading for gaz66

# Revision 1162 - Bakerman

T1072 Quick fix for script

# Revision 1161 - Bakerman

T1072 Retreading for afrf A2 ported cars

# Revision 1160 - MistyRonin

@Fixed little classname misshap with VDV Efreitor's RPG

# Revision 1159 - MistyRonin

@ Updated VDV loadouts to nowadays standards - Also optimized weapons configs

# Revision 1158 - Redphoenix

@ T-72B3/T-90 MaxSpeed
^ Wrong file reference for dazzler_co.ta
+ T-72B and T-72B3 now each have there own PhysX file

# Revision 1157 - Redphoenix

@ T-80 A and B PhysX Update

# Revision 1156 - Redphoenix

@ BMD-1/2 PhysX update - T1078

# Revision 1155 - Redphoenix

@ PTS-M PhysX update - T1078

# Revision 1154 - Soul_Assassin

T-50 damage fixed

# Revision 1153 - Soul_Assassin

sized afterburners

# Revision 1152 - Redphoenix

+ propper gunner stand for STS @reyhard

# Revision 1151 - Soul_Assassin

R74 missile geometry now has mass so its not slower than the PAK FA anymore :)

# Revision 1150 - Redphoenix

removed unnecesarry file of GAz Tigr

# Revision 1149 - Redphoenix

+ GAZ-233014 STS

# Revision 1148 - reyhard

@ hotfixed tigr blank lod

# Revision 1147 - Bakerman

T1076 Tigr p3d update for retread script

# Revision 1146 - Bakerman

T1076 Gaz66 p3d updates for retread script

# Revision 1145 - Bakerman

T1076 Ural p3d updates for retread script

# Revision 1144 - Bakerman

T1076 UAZ p3d updates for retread script

# Revision 1143 - Redphoenix

+ R74-M2
+ resLODs for afterburners

# Revision 1142 - reyhard

+ added afterburner rotation anim
+ added cannon cover anim to pak fa
^ tweaked AA missiles max speed
+ added wip BMP insurgent skin
+ added NV to t90 - close t1073
@ fixed inheritance of some missile launchers (locking sound for r73)
+ added door anims & new ffv position 

# Revision 1141 - Redphoenix

+ PAK FA afterburner

# Revision 1140 - Bakerman

Fixed config

# Revision 1139 - Bakerman

UAZ(open) door test

# Revision 1138 - Bakerman

New flares for ka60

# Revision 1137 - MistyRonin

@Adding missing non-inherited tags

# Revision 1136 - Soul_Assassin

PAK FA work

# Revision 1135 - MistyRonin

@Fix VDV displaynames

# Revision 1134 - MistyRonin

+Add scouts to VDV Recon.

# Revision 1133 - Bakerman

^ Flare launcher modes

# Revision 1132 - MistyRonin

@ Fixes batch for VDV Recon

# Revision 1131 - Bakerman

Fixed mi24 script error

# Revision 1130 - MistyRonin

+ Addition of first version of VDV Recon

# Revision 1129 - Kllrt

Fixed: Track cover on MTLB

# Revision 1128 - reyhard

^ changed decal init method to config based one (please test if all decals are working [except tigr - doesn't configured sel for now])
+ added dummy stub ejection script for d30
@ fixed d30 scope tex path
+ added armed UAZ groups for insurgents
^ tweaked t80 snorkel script
^ changed armor structural for mi8 & ka60 - T1064

# Revision 1127 - gurdy

^ 6sh92 digi texture


# Revision 1126 - j0zh94

Added inventory image for SSH68 helmet

# Revision 1125 - Soul_Assassin

One fucking comma

# Revision 1124 - Soul_Assassin

PAK-FA work

# Revision 1123 - reyhard

@ typo in mi8 decal cfg

# Revision 1122 - reyhard

+ added drive gun lock for 2s3
^ improved bmp3 interior
+ added pip handler for bmp3 (wip)
^ decal parametrs for a2port_air & car are read from cfg instead of huge list
@ fixed BTR driver visibility
+ initial upload of static weapons
+ added armed UAZs for insurgents
@ minor fixes for uaz
^ moved t72 fcs files to rhs_optics
^ disabled reloading in tanks with autoloaders (not done for bmp3/bmd4)
^ configured GP25 rounds
+ GP25 round visible during reloading
@ fixed EventHandlers for PAK-FA
@ fixed some missing sounds in radio protocol (wip)

# Revision 1121 - gurdy

^ improved 6sh92 digi texture

# Revision 1120 - gurdy

+ Improved EMR cap texture

# Revision 1119 - Redphoenix

+missing headlight proxies for rhs_btr60.p3d

# Revision 1118 - Redphoenix

^small spelling mistakes in cfgHints.hpp - close T1058

# Revision 1117 - Bakerman

Removed dependency on ImpactSparksSabot1

# Revision 1116 - LAxemann

Added: New AKM sounds 

# Revision 1115 - Soul_Assassin

Pak fa work:

- new cockpit
- missile proxies (first 4)

# Revision 1114 - Soul_Assassin

Scoped out servicemenu vehicles.

# Revision 1113 - Bakerman

- Shtora protection system
Too buggy without CBA

# Revision 1112 - Bakerman

- AINET smart fuse
Sometimes buggy and confusing to use

# Revision 1111 - Bakerman

- 3UOF191 shells from BMP-3 & BMD-4
Implementation was not ideal and could be buggy sometimes

# Revision 1110 - Redphoenix

+first commit of Tigr (Old) with Openable Doors

# Revision 1109 - Stagler

-Updated Les textures - less white

# Revision 1108 - Bakerman

+ 5.45x39 & 7.62x39 subsonic ammunition
^ 7.62x39 magazine display names
Fixed AK104/105(NPZ) wrong calibre muzzle attachments


# Revision 1107 - Soul_Assassin

Added Gorka infantry vehicle classes.

# Revision 1106 - Soul_Assassin

EMR commander added to T-72B3 - closes task T1018

# Revision 1105 - Soul_Assassin

^ Ka-52 Vikhr missiles can engage air targets.

# Revision 1104 - Redphoenix

^UAZ rear doors & window placement
^UAZ window alpha sorting was broken due to last commit, now fixed

# Revision 1103 - Redphoenix

Committing unknown PAK-FA fixes?

# Revision 1102 - Bakerman

@ RGN impact sounds

# Revision 1101 - Soul_Assassin

Reverting changes made to AK74 aimpoint.

# Revision 1100 - Redphoenix

^UAZ Doors are now closer to the frame - close T1030

# Revision 1099 - Redphoenix

^fixed Mi24 Cockpit holes - close T1023
^improved eye memory points for all AKs - close T1029

# Revision 1098 - Soul_Assassin

Add thermals and lods to gorka - close task T460 finally
Fix weird ssh68 error

# Revision 1097 - Soul_Assassin

Fix world burning.

# Revision 1096 - Soul_Assassin

Fixes on SSh-68 - closes issue T1017

# Revision 1095 - Soul_Assassin

AK105/4 finilized
flashlights allowed on NPZ


# Revision 1094 - sabre

[Textures] V1 Gorka Y & G

# Revision 1093 - MistyRonin

@ T72B3, T90A, BMP3 late & m have now EMR crews - Related to T1018 

# Revision 1092 - LAxemann

Added/Changed: All new PK sounds (including tails etc)

# Revision 1091 - j0zh94



# Revision 1090 - j0zh94

T1017 commit exec UI image

# Revision 1089 - Soul_Assassin

+ Added grenades for the PG-25

# Revision 1088 - zeealex

+added mtlb uvw reference

# Revision 1087 - Soul_Assassin

MTLB texture applied

# Revision 1086 - Soul_Assassin

MTLB tgas converted to paa for building

# Revision 1085 - zeealex

+added AO file for texture reference

# Revision 1084 - reyhard

^ changed hitpoints to 1.52 ver + cfg should support changes to hitpoint class made in 1.54
^ increased amount of vog grenades for rifleman with rpg26/rshg2

# Revision 1083 - reyhard

+ added magic antirollbar param to russian vehicles
- removed laser from T-72
+ added buoyancy parameter to geometry of amphibious vehicles (btrs/bmps,etc)
+ added gunner & commander FFV to BMD4 & Sprut-SD
^ holstered pistols are now visible on crew officer & commander vests
^ RSP-30 are no longer visible in holdsters
^ replaced RSP-30 with makarov for commander units 
^ commander turrets in tanks & IFV are now properly occupied by commander units
+ added VOG25P experimental script
+ added antiwater to btrs
+ added working driver hud to bmp3
^ minor tweaks to bmp3 models (hatches, shadows, etc)
- removed thermal monitor from early bmp3s visible in cargo view
@ fixed TR8 PIP variant scripts

# Revision 1082 - zeealex



# Revision 1081 - zeealex

added base mtlb p3d file

# Revision 1080 - Stagler

-Added ML and Flora variants of 6B23 Vydra-3M
-Tweaked collar of 6B23 Vydra-3M slightly

# Revision 1079 - Stagler

-Added test version of 6B23 w/ Vydra-3M :)

# Revision 1078 - Bakerman

Target intersection function

# Revision 1077 - Soul_Assassin

^ EMR 6Sh92 back by popular demand - fixes T973

# Revision 1076 - reyhard

^ unified lead calculating functions
+ added zamerny memory point to t80u series tanks since guided missiles were targeting lower part of hull
@ fixed typo at btr cfg
^ increased slightly uaz & ural armor to prevent almost insta death from 12.7 rnds
+ added usePIP param to Tochka-U & BM-21 to prevent head twisting
@ fixed some visual bugs in plissa/agava FCS
@ fixed missing barrel in gunner lod for t-72 with tpd-k1 sight
^ tweaked lead values for some weapons
+ added auto target tracking system - hold for min 1 sec lase key to acquire target. need to be in thermal mode in last optic mode (АСЦ ГОТ should be visible in right upper corner) 

# Revision 1075 - reyhard

@ copy pasted gorka res lod 0 to pilot view lod 
^ changed t90a turret rotation speed since it's using 2E42-4 stabilizer
^ changed (and sometimes added) vehicles ui pictures in a3 style
@ fixed dangerCrew.fsm throwing errors about unknown dangercause (caused by introduction of suppressive fire by bis in 1.40) 
^ tweaked some scripts to use remoteExec instead bis_fnc_mp
@ fixed t-72 indep flag removal script
@ fixed t-72 traversee sound (bad sample compresion)
@ fixed some "Error compiling '0.5 * (HitEngine1 + HitEngine2)' in 'HitEngine1'" rpt errors
^ improved PKAS reticle
@ fixed ak74 ui error when flashlight is mounted (temp solution - either we scrap current accessories system & we move into procedural method or someone need to paint new ui elements)
@ flashlights are preserved during stock folding & npz mounting
@ restored flashlights to folded ak's
@ removed flashlight from ak's with gp25
CTI:
@ fixed upgrade menu
^ player can be now revied by remote controlled units
^ usage of remoteExec (MAY NOT WORK YET)
@ fixed 1.52 gui errors
^ msv/vdv and us army/marines have now army branch icons to help distinguish those units in factory menu
+ added some new vehicles (i.e. t90a)
^ fatigue option now applies to bought unit too
blablabla

# Revision 1074 - Bakerman

Updated extension

# Revision 1073 - Pufu

added AK barrel pointer slot for the NPZ AK74NPZ versions

# Revision 1072 - Pufu

added side proxy to:
AKM /AKMS /AK74m_2mag /AK74m_2mag_npz /AK74m_folded /AK74m_npz /AK103 /AK103_npz

fixed not needed UVs and UV coordinates in shadowLODs for AKM, AK74 and AK103 series

# Revision 1071 - reyhard

@ Headgear script hotfix

# Revision 1070 - Pufu

tweaked 2dp flash rvmat + texture to fit AKs more

# Revision 1069 - Pufu

@ added stringtable 
@ added visual LODs

close T969

# Revision 1068 - Soul_Assassin

Direction fixed

# Revision 1067 - Soul_Assassin

Fixed flashlight config

# Revision 1066 - Pufu

modified type of light emitted

# Revision 1065 - reyhard

@ fixed btr80 recoil - close T962
^ replaced random Headgear script - close T844
+ added t90a groups - close T929
^ improved pkas reticle

# Revision 1064 - Stagler

-Added Headset Spetsnaz Vest

# Revision 1063 - reyhard

+ added shadows to ekp1
+ added new collimator effect to pkas, 1p63 & ekp1
+ added turret blow off to t80
@ fixed mi24 sound configuration
@ fixed commander mem point for t90 commander
^ improved collimator effect for t72b nsvt
@ restored missing damage textures for t80b removed in commit 737
@ fixed minefield module

# Revision 1062 - Pufu

fixex zenit typo - love reyhard :)

# Revision 1061 - Bakerman



# Revision 1060 - Bakerman

First commit of extension prototype

# Revision 1059 - Pufu

typo path icon

# Revision 1058 - Pufu

inventory image

# Revision 1057 - Soul_Assassin

Flashlight configured and repositioned

# Revision 1056 - Pufu

preping for pointer slot for russian weapons. for now everything is commited out

# Revision 1055 - Pufu

initial commit russian zenit 2dp flashlight

# Revision 1054 - MistyRonin

+ Add toolboxes to Russian tracked vehicles.

# Revision 1053 - Redphoenix

^ restructured file structure for air weapons
+ R77 and R77M (non-functional)

# Revision 1052 - Redphoenix

^sensors and antenna hide animation for T-50

# Revision 1051 - Redphoenix

fixed some decal booboo

# Revision 1050 - Redphoenix

+ some more decals
@ renamed some decals for better identifation

# Revision 1049 - sabre

[Textures] Slight colour correction on the 105 muzzle.

# Revision 1048 - LAxemann

Added: All new Ak74 sounds + tail sounds + config

# Revision 1047 - gurdy

@ AK-105 flashhider nrm

# Revision 1046 - Soul_Assassin

cleanup

# Revision 1045 - Soul_Assassin

Gorka work- tweaked shadow, hand position and rvmat tweaks - T460

# Revision 1044 - Soul_Assassin

Implemented T-50 generic random numbers
@ Fixed Ka-52 numbers

# Revision 1043 - Redphoenix

^improved T-50 geoLOD

# Revision 1042 - Redphoenix

+ T-50 generic airplane, string and texture
+ Russian Navy Squadron Decal

# Revision 1041 - Redphoenix

^ color of T-50-5
@ T-50-3 now has the correct color variant

# Revision 1040 - Redphoenix

+ T-50-3 prototype scope=2

# Revision 1039 - Redphoenix

+ quick Harbormaster fix

# Revision 1038 - Redphoenix

+ sensor and antenna hide animation
@ decal alpha issues

# Revision 1037 - Redphoenix

@ AS map and AO multiplier maps to prvent texture artifacts when hiding sensors

# Revision 1036 - Redphoenix

^ T-50 landing gear animation

# Revision 1035 - Redphoenix

@ T-50 cockpit glass alpha sorting

# Revision 1034 - Redphoenix

+ missing landcontact points

# Revision 1033 - Redphoenix

@ activation speed for nozzle rotation

# Revision 1032 - Redphoenix

^T-50 SMDI and NOHQ map
^added missing number decals
^moved several decals for better visibility
+all known prototypes
^T-50 flaps movement

# Revision 1031 - Redphoenix

+ T-50 Decal System
^texture res of several decals
+ T-50 strings

# Revision 1030 - Redphoenix

^changed structure of rhs_decals/Labels/Aviation/

# Revision 1029 - Redphoenix

+ More Russian Decals
^ Su25 Crow Decal

# Revision 1028 - Redphoenix

T-50 update

# Revision 1027 - gurdy

+ Sabre's textures of AK100 carbines

# Revision 1026 - Redphoenix

+ different base texture from T-50
^ improved T-50 Nozzle animation and shadowLOD
+ T-50 collision lights

# Revision 1025 - Soul_Assassin

Mi-24 testbed added

# Revision 1024 - Redphoenix

T-50 model.cfg fix

# Revision 1023 - Redphoenix

T-50 Update - T210

# Revision 1022 - Redphoenix

+ AK103 GP25
+ AK103 GP25 NPZ

# Revision 1021 - Redphoenix

^improved T-80U series acceleration

# Revision 1020 - Soul_Assassin

Further tinkering

# Revision 1019 - Soul_Assassin

Servicemenu UI proof of concept added

# Revision 1018 - Redphoenix

+ PAK FA wing vortex effects

# Revision 1017 - Redphoenix

+ PAK FA turbine heat refraction and smoke (needs better particles)

# Revision 1016 - Redphoenix

+PAK FA Shadow LOD

# Revision 1015 - Redphoenix

+ PAK FA GeoLOD
+ PAK FAK UI Icons

# Revision 1014 - gurdy

@ possible AK-104/5 visibility fix

# Revision 1013 - gurdy

@ AK100 visibility fix??

# Revision 1012 - gurdy

+ Initial AK-104/105 commit 

# Revision 1011 - Redphoenix

^cockpit and elevator animation mirrored 

# Revision 1010 - Redphoenix

Harbormaster Fix (missing ; )

# Revision 1009 - Redphoenix

+ PAK FA Weapon Bay Anim
+ PAK FA Turbine Nozzle Vector Thrust anim
T210

# Revision 1008 - Redphoenix

small PAK FA anim fix

# Revision 1007 - Redphoenix

Another PAK FA anim iteration.
Control surfaces fully functional
Landing gear full functional.

# Revision 1006 - Redphoenix

fixed some texture hoodoo on PAK FA

# Revision 1005 - gurdy

^ T-50 last improvement aka NOT DOING THIS ANYMORE TODAY

# Revision 1004 - gurdy

^ More T-50 improvements

# Revision 1003 - gurdy

^ T-50 specular maps

# Revision 1002 - Redphoenix

another PAK FA anim iteration

# Revision 1001 - gurdy

^ T-50 shader

# Revision 1000 - Redphoenix

PAK FA anim iteration

# Revision 999 - Soul_Assassin

Derp

# Revision 998 - Soul_Assassin

Cleaned T-50 config

# Revision 997 - gurdy

@ played with T-50 top speed

# Revision 996 - gurdy

@ T-50 model reference and weapon loadout

# Revision 995 - Redphoenix

+added rudder animation for PAK-FA - T210

# Revision 994 - Redphoenix

fixed small spelling error

# Revision 993 - Redphoenix

+added PAK-FA glass rvmat and texture - T210

# Revision 992 - Redphoenix

+added control surface animation for PAK-FA - T210

# Revision 991 - Bakerman

Servicemenu improved rockets. Ammo is linked to number of pods

# Revision 990 - Redphoenix

+added more animation sources from Su25 for PAK FA
^fixed skeleton inheritance issue in PAK FA model.cfg
T210

# Revision 989 - Redphoenix

re-enabled Harbormaster to build pbos

# Revision 988 - gurdy

+ Test PAK FA

# Revision 987 - Bakerman

Servicemenu proof of concept rocket script

# Revision 986 - Bakerman

Servicemenu asymmetrical configuration example (aka this is why rocket pods need to be scripted)

# Revision 985 - Bakerman

Servicemenu rocket test

# Revision 984 - Bakerman

Servicemenu dummy weapon added

# Revision 983 - Soul_Assassin

Servicemenu testbed added

# Revision 982 - Soul_Assassin

Added antiwater to PTS-M

# Revision 981 - Soul_Assassin

^ PTS-M floats

# Revision 980 - Soul_Assassin

Reverted green texture to original colors

# Revision 979 - Soul_Assassin

Gorka work

# Revision 978 - Redphoenix

@ added missing apron to pilow view LOD - close T925 

# Revision 977 - Redphoenix

^ lowered terrainCoef for UAZ
^ raised normalSpeedForwardCoef to prevent too slow offroad speeds
close T944

# Revision 976 - Soul_Assassin

Gorca scope fixed

# Revision 975 - Soul_Assassin

Gorka scoped back in.

# Revision 974 - Soul_Assassin

[tag] Real first commit of 0.4.0

# Revision 973 - Bakerman

Fixed tiny mistake in hint

# Revision 972 - Bakerman

+ Autoloader field manual entry

# Revision 971 - Bakerman

Completely removed custom EH

# Revision 970 - Bakerman

Menu version set to 0.3.9.1

# Revision 969 - Bakerman

Only afrf pilots have disabled randomization

# Revision 968 - Bakerman

@ Dazzlers sometimes not showing IR materials

# Revision 967 - Bakerman

@ Infantry event handler

# Revision 966 - MistyRonin

@ Rollback changes made in DEV 874

# Revision 965 - Redphoenix

ROF related derpyderp commit .....

# Revision 964 - Redphoenix

^fixed AK74 ROF (Thanks Bakerman)

# Revision 963 - Redphoenix

^ improved AK-74 RateOfFire - close T940

# Revision 962 - Soul_Assassin

[tag] first commit of 0.4.0

# Revision 961 - Bakerman

Shtora fixed variable name

# Revision 960 - Bakerman

T847 Improved effects

# Revision 959 - Bakerman

T847 Tiny fix

# Revision 958 - Bakerman

+ GDM-40 Smoke Grenade
T847

# Revision 957 - Bakerman

T934 static nsv dlc value

# Revision 956 - Redphoenix

^fixed rhs_logobig_ca.paa 

# Revision 955 - Bakerman

T934 one last time

# Revision 954 - Bakerman

T934 another hint update

# Revision 953 - Bakerman

T934 hint update

# Revision 952 - Bakerman

T934 another try at the logo

# Revision 951 - Bakerman

T934 logo

# Revision 950 - Bakerman

T934 cti

# Revision 949 - Bakerman

T934 AFRF few that I missed

# Revision 948 - Bakerman

T934 AFRF color

# Revision 947 - Bakerman

T934

# Revision 946 - Bakerman

T934

# Revision 945 - Bakerman

^ Game options button uses profile colour

# Revision 944 - gurdy

@ Hid "SVD" 

# Revision 943 - reyhard

- removed rds leftover from addon list :P

# Revision 942 - Bakerman

Reverted GDM effect change

# Revision 941 - Bakerman

Shtora only defaults to mode 0 / OFF when empty

# Revision 940 - Bakerman

GRD50 etc scoped back in

# Revision 939 - reyhard

@ fixed t72 @ t90 coax mem points - close T927
^ tweaked t72b obr. 85 textures under era bricks

# Revision 938 - reyhard

@ fixed zeus missions

# Revision 937 - gurdy

^ Mountain Flora texture

# Revision 936 - Soul_Assassin

Small option menu text improvements

# Revision 935 - Bakerman

Scoped out GRD50, 100 and 200 grenades

# Revision 934 - Bakerman

Reverted zues changes

# Revision 933 - Bakerman

Zues test

# Revision 932 - Bakerman

Zues test

# Revision 931 - Bakerman

Zues test

# Revision 930 - Bakerman

Zues test

# Revision 929 - Bakerman

Zues test

# Revision 928 - Bakerman

Moved shtora dazzler light position forwards, hopefully that fixes it

# Revision 927 - Soul_Assassin

Forgotten smokecap fix

# Revision 926 - Soul_Assassin

@ Fixed T-80UK texture compression error and smoke cap - T921

# Revision 925 - Soul_Assassin

Fixed PTS-M driver clipping - fixes T920
Improved handling inplace turning

# Revision 924 - Bakerman

Recoil single player only for now

# Revision 923 - gurdy

^ Mountain Flora Texture

# Revision 922 - gurdy

@ Revert Name change

# Revision 921 - gurdy

@ 6sh92 fixes

# Revision 920 - gurdy

+ 6B23-1 nomenclature 

# Revision 919 - gurdy

@ Commented out "EMR" 6sh92s

# Revision 918 - gurdy

+ Added PTS-M picture

# Revision 917 - Bakerman

Main now requires 1.50

# Revision 916 - Bakerman

@ Minefields

# Revision 915 - Soul_Assassin

@ Covered up some AO errors on T-90 turret - fixes T915

# Revision 914 - Bakerman

Reverted K1 explosion shielding

# Revision 913 - Bakerman

ERA effects for T-72B K1 bricks

# Revision 912 - Bakerman

^ Reduced AZP-23 dispersion

# Revision 911 - Bakerman

rhs_shtoraInit.sqf added missing coma

# Revision 910 - Bakerman

Shtora defaults to mode 0 / off

# Revision 909 - Bakerman

@ Tigr XEH init

# Revision 908 - Bakerman

Few more HEAT improvements

# Revision 907 - gurdy

+ T-72 icons

# Revision 906 - Bakerman

Yak sound config

# Revision 905 - gurdy

^ vehicle naming

# Revision 904 - LAxemann

Added: New "fakeloop" YakB Sounds

# Revision 903 - Bakerman

^ HEAT simulation
Fixed my stupid mistake in compass functions

# Revision 902 - Bakerman

Disabled the new yak sounds until its been redone

# Revision 901 - Bakerman

^ Compass loop synced with fps

# Revision 900 - Bakerman

@ Rocket pod sound

# Revision 899 - Bakerman

Removed RGN debug display

# Revision 898 - Bakerman

Fixed GP-25 file dir

# Revision 897 - LAxemann

Tweaked: Audible gun range increased to current A3 standards for russian weapons

# Revision 896 - Bakerman

Minor heavyweapon edits

# Revision 895 - Bakerman

Fixed weapon check in rhs_firedCannon.sqf

# Revision 894 - Bakerman

+ 125mm cannon recoil

# Revision 893 - Bakerman

CfgRemoteExec function entries

# Revision 892 - Bakerman

+ PSNR-5K deploy & hide sounds

# Revision 891 - Bakerman

@ BMP-3 servo sound

# Revision 890 - sabre

[Textures] Fixed dark spot from compression making the rounds look struck.

# Revision 889 - Bakerman

@ 2S25 & BMD-4 servo sounds

# Revision 888 - Bakerman

T909 minor script updates

# Revision 887 - Bakerman

Fixed type in rhs_rgno_impact.sqf

# Revision 886 - Bakerman

@ FCS target lead
+ Option to disable/enable FCS target lead

# Revision 885 - Bakerman

Remove some of the debug displays from rhs_rgno_impact.sqf

# Revision 884 - Bakerman

+ RGN Impact Grenade

# Revision 883 - Bakerman

^ RGN Impact Grenade

# Revision 882 - sabre

[Textures] Updated EMR swatch.

# Revision 881 - gurdy

^ More EMR stuffz

# Revision 880 - gurdy

^ EMR Pass 2

# Revision 879 - gurdy

+ new EMR test

# Revision 878 - Redphoenix

+ first test of new GP25 sounds - T744

# Revision 877 - Redphoenix

+ first iteration of Mi24 sounds- T987

# Revision 876 - Redphoenix

^fixed mirrored UV islands for BMP3 left mirror - close T903

# Revision 875 - Redphoenix

@ fixed wrong bis_fnc reference and missing scope errors for headgear randomization - T908

# Revision 874 - Redphoenix

+ added missing PROPREFIX for rhs_c_cti_indep and rhs_c_identity

# Revision 873 - Redphoenix

^Helicopter Pilots should not have random facegear from now on - close T908

# Revision 872 - Bakerman

^ 3D17 smoke effects

# Revision 871 - Bakerman

^ Countermeasure controls & reload time

# Revision 870 - Bakerman

- RHS_fnc_MP removed
T902 Updated APS & CM scripts to use remoteExec

# Revision 869 - Bakerman

@ Sprut-SD FCS laser timing
T868 New shtora warning sound, fixed gunner controls, vehicle compass now works with shtora animations, T-80UK shtora turn is a bit broken

# Revision 868 - Bakerman

T868 T-80UK dazzlers & general script improvements

# Revision 867 - Bakerman

Removed hints from cmInit.sqf

# Revision 866 - Bakerman

@ BMP-3 editor icon size

# Revision 865 - Bakerman

T868 T-80UK shtora compatibility

# Revision 864 - Bakerman

@ AINET fuse disabled for AI

# Revision 863 - Bakerman

Reverted all recoil entries.

# Revision 862 - Bakerman

Removed experimental damage values from T72 config

# Revision 861 - Bakerman

T902 Script updates for A3 1.50

# Revision 860 - Bakerman

125mm & 100mm recoil using shotDeploy and a proper formula for standardized recoil

# Revision 859 - Bakerman

125mm recoil test continued, using shotSubmunition for CE&HE rounds

# Revision 858 - MistyRonin

@ Last fixes and additions to Russian Ammo & Weapons crates

# Revision 857 - MistyRonin

@ Fixes to Russian Ammo & Weapons crates

# Revision 856 - MistyRonin

+ Russian Ammo crates

# Revision 855 - Bakerman

125mm KE recoil is back as part of a test

# Revision 854 - Bakerman

T902 CM control scripts updated to 1.50

# Revision 853 - Bakerman

T902 Script updates

# Revision 852 - Redphoenix

^ Arma 3 will now use "RedHammerStudios" as pbo author in rpt - AFRF

# Revision 851 - Redphoenix

^ Adjusted mirror position for all Gaz66 trucks - close T901

# Revision 850 - Redphoenix

@fixed Texture Glitch on Tigr - close T896

# Revision 849 - Bakerman

+ 902A/B smoke launcher sounds

# Revision 848 - Bakerman

T893 Fixed stupid mistake

# Revision 847 - Bakerman

^ Increased exhaust smokescreen lifetime
T893

# Revision 846 - Soul_Assassin

Weapon anims reverted

# Revision 845 - Soul_Assassin

^ Updated mod logo

# Revision 844 - Redphoenix

^ updated TR8 model, textures and RVmat - close T836

# Revision 843 - Redphoenix

^ updated Ural instrument gauges

# Revision 842 - Soul_Assassin

@ Exhaust cover supports are no longer visible when exhaust covers are missing on Mi-24

# Revision 841 - Soul_Assassin

@ Transparent PKM cover on Mi-8MTV3
@ Mi-8MTV3 cargo places reduced to 13 in line with proxies

# Revision 840 - Soul_Assassin

^ All Russian rifles now sit lower on back - close T691

# Revision 839 - Soul_Assassin

Adjusted AK-74 back position - part one of T691

# Revision 838 - Bakerman

@ Rebel T-72 flag now disappears on all clients

# Revision 837 - Redphoenix

^ Tigr Cockpit gauge animation fixes

# Revision 836 - Bakerman

+ ERA explosion sound effect

# Revision 835 - Stagler



# Revision 834 - Stagler

-Added BTR-60 Groups
-Added BMD-1 Groups

# Revision 833 - Stagler

-Added BMD-1 to Insurgent faction.
-Added BTR-60 to Insurgent faction.
-Added Insurgent camo to Insurgent BM-21

# Revision 832 - Bakerman

T868 Corrected tiny script omission

# Revision 831 - Bakerman

^ Effects now use render position
T868 shtoraDetect checks for terrain intersect and firedSaclos is  compatible with AI gunners

# Revision 830 - Soul_Assassin

@ Cargo capacity on BTR series reduced to 7

# Revision 829 - Bakerman

T793 Only machines with interface can see barrel effects

# Revision 828 - Bakerman

Cleaned up the mess

# Revision 827 - Keeway



# Revision 826 - kenji

correct turn out bug and shadow bug on turret texture

# Revision 825 - Bakerman

T868 More marked as SACLOS

# Revision 824 - Soul_Assassin

Fixed PTS-M driver feet - closes T883

# Revision 823 - Bakerman

T868 Added firedSaclos function

# Revision 822 - Bakerman

T868 Shtora can now sense 125mm ATGM lasers

# Revision 821 - Bakerman

T868 Removed debug systemChat messages

# Revision 820 - Bakerman

T868 Spooky zombie tanks! Shtora can now operate with empty or partial crew. Dazzler weapon moved to TC.

# Revision 819 - Bakerman

^ Zues compatibility for weapon fire camera shake

# Revision 818 - Bakerman

This should build

# Revision 817 - Bakerman

This should not build

# Revision 816 - Bakerman

Build test

# Revision 815 - Bakerman

T868 Fixed shtoraInput missing semicolon

# Revision 814 - Bakerman

Fixed CM controls and removed debug display from shtora T868 T882

# Revision 813 - Bakerman

T868 fixed tiny script error

# Revision 812 - Bakerman

+ Shtora dazzlers
T868 Redux of shtora functions and dazzlers added for T-90/A

# Revision 811 - kenji

wip texture for revised t-80um turret shape

# Revision 810 - kenji

fixes missing hull

# Revision 809 - Bakerman

+ RHS_fnc_isPlayer

# Revision 808 - Bakerman

rhs_mp_exec fix

# Revision 807 - Soul_Assassin

Finalized PTS-M - close T855

# Revision 806 - sykoCrazy

Gravity geo boxes "component" selection removed to avoid ingame collision

# Revision 805 - sykoCrazy

Gravity geo boxes "component" selection removed to avoid ingame collision

# Revision 804 - sykoCrazy

Gravity geo boxes "component" selection removed to avoid ingame collision

# Revision 803 - sykoCrazy

Gravity geo boxes "component" selection removed to avoid ingame collision

# Revision 802 - Bakerman

^ Updated CE penetration & protection script

# Revision 801 - Bakerman

Fixed CM controls for all. Close T878

# Revision 800 - Bakerman

T868 Shtora temporary interface for T-90's

# Revision 799 - Bakerman

^ AI can deploy and use PSNR-5K radar

# Revision 798 - Bakerman

T868 Shtora for T-80UK pt2

# Revision 797 - Bakerman

T868 Shtora for T-80UK

# Revision 796 - Soul_Assassin

PTS-M Lods

# Revision 795 - Soul_Assassin

@ T-90s now back to single driver periscope

# Revision 794 - Bakerman

T868 Shtora for T-90A

# Revision 793 - Soul_Assassin

Finalized T-90A and T-90 - closes issues T858 and T861

# Revision 792 - Bakerman

@ Vehicle crews can now access their countermeasures
T867 Done for AFRF, now we only need to add countermeasures for USF @gurdy

# Revision 791 - vasmkd

T90A diffuse and speculars

# Revision 790 - Bakerman

Script improvements. T-80UE1 received AINET

# Revision 789 - Bakerman

+ 9E154 proximity fuse for 100mm HE-FRAG 3UOF19-1 (airburst)
^ BMP-3M and BMD-4M loaded with 3UOF19-1 rounds

# Revision 788 - Bakerman

T868 Fixed fire command being called on input while in manual

# Revision 787 - Bakerman

T868 Removed hint

# Revision 786 - Bakerman

T868 Improved AI gunner turret interaction, fixed MP packet init

# Revision 785 - Bakerman

+ Shtora protection system
+ RHS_fnc_MP script function
T868 The first iteration that I can share. Still needs a lot of work!

# Revision 784 - Bakerman

T-90 shtora animation and additional memory points

# Revision 783 - Bakerman

Fixed and reduced network load of PTS cargo scripts. Still needs overweight exception

# Revision 782 - Bakerman

Fixed pitch calculation

# Revision 781 - Soul_Assassin

^ GAZ-66 Stringtables and configs cleaned up

# Revision 780 - Soul_Assassin

Improved PTS-M cargo scripts.

# Revision 779 - Bakerman

^ Vehicle smoke generator will now turn the engine on if required

# Revision 778 - Soul_Assassin

@ Weapon default FOV changed to 0.25 - work on T851

# Revision 777 - Soul_Assassin

PTS-M fixes

# Revision 776 - Bakerman

Fixed radar relative pitch check

# Revision 775 - Soul_Assassin

PTS-M alpha problems, track movement, shadows, proxies

# Revision 774 - Soul_Assassin

PTS-update

# Revision 773 - reyhard

@ fixed 1pn93-2 double ilumination
@ tweaked mi8 hitpoints
@ reversed joystick controls on mi8

# Revision 772 - Bakerman

T-90 shtora memory points

# Revision 771 - Bakerman

T863 Fixed ainet data being set on current round

# Revision 770 - Bakerman

T863 Effects & fixes


# Revision 769 - Bakerman

T863 Removed hint


# Revision 768 - Bakerman

T863 I hate autoloaders

# Revision 767 - Bakerman

+ 125mm ATGM pusher muzzle effect

# Revision 766 - Bakerman

T863 Plissa sight now works. Changed to ainet to timer fuse. Ainet data clears after use

# Revision 765 - kenji



# Revision 764 - kenji

small correction to t-80uk turret

# Revision 763 - MistyRonin

+ Adding insurgent uniforms to VA - that should be all that was left, hence close T850

# Revision 762 - kenji



# Revision 761 - kenji



# Revision 760 - Bakerman

+ RHS_fnc_cbalTimeToDistance

# Revision 759 - Bakerman

+ 125mm Sabot petals

# Revision 758 - kenji

upadated sabot model

# Revision 757 - Bakerman

+ AINET smart fuse for T-80UK / T-90 / T-90A
T863 First commit - 1G46 laser not working?

# Revision 756 - Soul_Assassin

Further T-90A work

# Revision 755 - Soul_Assassin

T-90 texture updates

# Revision 754 - Soul_Assassin

+ T-90A

# Revision 753 - Redphoenix

+propper PTS-M physX

# Revision 752 - Bakerman

Fixed T-80UK smoke launchers

# Revision 751 - kenji

small t-80uk proxy update

# Revision 750 - Bakerman

T849 RHS_Radar_Enabled bool & minor improvements

# Revision 749 - kenji

improve t-80uk lod and destroy effect

# Revision 748 - Bakerman

T849 Fixed variable pointer

# Revision 747 - reyhard

@ gp25 no longer plays hide and seek game during npz mounting - close T852

# Revision 746 - Bakerman

T849 More minor changes

# Revision 745 - Bakerman

T849 Minor fixes and MP compatibility

# Revision 744 - Bakerman

T849 Redux of radar simulation

# Revision 743 - Bakerman

^ CE armor system

# Revision 742 - Bakerman

+ RHS_fnc_vectorRandomize

# Revision 741 - kenji

implement lod on main model :)

# Revision 740 - Soul_Assassin

+ PTS-M (-Sapper- and пионер)

# Revision 739 - Bakerman

+ PSNR-5K radar ping sound
T849

# Revision 738 - Bakerman

T849 AI can haz radar with disabled interface

# Revision 737 - kenji

add numbering and smoke memory point

# Revision 736 - kenji

animated shotra linkage

# Revision 735 - Bakerman

+ BRM-1K ground radar PSNR-5K "Tall Mike" simulation
T849 This is NOT FINAL! It will get changed and still needs MP testing

# Revision 734 - Bakerman

T849 radar_pos & radar_dir memory points for BRM-1K

# Revision 733 - Soul_Assassin

^ BMD-1/2 PhysX tweaks

# Revision 732 - Bakerman

T825 Smoke launcher network fix

# Revision 731 - Bakerman

T825 Smoke generator network fix

# Revision 730 - Soul_Assassin

@ Major stringtable fixes (Schmeisser)

# Revision 729 - reyhard

^ increased destroyed turret time to live
@ fixed some proxies not hidden after destruction
@ hotfixed broken smokecaps

# Revision 728 - Bakerman

T847 Strings for GRD-50/100/200

# Revision 727 - reyhard

@ forget to add ais_ce_protector param to cfg of t72b obr 89

# Revision 726 - reyhard

+ added turret popping script for t72 tanks
^ moved era to model on t72b obr 85 for future damage model use
^ tweaked displayNameShort for AT rockets
^ converted t72b obr89 to new damage model
@ fixed some sorting issues on t72b3


# Revision 725 - Redphoenix

^ BMD PhysX Behavior 

# Revision 724 - Stagler

-string error, doh!

# Revision 723 - Bakerman

+ GRD-50, GRD-100 and GRD-100 multispectral smoke grenades for GP-25
T847 First pass, still needs custom effects and strings

# Revision 722 - reyhard

@ fixed t-72 reverse speed

# Revision 721 - kenji

add test t-80uk

# Revision 720 - kenji

add test t-80uk

# Revision 719 - Stagler

-Added strings for spetsnaz vests.

# Revision 718 - reyhard

@ fixed damage selections for t80u
^ experimental change of unit position in group for bmp1 squads - should be working much better with zeus

# Revision 717 - reyhard

^ tweaked tank positioning in groups
^ small tweaks to FCS code
@ fixed broken FG on t72b obr89
@ fixed first person view for drivers in t90 & t72b3 obr12
^ standarized a little bit HEAT hit values so new & old system go along a little better
^ reduced timeToLive for heat penetrators
@ fixed typo for malyutka penetrator

# Revision 716 - Soul_Assassin

^ BMP-1/2 turning improved

# Revision 715 - Bakerman

T825 Network test
^ Smoke generator screen blocks AI visibility

# Revision 714 - Bakerman

Fixed missing semicolons

# Revision 713 - Soul_Assassin

@ Wrong skirt texture in one of the lods of T-90 and T-72B3

# Revision 712 - Redphoenix

^ improved T-90 topspeed and acceleration

# Revision 711 - Bakerman

^ Short descriptions for RPG ammo

# Revision 710 - Soul_Assassin

@ Added T-90 to cfgPatches
@ T-90 groups had wrong class name reference

# Revision 709 - Redphoenix

^ T-72 now uses single-speed gearbox
@ possible fix for jerky pivoting

# Revision 708 - Bakerman

Smoke launcher script network test

# Revision 707 - Redphoenix

^ lowered engine and surface volume for UAZ/sounds.hpp and Ural/sounds.hpp - close T810

# Revision 706 - USSRsniper

Tochka-U wheel textures improved.

# Revision 705 - reyhard

^ reduced t72 sound volume
^ reduced minimal lase range for few vehicles
+ added bmp3m & t90 groups

# Revision 704 - reyhard

^ changed elements in proxies to better handle retexturability for bmp2
@ fixed GAZ66 R142 ladder visible in res lods
^ tweaked thermal FCS scripts

# Revision 703 - reyhard

^ improved bmp3 res lods (especially wheels which were made from scratch)
@ fixed wrong selections in bmp3_early.p3d res lod
^ [test] removed cannon from physx lod for t80 series as bis vehicles don't have it too - should improve a little bit tank behaviour in towns
^ added descriptions to 2s3 shells
@ fixed decals alpha sorting on t80ue & m45
^ added aiAmmoUsageFlags to ammo
@ restored previous t80 physx (accidentialy upload old version during previous update)
^ tried to fix t80 strange jumps but it's still there :/
^ changed mod version in rhs options menu

# Revision 702 - Bakerman

Reduced heavy muzzle refraction

# Revision 701 - reyhard

@ forget to update second cti missions

# Revision 700 - reyhard

CTI: 
^ renamed squads
@ fixed black icons in purchase menu

# Revision 699 - reyhard

@ fixed bmp3m empty res lod

# Revision 698 - reyhard

^ slighlty increased mi24 hitpoints armor
@ fixed t80um alpha decals sorting
CTI:
^ AI salvage trucks gets auto repaired after RTB
@ fixed some turret detections errors
@ added workaround for tanks stucking in place
^ small tweaks to code - preparing for replacing sendNet custom functions with remoteExec

# Revision 697 - reyhard

CTI:
+ added cantCreateAI=1; param for CTI exclusion (t72/t80 mg turrets shouldn't be manned now)
^ some more pushback improvments
@ fixed remotly controled unit variable not cleaned after releasing controls
- commented out old gear configuration - mission startup should be much faster now
^ minor code improvments

# Revision 696 - Pufu

@ fixed .tga to .paa - gorka

# Revision 695 - Pufu

@ added gorka icons | fixed diffuse textures | scope still 0 - close T460

# Revision 694 - Soul_Assassin

@ Fixed broken T-90 thermals - close T821

# Revision 693 - Bakerman

- Removed legacy smoke launcher from Sprut-SD commander

# Revision 692 - reyhard

@ fixed custom arsenal inferencing with bis function

# Revision 691 - Bakerman

^ Better 3D17 smoke performance
^ Greatly improved 902B/3D17 smoke salvo performance
- Smoke generator from T-90 gunner

# Revision 690 - reyhard

+ added custom arsenal function to prevent load bug - work on T573
CTI:
^ restored headless client support
+ adding TF LR radios if TFAR is detected


# Revision 689 - Soul_Assassin

@ BMP-3 wrong texture assignment - close issue T818
@ BMD-4M rvmat error - close issue T817

# Revision 688 - reyhard

@ another t90 proxy fixes
+ added some missing items in virtualAmmoBox.sqf
CTI:
@ fixed initial gear (missing dtk on ak)
^ equipment is now handled by virtual arsenal
+ added new stuff
^ changed MHQ to FMTV MHQ & Gaz66 R142
^ changed AI groups - ai should be more aggressive & use armor
+ added ability to remote control AI units in own group - close T492

# Revision 687 - zeealex

^ assigned new identity type to female heads, they should no longer be randomly assigned to soldiers. 
- commented out Asian and Persian head configs to prevent them from being accessed. 

# Revision 686 - zeealex

+ added missing Ti file for female heads
@ .rvmats adjusted to reflect the addition
- Removed obsolete files

# Revision 685 - Soul_Assassin

PDU-4 reticule now fits with what we believe to be the correct setup

# Revision 684 - reyhard

@ fixed T90 hull typo
^ improved cti soldiers XEH compatibility

# Revision 683 - Soul_Assassin

@ Fixed wrong female head path

# Revision 682 - Bakerman

+ Ability to disable vehicle decals with object variables 'RHS_Decal_Enabled', 'RHS_Decal_Symbol_Enabled' & 'RHS_Decal_Number_Enabled'

# Revision 681 - Soul_Assassin

^ Changed TFA classes as requested by author.

# Revision 680 - Stagler

-Changed shape of new style field cap to be more rounded. Original was too long and looked daft.

# Revision 679 - Bakerman

@ Flare launcher sound is back

# Revision 678 - reyhard

+ added missing reslods to bmp3m 
^ improved bmp3s shadows
^ increased t72b3 & t90 turret rotation speed

# Revision 677 - Soul_Assassin

Fixes to femal rvmats

# Revision 676 - zeealex

@ fixed missing textures on female heads

# Revision 675 - zeealex

@ Numerous fixes to female heads module
- disabled persian and asiatic heads pending updates
^ Improved Normal Map and .rvmat for caucasian heads. 

# Revision 674 - Olds

T80B damage tester: crew proxies restored to FG LOD--crew damage working correctly now, thanks to Reyhard.

# Revision 673 - reyhard

@ fixed damage textures for t72b3, t90 & bmp3
@ fixed Mi8Amtsh w/ UPK rocket count
@ fixed turret indicator for T90
@ fixed T90 next shell load & readiness indicator
+ added reslods for bmp3 early & late (bmp3m pending)

# Revision 672 - Soul_Assassin

^ BMP-1/2 inplace turning improved
@ BMP-1 decals added to last lod
^ BMP wheelCircumference more accurate

# Revision 671 - Olds

T80B damage tester: testing HP spheres "submerged" in FG--results are sort of predictable but nonethless undesirable--HP spheres are best if protruding from (damage-causing) FG.

# Revision 670 - Olds

T80B tester: testing effect of overlapping FG on damage sim--doesn't seem to have a much detrimental impact.

# Revision 669 - Olds

T80B tester: testing when HP spheres are offset within an FG shape; actually these results seem pretty predictable

# Revision 668 - reyhard

^ improved FCS calculations & added gun offset script



# Revision 667 - Bakerman

Correct tiny error in RHS_3D17TrailEffect1

# Revision 666 - Bakerman

+ 3D17 smoke & sparks LODs
^ 3D17 smoke optimization

# Revision 665 - Bakerman

^ Small arms barrel refraction is more subtle

# Revision 664 - Soul_Assassin

reticle resize for pdu

# Revision 663 - Redphoenix

^ removed vanilla backpacks for Indie AT and AA gunner - close T804

# Revision 662 - Olds

T80B damage tester: one large (encompassing) sphere = many small (encompassing) spheres
(That would be a YMF, Bakerman)

# Revision 661 - Olds

T80B damage tester: trimmed hitpoint spheres, still works

# Revision 660 - Olds

+ just a holding tank for a T-80B1 damage test model, I will update during testing and then delete it (being in a "source" folder, it's not getting PBO'd)

# Revision 659 - Soul_Assassin

pdu range so to 50-9000 based on http://www.polyus.info/production/designators_and_rangefinders/386458/

# Revision 658 - Soul_Assassin

finished PDU-4

# Revision 657 - Soul_Assassin

+ PDU-4 ingame reticle

# Revision 656 - reyhard

@ scoped = 0 bags with predefined loadout (as you can't change it's load in arsenal later)
^ tweaked FCS scripts (temp solution)
+ added TR-8 pip version (veeeeery early concept)
@ fixed tr-8 pistol version
^ increased lead calc speed (experimental)
+ added weapon_plate penetration materials to pdu4 & tr8

# Revision 655 - Soul_Assassin

tga excludes to some folders

# Revision 654 - Soul_Assassin

+ PDU-4

# Revision 653 - Soul_Assassin

^ Explosion and crater effects of HE rounds improved

# Revision 652 - Bakerman

@ T-90 902B smoke launcher caps display correctly

# Revision 651 - Bakerman

@ AFRF Grenades have correct English descriptions
Update T795

# Revision 650 - Soul_Assassin

^ Magazines hidden when no magazine equipped for AKs

Closes issue T791

# Revision 649 - Stagler

- Added VOG "Spetsnaz" Vest (fits on Gorka model)
- Added backpack filled with ammunition
- Added Insurgent flag

# Revision 648 - Stagler

-Closed Issue 673: Fixed side = 0 bugs with groups 
-Added strings to infantry groups 

# Revision 647 - Stagler

- fixed config bug.

# Revision 646 - Stagler

- Removed stupid bis classnames.

# Revision 645 - Stagler

- reduced shine of guerilla uniforms
- switched rifleman with sergeant at top of vdv recon config file

# Revision 644 - Stagler

- Added Guerilla Wounds
- Added VDV Recon Infantry Group (still unscoped in prep for Gorkas)
- Added VDV Recon infantry strings (still unscoped in prep for Gorkas)
- Modified existing VDV Recon Infantry Loadouts (still unscoped in prep for Gorkas)

# Revision 643 - Stagler

-Properly scoped the guerilla uniforms (cheers for the intermediate fix Bernat)

# Revision 642 - Soul_Assassin

fcs fixes

# Revision 641 - Soul_Assassin

reverted FCS calculators

# Revision 640 - MistyRonin

@Scoped CTI insurgent uniforms

# Revision 639 - vasmkd

T-90 diffuse and speculars done

# Revision 638 - vasmkd

bmp3 wheels, slightly lighter AO version, looks better IMHO

# Revision 637 - Soul_Assassin

% Removed empty visual lod from BTR-80A

# Revision 636 - Soul_Assassin

fixed wrong rvmat values for bmp3

# Revision 635 - Soul_Assassin

tweaked spec power of bmp-3
fixed smdi error

# Revision 634 - Soul_Assassin

% Fixed buggy soldier leg memory points

gorka scoped out for now

# Revision 633 - vasmkd

bmp3 wheel specular

# Revision 632 - vasmkd

bmp3 turret speculars

# Revision 631 - vasmkd

bmp3 proxy speculars

# Revision 630 - vasmkd

bmp3 era specular

# Revision 629 - vasmkd

bmp3 hull speculars added

# Revision 628 - vasmkd

bmp3 wheels diffuse plus bmp3 proxy updates

# Revision 627 - vasmkd

bmp3 proxy diffuse textures for all variants

# Revision 626 - vasmkd

bmp3 diffuse updates for all turret variants

# Revision 625 - vasmkd

bmp3 diffuse hull textures for all hull variants

# Revision 624 - vasmkd

bmp3 ERA diffuse added

# Revision 623 - vasmkd

BMP3 turret textures added for All turret variants

# Revision 622 - vasmkd

BMP3 hull and proxy normals added

# Revision 621 - vasmkd

bmp3 normals added for turret and ERA

# Revision 620 - vasmkd

changed bmp3m p3d and added new rhs_bmp3_01_3M rvmat

# Revision 619 - Stagler

-Texture improvements on guerilla clothes.
-Added bastardised headgear randomisation scripting (Thanks BIS for sneaking this capability in on the sly and not telling anyone)
-Added Machinegun Team group
-Added MG and AT ammunition assistant classes.


# Revision 618 - kenji

hull modify for flying turret disease ^_^

# Revision 617 - Stagler

-Fixed soldiers not having "put" in their weapons.
-Added 5 "guerilla" uniforms to replace default uniforms, equipped all existing troops with these uniforms.
-Changed configs to use our beanie hats and more european headwear.
-Added guerilla crewman for vehicles.


# Revision 616 - Bakerman

+ Muzzle heat refraction for AFRF weapons

# Revision 615 - MistyRonin

@Fixed ammo cost for shells 

# Revision 614 - kenji

adds sabot discard model :)

# Revision 613 - Redphoenix

+ Added usti hlavne up memory point for russian infantery weapons

# Revision 612 - Soul_Assassin

improved config class cases somewhat for documentation

# Revision 611 - Redphoenix

+ added TR-8 as weapon (no functional holding animation) + scope = 0;

# Revision 610 - Soul_Assassin

% Various lod fixes for T-72B3 and T-90

Fixed T-90 firegeometry lod - Closes issue T771

# Revision 609 - Soul_Assassin

% Fixed remaining decals on BTR-60 after being destroyed

# Revision 608 - Stagler



# Revision 607 - Redphoenix

- removed PhysX Test Version from T-72 for release

# Revision 606 - zeealex

^FEM_Mason's wonky eyelids fixed 

# Revision 605 - Bakerman

@ 902B salvo display name

# Revision 604 - MistyRonin

@Numerous fixes in RU troops configs - role icons, costs, etc.
+ Add RU RPG7 AT class - close T703

# Revision 603 - Redphoenix

@ added first iteration of TR-8 Periscope

# Revision 602 - MistyRonin

@ Fixed RU accessories' wrong inherited inertia values..

# Revision 601 - Soul_Assassin

% T-90 ERA now depletes correctly

# Revision 600 - Soul_Assassin

+ Gorka-R

Fixes issue T460

# Revision 599 - reyhard

@ fixed kh29 missiles - close T767
@ fixed Tigr blank res lod (duh, left it again)

# Revision 598 - Bakerman

+ 902B smoke launcher for T-90

# Revision 597 - Soul_Assassin

% Kh-29 locking fixed

# Revision 596 - Soul_Assassin

^ Fixed T-90 lods
% Fixed wrong texture assignements and proxies in T-72B3 lods
^ Kh-29 can lock

# Revision 595 - Olds

+added 1 additional super-strong armor material type: bP = 1.5 (i.e. 10x RHA)--so you can use this armor at 1/10th RHAe thickness for a slightly more convenient thickness calculation.

# Revision 594 - Bakerman

Reverted ammo damage

# Revision 593 - Soul_Assassin

^ Reduced smoke of RPG-26 and RShG-2

# Revision 592 - Soul_Assassin

^ Improved RPG-26 and RShG-2 peephole for easier sighting

# Revision 591 - Bakerman

T752 Removed smokecan shadows

# Revision 590 - reyhard

@ fixed bmd 2 fcs - close t762

# Revision 589 - Soul_Assassin

Fix builds

# Revision 588 - Soul_Assassin

^ insideSoundCoef added and adjusted to all vehicles to provide better compatibility with ACRE

# Revision 587 - Soul_Assassin

^ Corrected T-72 wheel geometry

# Revision 586 - Soul_Assassin

^ Corrected BTR-80 NV light type

# Revision 585 - Soul_Assassin

^ Mi-24 model improvements

# Revision 584 - Soul_Assassin

% Fixed duplicate names in decal inits, possible fix for JIP problems

# Revision 583 - Bakerman

^ Damage and penetration values updated for AFRF heavy AP rounds

# Revision 582 - Soul_Assassin

% Fixed BTR-80 recoil

# Revision 581 - Soul_Assassin

% Fixed turret elevation angled on the BTR-80/A

# Revision 580 - Soul_Assassin

+ New autoloader sound for Russian tanks (vlad_8011)

# Revision 579 - Soul_Assassin

% Fixed high VOG 6B23 armor

# Revision 578 - Olds

^corrected thermobaric weapons according to new formula (and published lethality radii in this case)

# Revision 577 - Olds

^adjusted formula and tuned penetrator iHR values--they were too high

# Revision 576 - zeealex

^ Improved two female .rvmats
^ 'Mason' head replaced with new version
- commented out 'Arnott' pending replacement  

# Revision 575 - Olds

^2nd pass damage values (hit/iH/iHR) continued

# Revision 574 - Olds

^ 2nd pass at updated damage values (hit/iH/iHR)
--values *appear* much reduced, but recall that anything with an iHR value does roughly 10x iH within 1xiHR radius.

# Revision 573 - reyhard

+ animated t90 commander cupola elements
^ changed t90 loadout
+ (experimental) t90 driver triplex
^ bmp3 is now using rhs driver visor

# Revision 572 - Soul_Assassin

^ Config formatting improvements

# Revision 571 - Soul_Assassin

removed some very wrong config comments

# Revision 570 - Olds

^ corrected ais_ce_protector to properly fire the ce armor (the code was trying to fire the animSources name before--which doesn't work; you must fire [one of] the "direct" anims named in model.cfg for this to work)

# Revision 569 - zeealex

@ Model Config typo fixed

# Revision 568 - Bakerman

T701 Fixed rhs_hitPart firing on HEAT jets

# Revision 567 - Bakerman

T701 Minor RAM compatibility changes

# Revision 566 - Bakerman

T752
- Obsolete smoke launcher from BMD4
^ Minor rhs_effectFiredSmokeLauncher improvements

# Revision 565 - vasmkd

nohq for bmp3 and bmp3m hulls

# Revision 564 - Soul_Assassin

+ T-90

# Revision 563 - Bakerman

+ 3D17 smoke shell p3d
^ Exhaust smoke generator pitch correction
T752

# Revision 562 - reyhard

@ fixed Tigr dashboard always shining

# Revision 561 - Olds

^ First pass at recalibration of RHS ammo values (hit, indirectHit, indirectHitRange)
- commented out some Kart DLC sounds in rhs_weap_pistols.hpp b/c they were preventing build--don't know whey they're in there, possibly ask Mario

# Revision 560 - zeealex

+ Initial injection of female heads

# Revision 559 - kenji

forgot to submit adds memory point require for smoke generator

# Revision 558 - Bakerman

+ Simulation of tandem HEAT warheads
T701 Temporary initial warhead for AFRF tandem munitions

# Revision 557 - kenji

add bmd1/2 engine smoke generator

# Revision 556 - kenji

implements engine smoke screen

# Revision 555 - Bakerman

T701 Preparation for tandem warheads

# Revision 554 - reyhard

@ fixed Gaz-66 R142 mast res lod bug

# Revision 553 - kenji



# Revision 552 - kenji

implements btr-80 smoke cap

# Revision 551 - Bakerman

^ Brighter 3D17 spark effects

# Revision 550 - kenji

Implement smoke launcher cap

# Revision 549 - Stagler

- Altered colours of the two Beanie hats to be less desaturated and white.

# Revision 548 - reyhard

^ corrected sprut sd geometry as smoke grenades were colliding with physx geo
^ replaced bis fired EH for sprut sd & bmd4
@ fixed bug with folding/unfolding AK74M (plum mag)

# Revision 547 - kenji

Implemented smoke launcher cap animation but smoke grenade are not spawn, possible error with script not being called?
				

# Revision 546 - reyhard

^ reduced DPM AK5 muzzle flash size - close T736

# Revision 545 - Soul_Assassin

+ more documentation

# Revision 544 - Soul_Assassin

+ Added documentation for Gaz Tigr

# Revision 543 - Soul_Assassin

+ Set up for class documentation
+ Class documentation for 2S3

# Revision 542 - Redphoenix

- AKM / AKMS can no longer support DTK4 silencers
+ AKM / AKMS have new DTK-1L muzzle attachment - close T734

# Revision 541 - Bakerman

Reverted/fixed T-72B3 era hitpoints

# Revision 540 - reyhard

@ fixed ATGM FCS calculations - close T730
@ fixed T80U recoil - close T732
- removed legacy bipod stuff
^ some WIP work on FCS calculations (bmd4/t72b3,etc)

# Revision 539 - Redphoenix

^ deleted arbitrary rear sight from PMM in pilotview LOD - close T710

# Revision 538 - MistyRonin

^ Update PKM & PKP weird bipod as side attachment

# Revision 537 - Soul_Assassin

[TAG] First commit of 0.3.8

# Revision 536 - reyhard

@ workaround for CBA smoke launcher bug
@ added scopeCurator=0 to tigr-m & t80u test as scope=1 is no longer hiding units from zeus

# Revision 535 - reyhard

@ fixed BMPs smoke memory points selection - keep in mind that binarize may sometimes cut selection named same way but with capital leters in different place (like mainTurret & mainturret) in unpredictable way

# Revision 534 - reyhard

- scope=1 to t80u test

# Revision 533 - kenji

implement smoke launcher cap

# Revision 532 - reyhard

+ added left door closing delay for mi8amt & m8mt (cargo)
@ corrected typo with left door closing for mi8amt & mi8mt (cargo)

# Revision 531 - reyhard

- removed dummy tigr-m (scope=1)
^ improved era hitpoints for t72 2012 - increased era hp  & tweaked memory points 
@ fixed script errors when setting range to 0 using balistic computer

# Revision 530 - kenji

implement t-80u/e-1/m/45m smoke grenade cap

# Revision 529 - kenji

t-80u/e-1/m/45m smoke grenade implement

# Revision 528 - reyhard

@ fixed wrong inheritance of camo ak74m (scope = private error)
@ fixed t72 era destruction selection (wasn't attached to otocVez)
^ added some missing elements in FG for t72 (searchlights, nsvt, etc)
@ fixed t80u missing sources errors in rpt
^ scoped=1 patchless soldiers till they receive proper names
^ improved t80b & t80a FG + added era hidding after depletion

# Revision 527 - reyhard

+ added ability to hide light covers in VG for UAZ, URAL & Gaz66
+ added some missing 6b13 vests in virtualAmmoBox.sqf


# Revision 526 - kenji

implement new smoke grenade

# Revision 525 - kenji

implements new smoke grenades

# Revision 524 - Bakerman

T718 T-72 animations for 902A smoke launcher

# Revision 523 - Soul_Assassin

^ Added new smoke effects to T-72B [Ctrl+C to switch to smoke generator, C to engage while engine running]

# Revision 522 - reyhard

^ changed metal_plate penetration material to new weapon_plate for russian weapons

# Revision 521 - Soul_Assassin

@ 1P78 night sight in correct position - closes issue T717

# Revision 520 - Soul_Assassin

^ Lods, reticle, shadow and ranging added to T717

# Revision 519 - reyhard

^ added delay to fold script - should improve performance

# Revision 518 - Bakerman

+ T-72B3 Received smoke screen generator - Update T385, Reverted recoil T709

# Revision 517 - Olds

^ Strengthened ERA hitpoints a bit (this is major WIP that will eventually involved balancing weapon values and moving away from the 'overpowered HE' BI philosophy that we've inherited from the traditional 'hitpoint damage system'). So, yeah... long story.
^ Tweaked ERA destruction fx (preparing to write a thesis on undocumented particle system properties... :P)

# Revision 516 - Soul_Assassin

1P78 injected fully

# Revision 515 - Soul_Assassin

+ Added 1P78

# Revision 514 - Bakerman

T715 Improved ERA destruction effects

# Revision 513 - Bakerman

+ T-72B3 Smoke cap particle effect
- Update T385

# Revision 512 - reyhard

^ improved TFAR compatbility: 
 * removed LR radio from uaz, ural, gaz66 (except r142) & tigr
 * added TFAR LR ranges to vehicles based on vehicle data
 * added more functionality for gaz66 r142 - once deployed it's LR radio range is increased to 50km 
^ improved gaz66 r142 script - added additional parametr for instant deployment & hook for custom scripts [documentation in progress]
+ added polish stringtables by Gienkov

# Revision 511 - Olds

^ T-72B3: Fixed position bug for ERA DestructionEffects
* Effect still needs some work, but it is serviceable
* As far as I can tell, everything is working about ERA depletion now :)
* Special thanks to Bakerman & Kenji

# Revision 510 - Olds

^ Corrected T-72B3 CfgVehicles to accomodate Kenji's sideskirt fix (minor adjustment to model.cfg)

# Revision 509 - kenji

correct model.cfg error, fire geo/hit point/memory lods

# Revision 508 - Bakerman

- T715 Place holder ERA destruction effects with broken positioning

# Revision 507 - Olds

+ First pass at ERA-depletion DestructionEffects for the T-72B3
+ ERA location vertices added to Memory LOD (needed for particle fx placement)
* ERA destruction fx is currently totally over the top, will be toned down
* Hitpoint classes need a proper macro to differentiate the placement property for each hitpoint (right now, the particle fx all point to the "e1" Memory LOD vertex)

# Revision 506 - kenji

cap for smoke launcher

# Revision 505 - kenji

k5 fun

# Revision 504 - kenji

more k5 edit

# Revision 503 - reyhard

@ fixed su25 lights

# Revision 502 - reyhard

@ fixed control sticks inverted movement in mi8 & ka52
^ updated asdg jr compatibility code for marksman dlc

# Revision 501 - kenji

k5 edit add hitpoint

# Revision 500 - MistyRonin

^ Fix CTD in RU spawn weapons - Work on T695.

# Revision 499 - reyhard

@ fixed t80 nsvt commander hand anim

# Revision 498 - kenji

more glacial era fix

# Revision 497 - reyhard

+ added support for VG for most of vehicles - if vehicle have skins in camouflage tab available at VG it's most likely means  that vehicles is ready for retexturing
^ improved destruction materials for ka52 & mi24
^ improved cockpit model in exterior res lod for mi24
+ added impact destroyed rotors
@ fixed mi24 gunner memory point - close T679
@ fixed FFV issue for mi24 & btr80s
@ fixed hidding second antenna for command versions of BMDs
- removed military decals from civilian trucks
+ added hatch management function for t72/t80 nsvt (should improve MP stability)
^ improved Tochka-U scripts
+ added deployment anim available at VG
+ added easy deployment script - [tochka,1] spawn rhs_fnc_ss21_AI_prepare
+ added flatbed variants for gaz66 & ural4320 (need stringtables entries!)
^ added more vehicles to insurgents 

# Revision 496 - kenji

correct mistake with proxy

# Revision 495 - kenji

cut k5 glacial to work with new armour system

# Revision 494 - MistyRonin

+ Added all RU Weapons to Zeus/Editor spawn list - Work on T695.

# Revision 493 - reyhard

+ added deploy pivot memory point to east weapons
@ fixed FCS scripts (marksman dlc preparation)
^ changed folded AK hand anim
@ fixed transparency issue with t80b nsvt collimator
+ added missing gunner hatch shadow to t80b & a
^ tweaked tochka-u nuke script
- removed bis fcs ranges from 2s3
@ fixed pchela 1-t rpt errors

# Revision 492 - Bakerman

^ Improved 3D17 smoke effect to be more visible
- T385 Reverted T-72B3 name change. rhs_smokeLauncher now final.

# Revision 491 - Bakerman

- T709 revert change in rhs_mags_shells.hpp

# Revision 490 - Bakerman

+ PhysX based vehicle recoil
- Update T709 First attempt at vehicle recoil

# Revision 489 - Bakerman

T708 Removed old proxy reference causing LOD error 

# Revision 488 - Bakerman

@ T-72B3 K5 ERA shadows
@ T-72B3 K5 ERA number textures
- Update T708

# Revision 487 - kenji

Change name selection for number to work with new ERA system

# Revision 486 - MistyRonin

^ Add parachute to Su25 Pilots - Close T707

# Revision 485 - Bakerman

+ New 3D17 smoke effects for vehicles
^ T-72B3 upgraded to use new improved smoke
- update T385

# Revision 484 - Bakerman

T385 - Fixed T-72B3 bones and animations

# Revision 483 - LAxemann

Fixed: PK reload sounds are now in sync again. (No clue what happened)

# Revision 482 - LAxemann

Changed: Matched the ak reload sounds with the modified animation

# Revision 481 - Bibou

@ 6B13 all existing variants: Minor weight overhaul on the right shoulder area.
+ 6B13_6sh92_vog: Addition of complete model with LODs
+ Stringtable & configs: Addition of 6B13_6sh92_vog VSR + Flora variants


# Revision 480 - reyhard

@ corrected supply points for ural & btrs (only one point can be used for supply, the other one gets chopped)(work on T692)
+ added category class to vehicles (fixes zeus cost module recognition + 3rd party mods may use it for better vehicle class recognition)
^ changed UIs initialization (marksman dlc preparation)
+ added some missing authors to rifles

# Revision 479 - Bakerman

T701 Reimplemented material modifier in penetration script

# Revision 478 - Bakerman

T701 Changed ce_protector prefix to ais from rhs

# Revision 477 - Bakerman

+ AIS/RAM compatibility & support for tandem HEAT warheads - T701 Updated prefixes, converted ce_penetrators to array, merged hitPart functions

# Revision 476 - Bibou

@ 6B13_6sh92: Creation of LOD2 to 5 + ShadowLOD. Removal of the items not present in the base variant.
+ 6B13_6sh92_radio: Addition of complete model with LODs
^ 6B13_6sh92_headset_mapcase: Creation of LOD2 to 5 + ShadowLOD. Headset missing cause I have to regenerate LODs alltogethers & rework weighting.
@ 6B13_crewofficer: Completion of model with LODs
+ Stringtable & configs: Addition of 6B13_6SH92_Radio VSR + Flora
T278: WIP

# Revision 475 - kenji

improve smoke launcher

# Revision 474 - Redphoenix

[TEST] Possible T-80 Suspension Fix - FOR INTERNAL USE ONLY

# Revision 473 - Olds

^ Added rhs_ce_protector line to T-72B3 config, closes T700

Enables new CE armor system for T-72B3

# Revision 472 - kenji

test file fix zero turn but slow speed...

# Revision 471 - Bakerman

T385: Minor changes to T-72B3 smoke launchers

# Revision 470 - reyhard

+ added hasBipod param to weapons with integrated bipod
@ fixed canFloat param on bmp1/2
^ changed mast effect from treeSoft to treeHard
+ added m88 uniform to virtual ammbox

# Revision 469 - kenji

correct era not rotate with turret, animation were no inherit from otocvez in model.cfg

# Revision 468 - Olds

^ Added support to T-72B3 for CE armor and ERA (first pass anyway), hopefully this closes the following tasks: T687, T672, T671, T656, T655, T653, T652
>>instead of breaking up proxies, the model has been reproxied in a more ERA-friendly fashion
>>hull and glacis armor thicknesses have been updated

>Some cleanup to do:
>>side-skirt FG comes from outer-space and needs to match visual geometry
>>ERA hitpoint properties are random and should be standardized
>>under-ERA textures are still black
>>undoubtedly other stuff too..

>special thanks to Kenji
 

# Revision 467 - Redphoenix

^ DTK4 supressors are now a little bit shorter

# Revision 466 - Redphoenix

+ added AK5 muzzle flash hider
+ added DTK-4 (7.62)M
@ rewrote some displayName strings for better understanding
^ improved DTK4 short LODs
^ improved DTK4 long LODs
^ added different inventory icons
close T496

# Revision 465 - Bibou

^ 6B13: Minor Tweak on LOD1 (Back Vertical Straps) + Creation of LODs 2 to 5. Tweak of the shadow LOD. 
^ 6B13_6sh92: I have re-imported and re-weighted the 6sh92. 
^ Other 6b13 update following to above modifications accordingly.
T278: WIP

# Revision 464 - Stagler

- Unified russian weapon inventory icon facings.
- Added Gurdy's M88 uniform (plus strings)

# Revision 463 - reyhard

@ fixed missing source error in rpt after animation renaming
+ added traverse sound for t72 & t80 (more to come later)

# Revision 462 - Redphoenix

@ fixed DTK4 silencer not available on several AK74 and AK103 variants
@ fixed DTK4 smdi map making silencers all discolered

# Revision 461 - Redphoenix

@ fixed warping ploys on PMM slide in viewPilot LOD
@ fixed Safety switch not moving with slide in viewPilot LOD

# Revision 460 - Redphoenix

@ Fixed warped faces on PMM slide - close T696

# Revision 459 - Redphoenix

^ improved DTK4-silencer SMDI map

# Revision 458 - Redphoenix

+ added DTK-4 (Short)
+ added DTK-4 (Long)

# Revision 457 - reyhard

+ configured gaz66 r142 mast (work on T19)

# Revision 456 - Soul_Assassin

+ Added R-142 deployed configuration
@ Size of R-142 aerial antennas

# Revision 455 - Bakerman

+ Animations for T-72B3 smoke launchers - closes issue T689

# Revision 454 - vasmkd

Tigr green diffuse tweak

# Revision 453 - vasmkd

tigr nohq update

# Revision 452 - vasmkd

Tigr exterior camo final added

# Revision 451 - vasmkd

removal of rear cap part from BMP3 proxy, It should look better with normals and be uniform with ones ive added in normals

# Revision 450 - kenji

seperate cap of smoke launcher to allow animation

# Revision 449 - reyhard

+ added missing cfgFunctions.hpp

# Revision 448 - Bibou

^ 6B13: Shoulders Sausages weighting correction
^ 6B13_6sh92: minor weigthing corrections
+ 6B13_6sh92_Headset_mapcase: Addition of the mapcase on the 6sh92
T278: WIP

# Revision 447 - reyhard

@ fixed snorkel script not working with commander/gunner inside due to changed anim names

# Revision 446 - reyhard

@ fixed cargosystem lod issue
@ fixed bmd1/2 init not working
+ added some VG support for BTRs

# Revision 445 - MistyRonin

^ Updated RU Stringtable's Spanish translations

# Revision 444 - Bibou

^ 6B13_CrewOfficer: Binoculars added and weighted.
T278: WIP

# Revision 443 - Soul_Assassin

[Test] Showing a test commit - closes issue T552

# Revision 442 - Bibou

@ Stringtables for existing 6B13 vests variants
^ Correction of armor and weight values for existing 6B13 vests variants (To match values of base variants of 6Sh92 and 6B13)
+ 6B13_CrewOfficer: MapCase added and weighted to the 6B13 base model. Binoculars to be added later.
T278: WIP

# Revision 441 - reyhard

@ fixed fording depth for tanks with snorkel

# Revision 440 - kenji



# Revision 439 - MistyRonin

^ Updated RU vehicles water fording - Close T597.

# Revision 438 - Bibou

^ Weighting the 6SH92 on the 6B13 leaving original vest weighting: rework of the belt on the right kidney area as well as the vest chest area. Remaining to be done:
1-Correct the headset weighting
2-Add the adapted version of the mapcase in O2 and weight it properly
3-Variants creation
T278: WIP

# Revision 437 - reyhard

^ added pivot points to some AK74M rifles (devbranch experimental)
@ fixed some bmp3 .rpt errors

# Revision 436 - Bibou

^ Weighting the 6SH92 on the 6B13 leaving original vest weighting. One area remaining to overhaul and we'll be ready for variants creation: belt on the right kidney area. T278: WIP

# Revision 435 - Bibou

^ 6B13 Weigth Update. Still Struggling on 6SH92 weighting with the 6B13 leaving original vest weigting. Two area remaining to overgaul: strap on the right kidney and behind the top rear plate. T278:  WIP

# Revision 434 - Bibou

^ 6B13 Weigth Update. 6SH92 Back Strap reweighting - T278:  Still WIP

# Revision 433 - Bibou

^ 6B13 Weigth Update T278

# Revision 432 - Bibou

^ 6B13 Weigth Update T278

# Revision 431 - Soul_Assassin

^ Corrected PKM ammo box dimensions and handle size

# Revision 430 - Soul_Assassin

^ BTR-80 and 60 crew proxies moved to prevent clipping through hull - closes issue T634

# Revision 429 - Bibou

T278: Weight Update

# Revision 428 - Bibou

T278: 6B13_6sh92 WIP Update

# Revision 427 - Bibou

T278: 6B13_6sh92 config update

# Revision 426 - Bibou

T278: 6B13 Rigging variants creation & weighting

# Revision 425 - reyhard

close T673 - added memory point radar1_pos/dir & radar2_pos/dir

# Revision 424 - reyhard

added pkm & pkp test devbranch bipods

# Revision 423 - MistyRonin

Updated CTI Insurgents (adding AKM + GP25)

# Revision 422 - reyhard

added lodnoshadow=1 param to bmp3 proxies
deleted bmp3 backup files

# Revision 421 - Olds

-Added 3 high-strength variants of the "armour.rvmat/bisurf" penetration material
-These are intended for use in fire geometry where you need to model high RHAe material with thinner plates, to avoid problems like FG interpenetration.
-Resolves task T668

# Revision 420 - reyhard

tweaked t72b3 FG
tweaked t72b NSVT in FG
tweaked BMP3 loadout
fixed visible proxies after destruction for bmp3
added FG to heli proxies (yet it's not working anyway)
added 6b13 6sh92 to virtual ammo box
added empty umbts enginer version

# Revision 419 - Bibou

T278: Base variant of the 6B13 rigged with 6sh92 added in config.

# Revision 418 - Bibou

T278: Base variant of the 6B13 rigged with 6sh92 added and ported ingame. Still needs accurate weighting. 6B13 alone has been tweaked (scale and postionning issue compare to original max LP)

# Revision 417 - MistyRonin

Correcting duplicated line: close T659

# Revision 416 - reyhard

tweaked upk23 smdi
tweaked HeadAimDown param for su25

# Revision 415 - MistyRonin

Corrected RU Grenadier's vest's value for coherence sake. 

# Revision 414 - reyhard

added reslods to russian muzzle brakes (well, it seems it's not going be a problem since ver 1.42 - " Fixed: Weapon proxy drawing when there are not enough graphical LODs")
tweaked akm/akms ironsights

# Revision 413 - MistyRonin

Updated RU hitpoint & armor values (no longer the RU faction inherits values from alien factions with an additional armor; now inherits values from AAF )
Updated RU vests. 

# Revision 412 - Redphoenix

Revert: Changes for torque and terrainCoef are back to 0.3.6 standard - close T635

# Revision 411 - reyhard

fixed 6sh92 headset cliping
added res lod to makarov
added memory lod to some 3d ui elements (prevent spam in diag.exe)
increased version number in menu options ui
lowered disposable rpg mass
added experimental new method for FCS calc together with new data for 3bm42m & 3bm46
fixed t80ue-1 loadout (used t80a one before)

# Revision 410 - Bakerman

T651: Replaced networked variable with animationPhase.

# Revision 409 - Bakerman

T651: Added function "RHS_fnc_hitArmor" for CE armor animation.

# Revision 408 - toadie2k

Retimed anim sources on AK rifles to fit new character animations

# Revision 407 - toadie2k

Replaced AK reload (Now follows AFRF Doctrine- One hand manipulation)

# Revision 406 - MistyRonin

Updated Russian Flares, close T640

# Revision 405 - reyhard

fixed bmp3 early selection
tweaked cargo poses on btr80a
added automatic loading of disposable launchers for player(to prevent dumb looking "loading" of such launchers)

# Revision 404 - reyhard

added su25 to zeus CAS module
added russian mines to site->mine module
fixed t80a weight
NVG visible for uaz open passangers
added shadows to prv13

# Revision 403 - Redphoenix

Possible Fix: Equation to enhance engine torque. Please test and comment

# Revision 402 - reyhard

added reslods to pkm & akm/akms

# Revision 401 - reyhard

hotfixed bmp2/btr80a sight script
removed for now global variable clean up code

# Revision 400 - Redphoenix

Fixed: All T-80s now use the 4-box system for weight distribution - close T632
Small Fix: T-80s now accelerate better and faster
Small Fix: Sprut has now a better tankturnforce
Small Fix: BMP3s now use 1.0 for first grip value (to avoid physX bug)

# Revision 399 - Pufu

AKM/AKMS default sights zeroed to 350M

# Revision 398 - Redphoenix

Fix: added AK103 inventory pictures - close T625

# Revision 397 - reyhard

fixed grey su25 kh29 loadout
fixed bmp3 turnedout anim
added plissa to t80ue1

# Revision 396 - Soul_Assassin

[TAG] First commit of 0.3.7

# Revision 395 - Soul_Assassin

[Replaced] 16 or so russian radio chatter samples to more passive aviation talk

# Revision 394 - Soul_Assassin

[Fixed] Rebels have rifles with DTK

# Revision 393 - Soul_Assassin

[Fixed] Russian strings

# Revision 392 - reyhard

added keybinding to russian FCS
added m88 like texture (not configured)
added agava-2
added agava-2 as placeholder to t80ue-1
optimized option menu script

# Revision 391 - Redphoenix

Stringtable.xml German Translation Update

# Revision 390 - reyhard

added keybinding option to option menu - currently working with fold/npz/bipod script
changed gaz66 inheritance from car_f to truck_f
added NPZ dismount script
added more NPZ ak variants
optimized folding script
close T575 fixed t80 snorkel script

# Revision 389 - Soul_Assassin

[Removed] Radio chatter from tanks

# Revision 388 - Soul_Assassin

[Added] AKM and AKMS with GP-25

# Revision 387 - Bakerman

T306 - Added shake for Gsh 23 UPK. Feedback is welcome.

# Revision 386 - Soul_Assassin

[Fixed] AKM correct inventory image - closes T600

# Revision 385 - Soul_Assassin

[Fixed] 1P29 zeroing to every 100m instead of 50m

# Revision 384 - Redphoenix

added PMM to Stringtable.xml close T595

# Revision 383 - Redphoenix

All BTR80s now had an Engine Swap for KAMAZ-7403.10 close T594
General PhysX Optimization for BTR70&60


# Revision 382 - reyhard

added proper cargo anims for turned in vehicle crew
fixed turned in vehicle crew members damage handling
added turned out death anims 
added missile voice informer to mi24

# Revision 381 - Soul_Assassin

[Fixed] Armor of 9Sh92 corrected - closes issue T576

# Revision 380 - Soul_Assassin

[Fixed] Wrong muzzle attachments for AK-103

# Revision 379 - reyhard

t80 in death anims fix
bmp3 & bmd4 use ubr8 instead ubr6

# Revision 378 - Soul_Assassin

[Removed] Old stringtable files

# Revision 377 - reyhard

added option menu
added flora (alt) to virtualAmmoBox.sqf
fixed flora (alt) stringtable


# Revision 376 - Soul_Assassin

[Fixed] Russian translations for T-80B
[Added] Stringtable keys for new T-80U variants

# Revision 375 - Soul_Assassin

[Fixed] Various russian stringtable errors

# Revision 374 - reyhard

fold hotfix

# Revision 373 - reyhard

fixed p drive references in 6b26 helmets
added support for dtk ak variants in folding script

# Revision 372 - reyhard

fixed commander proxy in firegeometry of t80u series
added death & turn in anims for all t80s
tweaked turned out commander anims for t80u

# Revision 371 - zeealex

fixed 6b13 shoulder weights (T278)

# Revision 370 - Soul_Assassin

[Fixed] Minimum arma version required bumped to 1.38. Mod version bumped to 0.3.6 - closes T571

# Revision 369 - reyhard

added missing cross.paa texture

# Revision 368 - MistyRonin

Add author to independent soldiers.

# Revision 367 - MistyRonin

Add author to T72 & BTR70 in Indp.

# Revision 366 - reyhard

changed muzzle flashes for weapons without compensator

# Revision 365 - Soul_Assassin

[Added] Ak-74 based weapons now have detachable DTK

# Revision 364 - zeealex

fixed 6sh92 ShadowLOD

# Revision 363 - reyhard

fixed ka52 tubes alpha transparency
increased light amount from 2s3 flare rounds

# Revision 362 - Soul_Assassin

6B26 version and added to Vitual box

# Revision 361 - Redphoenix

- T-72: reduced tankTurnForce (turning was too sensitive)

# Revision 360 - reyhard

added pzu5 sight for t80a & t80ue1
fixed tochka-u looped acceleration sound when engine idle
added inventory items for bmp3
fixed rpt error for bmp1/2
tweaked t72 nsvt vertical speed
tweaked t72 nsvt hand anim
fixed missing gunner proxy in res lod 5.0 in nsv tripod
fixed typo in ak74 muzzles
added some configuration for recoil compensators
t80b & t80bv nsvt is usable by commander when turned out
parametrs cleanup & shadows optimizations for al t80 tanks
initial configuration of new t80u variants [AGAVA IS NOT READY YET]
fixed inifitive last mag ammo when folding/unfolding
close T566 - fixed ak103 sounds
close T564 - fixed skeleton conflict between makarov & pya
removed debug info for tochka missile script
tweaked pmm hammer

# Revision 359 - Soul_Assassin

[Fixed] BTR-80 floating turrets

# Revision 358 - Redphoenix

DTK1+3 now use weapon sound
attachable now to AK74 and AK103

# Revision 357 - Redphoenix

Initial Injection of DTK-1 and DTK-3

# Revision 356 - Soul_Assassin

[Fixed] Broken XML and some translations

# Revision 355 - MistyRonin

Fix RU Stringtable

# Revision 354 - Redphoenix

resized PBS1 close T568

# Revision 353 - Soul_Assassin

[Fixed] 1P93 shadow lod improved

# Revision 352 - Redphoenix

AFRF German Translation Update

# Revision 351 - reyhard

added shadows for akm & akms
moved closer to ironsight eye memory point

# Revision 350 - reyhard

tweaked akm selector movement

# Revision 349 - MistyRonin

Added UAV Terminal to RU Arsenal and changed Russian string for BMP3M (A)

# Revision 348 - MistyRonin

Renamed BMP-3M ( ERA ) to BMP-3M ( A ) for consistency sake, close T557

# Revision 347 - sabre

[Textures] AKM, AKMS & PKM. Version 1

# Revision 346 - reyhard

fixed uaz open passanger seat
close T544 - npz weapons may mount leuopold scopes now

# Revision 345 - gurdy

changed flora name

# Revision 344 - gurdy

fixed patchless uniforms

# Revision 343 - MistyRonin

AFRF stringtable fully translated to Spanish (yick...)

# Revision 342 - kenji

correct error on proxie

# Revision 341 - reyhard

fixed missing alpha channel for grey mi8 textures
fixed & updated makarov muzzle flash to a3 one
updated pya muzzle flash to a3 one

# Revision 340 - MistyRonin

Corrected 6sh92 capacity.

# Revision 339 - MistyRonin

Fixing 6b26 helmets 

# Revision 338 - gurdy

6B26 names

# Revision 337 - gurdy

added 6B26 base

# Revision 336 - kenji

t-80ue-1, t-80um, t-80u (m45)

# Revision 335 - Soul_Assassin

[Fix] Some stringtable fixes

# Revision 334 - Soul_Assassin

[Fixed] Cleaned up string table

# Revision 333 - Redphoenix

Final Makarov PMM Update clsoe t551
- added weapon animations
- deleted animation frames in LOD0


# Revision 332 - Redphoenix

Makarov PMM Update
- fixed mem points
- fixed logos and paths
- tweaked ammo

# Revision 331 - Redphoenix

Makarov PMM Update
- added 9x18 57-N-181S (probably needs tweaking)
- p3d update
- texture update
- initial injection of model.cfg
- added logo
- added weapon and mag to V-Ammobox

# Revision 330 - Redphoenix

PMM injection (not functional)

# Revision 329 - MistyRonin

Added 7.62 mag in RU ammobox
Updated Stringtable
Update of CTI Ind

# Revision 328 - reyhard

added 7.62 ground mags
tweaked btr80a inside cargo proxies
btr gunner & commanders may use compass now

# Revision 327 - Soul_Assassin

[Fixed] Wrong cpp inheritance

# Revision 326 - Soul_Assassin

[Added] AKM/S injection
[Fixed] NPZ SVD have correct silencer

# Revision 325 - reyhard

initial pchela1t port
tweaked destruction materials for gaz66, ural & uaz
added damage/destruction materials for tigr interior
added headlights & proxies to damageHide selection for gaz66 (+ural/uaz)
fixed non convex components on sprut sd
added 2s25 groups

# Revision 324 - MistyRonin

Su25 corrected max speed to real value. 

# Revision 323 - Stagler

- Added VV Shevrons

- Edited 6sh92, removed floating badge from model.


# Revision 322 - reyhard

added cargo system to btr60 & 80
fixed road wheels shadows + reduced amount of sections in shadow lod
removed redundant config.bin from c_a3retex
close T537 - corrected ural hidden selection textures
tweaked svd hand anim

# Revision 321 - reyhard

added joint rail support

# Revision 320 - MistyRonin

Fixed double scopes and removed scopes from the PKM. Close T535 Close T533

# Revision 319 - gurdy

beanie fix

# Revision 318 - gurdy

fixed beanie autocenter


# Revision 317 - reyhard

close T531 - added inheritance for western acc

# Revision 316 - reyhard

close T504 - please, do not add thermal shit to rhs virtual ammoboxes!
Close T523 - temp solution to radio chatter
readded western accesories to virtualAmmoBox.sqf

# Revision 315 - gurdy

added beanies

# Revision 314 - MistyRonin

Adding author info.

# Revision 313 - MistyRonin

Improved flare intensity and duration. 

# Revision 312 - reyhard

removed shovel from 6sh92 shadows

# Revision 311 - zeealex

Fixed faulty right shoulder weights on 6B13 (close T502)
Tweaked 6sh92 standalone variants to fit better on un-armoured bodies. (T507)

# Revision 310 - gurdy

updated all grey aircraft textures

# Revision 309 - reyhard

added missing penetration materials to pkp & pkm
pkm:
tweaked aiming point
added bipod anim support
tweaked config
added hand anim
tweaked a little shadows
fixed ammobelt & covers animations

# Revision 308 - Soul_Assassin

[Added] PKM (RobertHammer and Sarvs/SAM61) http://gamebanana.com/models/3207 for non-commercial license info!

# Revision 307 - laxemann

Added: New ATGM launcher sounds

# Revision 306 - Redphoenix

Slight TGP-V Texture Update

# Revision 305 - reyhard

tweaked radio chatter script

# Revision 304 - reyhard

small amunition hotfix

# Revision 303 - reyhard

increased penetrator timeToLive as it caused some strange glitches - it's now possible to destroy few bradleys in row but it's not that much
close T423 - added indicators to t80 (not realistic now, will improve it later) 
added basic radiochater implemenatation


# Revision 302 - reyhard

tweaks to weapon cannons
tweaked ak74 hand anim

# Revision 301 - Redphoenix

Gaz66 Bouyancy Maintenance

# Revision 300 - reyhard

tweaked once again illumination script
tweaked nsp signal grenades ground behaviour

# Revision 299 - reyhard

fixed some rpt errors

# Revision 298 - reyhard

improved pso1/pgo7 illumination script

# Revision 297 - reyhard

added reticle illumination to pso1, pgo7 (activated with nigthvision key) & 1p29 (tritium)
fixed btr70 gunner view

# Revision 296 - Redphoenix

added numberphysicalwheels to Tigr
SS21 PhysX and Bouyancy update

# Revision 295 - Redphoenix

added mass in physx geometry to prevent pboProject from crash

# Revision 294 - Soul_Assassin

[Update] All stringtables moved to xml

# Revision 293 - Redphoenix

More Power for the Tigr
TGP-V Texture Update

# Revision 292 - reyhard

fixed virtualAmmoBox.sqf (removed ,)

# Revision 291 - reyhard

hotfixed tigr shadow

# Revision 290 - reyhard

close T86 - added FFV to Tigr
added test cargo system for BTR70
tweaked 2a28 - ai should switch now between HE/AP rounds

# Revision 289 - MistyRonin

Removed US scopes from Russian Arsenal

# Revision 288 - MistyRonin

Tuned Russian Mountain Troops, Close T500

# Revision 287 - gurdy

added makeshift 6sh92 standalone

# Revision 286 - reyhard

tweaked once again yakb sound config
tweaked gauges in mi24 cockpit
fixed mi8 & ka52 loadouts
fixed helicopters UPK23 tracer start point
randomized scarf distribution
tweaked gsh30 behaviour
fixed some zeus missions (rus radio protocole broken)

# Revision 285 - MistyRonin

Assigned AN/PVQ-31A to RU Rifles

# Revision 284 - reyhard

close T83 - added EMR/Flora/M. Flora infantry groups
fixes & tweaks to vdv mflora/flora units loadout
added new mass for helmets
tweaked yakb - ai should now engage infantry

# Revision 283 - reyhard

deleted unused helmets
added Mountain Les fieldcaps
fixed infantry gear (watch/compass/etc)
fixed jefrejtor class name
added Mountain Flora troops

# Revision 282 - Bakerman

T445: Tweaked camera shake (less violent) and increased RHS_weap_AZP23 dispersion. It still needs proper recoil, can anybody help?

# Revision 281 - reyhard

hotfixed startEngine=0 for sprut

# Revision 280 - Soul_Assassin

[Added] All NPZ rifles
[Fixed] Missing scope proxies from rifle lods
[Fixed] Troop Stringtable double

# Revision 279 - USSRsniper

SS-21: String table corrections.

# Revision 278 - MistyRonin

Tweaked MSV EMR Infantry (added EMR headgear and vests)

# Revision 277 - reyhard

bmp3m configuration
bmp3 (all) FG & general tweaks
added destruction materials
tweaked bmp3 commander turn out anim
added new data for KPVT ammo - bs32 & bs41 shells
close T487 - added startengine=0 to bmds & sprut sd
added clan patches for russian uniforms
headgear code cleanup
smersh armor tweak
added Mountain Les 6b27m variants
tweaked headgear config - added hidden selections for retextures
added MSV EMR & VDV Flora infantry to editor
blablabla

# Revision 276 - Redphoenix

2S3 PhysX Update ( close T263 )
BMP 1&2 PhysX Update
BMD4, 4M and Sprut PhysX Update

# Revision 275 - Redphoenix

Initial BMP3 PhysX Injection

# Revision 274 - USSRsniper

SS-21: Minor fix for shadow volume selections.

# Revision 273 - MistyRonin

Standardizing Russian helmets' armor values.

# Revision 272 - MistyRonin

Updated Russian infantry armor values to absolute. 

# Revision 271 - MistyRonin

Updating Russian helmets and vests to have an absolute armor value so it can be displayed properly in the Virtual Arsenal

# Revision 270 - reyhard

some tweaks to bmp3
fixed driver view on bmp1/2/prp/brmk
added western accessories to virtualAmmoBox.sqf

# Revision 269 - reyhard

bmp3 early & late initial configuration

# Revision 268 - reyhard

fixed t72 weapon magazines

# Revision 267 - reyhard

t72 hotfix 

# Revision 266 - reyhard

some more zeus support

# Revision 265 - reyhard

fixed mi8 amt cargo positions
added script compatibility (bipod/fold/fcs, etc) for zeus controled units
tweaked MP code (doors, RWR)

# Revision 264 - gurdy

added bmp-3m (era)

# Revision 263 - sabre

NPZ nohq additions

# Revision 262 - sabre

NPZ Rail V1

# Revision 261 - Soul_Assassin

- changed size npz rails, added resolution lods

# Revision 260 - reyhard

moved weapon specific params to c_weapons
fixed bk14 bug

# Revision 259 - Soul_Assassin

[Fixed] NPZ AK-74M available in crate

# Revision 258 - Bakerman

T445: Added camera shake to ZSU

# Revision 257 - Bakerman

UPDATE T306: Edited camera shake for Mi24P & Ka52

# Revision 256 - Soul_Assassin

[Added] Ak-74M with NPZ

# Revision 255 - Redphoenix

Fixed Error popup when using PKP
close T475
Fixed SVDP Updating baseclass

# Revision 254 - Soul_Assassin

[Fix] Duplicate tokens in sprut config

# Revision 253 - Redphoenix

Unique BMD4-chassis PhysX PLEASE FEEDBACK

# Revision 252 - Redphoenix

BMD4 Test-PhysX update
Lowered CoM for BMD4s

# Revision 251 - Redphoenix

fixed gunner visible in 3rd Person close T470

# Revision 250 - Redphoenix

AK103 config inheritance updates (no more updating baseclass)

# Revision 249 - reyhard

added small coop mission

# Revision 248 - Redphoenix

Wrong LOD position for PBS1 close T469
Cleaned AK103 Configs (added ak103 baseclass)
Added AK103-1 and AK103-2 to Virtual Create
Tweaked LODs for TGP-V

# Revision 247 - sabre

Tone and size edits for EMR and Flora

# Revision 246 - gurdy

added AK103 mag


# Revision 245 - MistyRonin

Tweaking CTI once more and adding US suppressors. 

# Revision 244 - MistyRonin

Adding SP First Move

# Revision 243 - Redphoenix

Sprut & BMD4 PhysX Update

# Revision 242 - Redphoenix

Fixed wrong position of SVDS + Silencer (moving MUZZLE proxy)

# Revision 241 - MistyRonin

Adding Tochka-U to CTI

# Revision 240 - reyhard

hotfixed t tanks magazines

# Revision 239 - reyhard

tweaked folding script
added new tochka variants
improved tochka scripts

# Revision 238 - gurdy



# Revision 237 - MistyRonin

CTI Added few more items and tweaked a bit the prices 

# Revision 236 - Redphoenix

deleted unnecessary _ca texture for TGP-V

# Revision 235 - Redphoenix

initial injection of PBS-1 and TGP-V supressor
supressor on SVDS is not 100% working

# Revision 234 - laxemann

Added: Suppressed sounds for the SVD Dragunov

# Revision 233 - MistyRonin

Updated CTI mission Altis

# Revision 232 - Soul_Assassin

[Added] 6B27M EMR-Summer ESS/Balaclava variants

# Revision 231 - reyhard

fixed skeleton errors in rpt
some debuging of tochka-u nuke script

# Revision 230 - reyhard

close T374 - tweaked smoke grenades

# Revision 229 - reyhard

tweaked t72 & t80 loadouts
reduced nsvt damage
increased hull minimalHit for bmps, bmds & sprut
tweaked bmd4 hitpoints position

# Revision 228 - reyhard

fixed t80u loadout
tweaked 6b13 shadows
configured 6b13 variants

# Revision 227 - sabre

6b12 version 1. Haven't checked all ingame are going to require some tweaking will do after all version ingame. WIP.

# Revision 226 - Soul_Assassin

Closes issue T456 - Zeroing of 1P29 now set from 400 to 1000m

# Revision 225 - reyhard

slowed down RPG reload anim

# Revision 224 - reyhard

close T382 - fine tunning BMP/BMD tracks hitpoints
fixed BMD4 physx
added lockWhenDriverOut = 1; to t72 main turret
fixed t72 shadows + added shadows for NSVT
tweaked Tochka-U hitpoints ( T12 )
tweaked Tochka-U geometry
added death anims for Tochka crew
fixed missing "\rhsafrf\addons\rhs_c_weapons\anims\gestures\eload_rpk_prone.rtm" error
tweaked 6b13 config
close T453 - tweaked t80 loadouts

# Revision 223 - gurdy

added AK-103

# Revision 222 - zeealex

initial injection of 6B13

# Revision 221 - Redphoenix

Restructured silencer files
Added raw data for PBS1 and TGP-V

# Revision 220 - Redphoenix

Updated BMD-series Physx - BMD4 NOT FUNCTIONAL!

# Revision 219 - reyhard

improved btr80s destruction materials

# Revision 218 - MistyRonin

T-80 2a26 castrated ( it can not longer use ATGM )

# Revision 217 - reyhard

fixed missing muzzle flash on ak74m w/ gp25
fixed missing muzzle flash for mi24 (main armanent)
fixed missing FFV for mi24 variants
fixed mi24 gun tracers
fixed ZSU destruction effects

# Revision 216 - Soul_Assassin

Fixed T-72B3 main shadow (was missing). Added commander and gunner hatch shadows to all T-72B.

# Revision 215 - reyhard

added rsp30 to infantry

# Revision 214 - reyhard



# Revision 213 - reyhard

close T12 Tochka-U imported
fixed UPK23 gun smoke position
removed Mi8AMT Cargo variant
fixed Mi8AMT door animations
tweaked RPG7 animation
added textures for RSP30 variants 
tweaked RSP30 script
Ka-52 missiles uses proxies now (empty tube after shot)
tweaked CE penetrator behaviour (reduced timeToLive)
tweaked Mi24 damage selections

# Revision 212 - Redphoenix

T80-family PhysX Update
close T261

# Revision 211 - reyhard

added RSP30
fixed ural rpm indicator
tweaked Yak-B sound configuration

# Revision 210 - Redphoenix

Tigr PhysX Update
prelimenary Tigr-M

# Revision 209 - Soul_Assassin

Closes issue {T368} - PSO normals

# Revision 208 - Soul_Assassin

Closes issue {T24}

# Revision 207 - reyhard

added new FAE effect (S8 DF/RShG2/TGB7)
added thermal camera view to Ka52 cockpit
added UPK23-250 pods
added misc heli variants - UPK, CAS, FAB, Cargo (mi8 without pkts, with FFV positions & animated doors)
added Su25 w Kh29 rockets variant
fixed ataka missiles proxies
added random mi24 skins script
added new rockets for S8 (FAE/tandeam HEAT)
added CE penetration to S8 heat rockets 
cleaned up su25 properities

# Revision 206 - reyhard

added 350m zeroing to pso1
added 9m47 model to prp3
fixed visbility of nsv bags

# Revision 205 - Soul_Assassin

[Added] Headphones to transport pilot

# Revision 204 - Soul_Assassin

[Added] Lods and inventory icon to GSSh-18

# Revision 203 - Soul_Assassin

[Added] GSSh-A-18 Headphones

# Revision 202 - reyhard

close T419 - turret initElev
fixed og7&tgb7 penetration
added minimalHit to btr turrets
inertia tweaking

# Revision 201 - reyhard

added configuration for camo tigr

# Revision 200 - vasmkd

Camo tigr for hidden selction test

# Revision 199 - gurdy

added AK-74M with plum magazine

# Revision 198 - MistyRonin

Removing alien technology from ZSU, the Russians will have to wait until 2035 to get them back...

# Revision 197 - reyhard

some tweaks to bmp1&3 interior
tweaked zeroing options for pso1
added nsvt bags to virtualAmmoBox.sqf
close T7 - configured 2p130 mortar on prp-3 (player only solution)

# Revision 196 - reyhard

add AGM_FCSEnabled=0 to bmp3

# Revision 195 - reyhard

added warning lights to mi24 cockpit


# Revision 194 - reyhard

fixed russian translations

# Revision 196 - reyhard

add AGM_FCSEnabled=0 to bmp3

# Revision 195 - reyhard

added warning lights to mi24 cockpit


# Revision 194 - reyhard

fixed russian translations

# Revision 193 - reyhard

tweaked ka52 lights
fixed some instruments in ka52 cockpit
fixed bmp3 gunner hatch

# Revision 192 - reyhard

improved ka52 mfd textures
close T63 - improved Ka52 hud
close T20 - added FCS to BMP3
improved bmp3 interior (as extorior will be changed anyway :P)
close T17 - fixed RShG-2 texture
tweaked RPG26 & RShG-2 positioning
close T311 - added missile reticle to BMP2
close T360 - fixed Btr80 kpvt shadow
added brake lights to Btr80
added pedal anims to mi8 & ka52
hotfixed Tigr brake lights
added hiddenSelections to btr80s
added deletion of ai disposed AT launchers after 300s
fixed zeroing for APCR shells in BMD4 FCS
fixed some letters in FCS UI didn't show correctly
reduced 2a42 dispersion

# Revision 191 - reyhard

added hidden selections to bmps, tigr & 2s3
added brake lights, shadow res lod & did small clean up in properities fo bmps
added AGM_fuelCapacity param
removed FFV postions from kung gaz66
changed default zeroing on 1p29 to 400m (still I'm not sure if it's right)

# Revision 190 - reyhard

added pedal anims to mi24

# Revision 189 - reyhard

fixed rshg2 zeroing 

# Revision 188 - reyhard

tweaked bmp front armor
tweaked t72 nsvt handle anim
tweaked vest capacity
reduced cost for igla ammo
increased bmd track armor

# Revision 187 - reyhard

hotfixed .rpt spam

# Revision 186 - reyhard

enabled retexturing with setObjectTexture command on uaz & Ural
added RWS to Mi24
experiments with aiDispersionCoef

# Revision 185 - reyhard

added airlock=2 to yak-b - they should now engage enemy helis

# Revision 184 - reyhard

close T344 - folding disabled in vehicles
close T329 - corrected firing angles for rear mi8amtsh gunner
sorted alpha chanels for nsvt elements on t72
increased tracks armor for bmd4 & sprut-sd
increased wheels armor for btrs


# Revision 183 - MistyRonin

Add additional AK mag with no tracer rounds, remove tracers from SVD mags, close T333

# Revision 182 - reyhard

readded bmp3 groups

# Revision 181 - Soul_Assassin

- first commit of 0.4
- bmp3 reenabled in the editor

# Revision 180 - Soul_Assassin

- nsvt feed tray cover rotates normally

# Revision 179 - Soul_Assassin

- mi8 slingloading fixed

# Revision 178 - reyhard

fixed missing zeroing for NSV

# Revision 177 - reyhard

tweaked atgm config

# Revision 176 - reyhard

added simple insurgents faction for CTI
added chernarus CTI version 

# Revision 175 - reyhard

improved T72 NSVT
locked T72 NSVT turret (AI not getting in) + readded getin memory points (no more injuries while geting out from NSVT turret)
added NSV on tripod


# Revision 174 - Soul_Assassin

gun sight cover added

# Revision 173 - reyhard

tweaked btr70 shadows
tweaked t72 optic modes (probably fixed dissappearing optic bug)
added front hull era plates for t72 1989 & 2012
another improvment to folding script
added editing zone size param to zeus missions

# Revision 172 - reyhard

tweaked mi8 suspension
tweaked folding & bipod scripts
added new folded ak74 variants (desert & camo)
fixed missing components error on ka52

# Revision 171 - reyhard

tweaked rtd center

# Revision 170 - reyhard

close T318 - PKP configuration tweaks
tweaked bipod & folding script
tweaked tm62 mine trigger

# Revision 169 - Soul_Assassin

Further FDM work 

# Revision 168 - Soul_Assassin

Adds to T88 - Mi-8 start position fixed for AFM

# Revision 167 - Soul_Assassin

Closes issue T73 - Slingload feature added to vehicles

# Revision 166 - reyhard

fixed weapon stringtable
tweaked folding script


# Revision 165 - gurdy

made AK-74M naming convention match everything else

# Revision 164 - Soul_Assassin

Closes issue T144 - 1PN93-2 for RPG-7 fully functional and has new texture

# Revision 163 - Soul_Assassin

Added 1PN93-2 sight

# Revision 162 - Bakerman

Close T315 - Added compatibility check

# Revision 161 - Soul_Assassin

Closes issue T142 - PSO ranging and zeroing correct

# Revision 160 - reyhard

removed radar from mi24

# Revision 159 - reyhard

added tail_decals selection to russian helis for better retexturability (+ civilian mi8 as a example)
added ability to fold/unfold bipod on pkp
tweaked uaz suspension
tweaked folding stock script
removed ability to mount optics on folded AK

# Revision 158 - reyhard

close T92 - added patchless uniforms
added script to fold/unfold AK74 (binded to ctrl+c - next CM key)
changed recoil for folded ak74

# Revision 157 - reyhard

close T174 - configured T72 NSVT
close T84 - lowered geometry, hopefuly it should be imposible to crawl under btr & kill everyone

# Revision 156 - reyhard

close T312 - fixed Mi8 Amtsh muzzle flashes

# Revision 155 - reyhard

close issue T303 - driver triplex zoom

# Revision 154 - Soul_Assassin

Closes issue T166 - finalized Sosna-U screen for B3

# Revision 153 - Soul_Assassin

Closes issue T290 - tweaked UAZ suspension

# Revision 152 - Soul_Assassin

arma 2 vehicles thermal fixes

# Revision 151 - reyhard

disposable script tweak
tweaked 7.62 ammo values according to Bakerman suggestions

# Revision 150 - Soul_Assassin

Closes issue T297 - fixed ZSU thermals

# Revision 149 - Soul_Assassin

Closes issue T302 - T-72B3 pilot view fixed

# Revision 148 - reyhard

increased 7.62 round damage
added new method for handling of disposable launchers - better compatibility with other mods
changed pkp zeroings
improved pkas red dot visiblity during night

# Revision 147 - Bakerman

T306 - The recoil on the Mi-24P GSh-30-2 should now be noticeable.

# Revision 146 - Bakerman

T304 - Added missing sqf files

# Revision 145 - Bakerman

T304 - Added cannon fire camera shake for RU air vehicles

# Revision 144 - reyhard

removed discreteDistance zeroing - use recticle instead
added pilot nameSound to pilots
added AmmoCoef for RPG soldiers
added booniehat flora to virtualAmmoBox.sqf

# Revision 143 - gurdy

added boonie hat in flora

# Revision 142 - laxemann

Added: New silenced sounds for AR-15 family

# Revision 141 - RedPhoenix

PhysX Update for UAZ (New Torque Curve according to newest infos)

# Revision 140 - RedPhoenix

BTR 70 & 80 suspension fix

# Revision 139 - reyhard

readded FFV & CTI
tweaked get in memory points for ural & gaz66
some tweaks & fixes to CTI
added revive script to CTI

# Revision 138 - Stagler

-T267 Some VDV soldiers lack main weapon after the addition of the scopes.

Fixed. Added more scoped ak74ms

# Revision 137 - reyhard

malyutka ammo fix
gaz 66 suspension experiments

# Revision 136 - RedPhoenix

reverse gear fix

# Revision 135 - RedPhoenix

T-72 PhysX Update (Thanks to Reyhard)

# Revision 134 - Stagler

T249 - Give some AFRF units scopes by default

# Revision 133 - RedPhoenix

small fix for T72 (short reverse, lesser tankturnforce)

# Revision 132 - reyhard

PKP:
tweaked eye memory point
tweaked ironsight shape
added bipod to virtual ammo box

# Revision 131 - reyhard

changed engine power according to torque curve on uaz
added maxspeed to t72
added sosna-u placeholder to t72b3
fixed typo in reload gestures

# Revision 130 - laxemann

Changed: Increased volume of AK reloads

# Revision 129 - laxemann

Changed: Tweaked the PKP reload timing

# Revision 128 - laxemann

Fixed: PKP reload timing

# Revision 127 - laxemann

Added: New pkp reloading sounds

# Revision 126 - laxemann

Added: New Reload sound for the AK family
Added: New firemode switch sound for the AK family

# Revision 125 - reyhard

close T252 commented out CTI for MANW

# Revision 124 - vasmkd

Sharper PKP diffuse

# Revision 123 - USSRsniper

Modified Mi-24 sling load capacity, from 3000 to 2400.

# Revision 122 - vasmkd

Try again, fixed large camo above rear wheels for tigr interior

# Revision 121 - vasmkd

Ignore previous interior for tigr. This is final:)

# Revision 120 - vasmkd

tigr final interior

# Revision 119 - RedPhoenix

set scope = 0 for all BMP3s for MANW

# Revision 118 - RedPhoenix

delete redundant file
urgent T72 physx update

# Revision 117 - vasmkd

tigr interior fix

# Revision 116 - vasmkd

Tigr interior updated with better camo and normals file

# Revision 115 - laxemann

Changed: New KPVT sounds
Added: New folder: kpvt

# Revision 114 - laxemann

Changed: New PK sounds

# Revision 113 - toadie2k

Added reload sequences to AK74M rifles.

# Revision 112 - RedPhoenix

RPG gunners will now attack helicopters with PG-7V rockets

# Revision 111 - Soul_Assassin

Closes issue T233 - B3 commander shield and 
Closes issue T232 - BTR ghost lod

# Revision 110 - Soul_Assassin

- more tweaks for T222

# Revision 109 - Soul_Assassin

Closes issue T222 - floating light. Needs to be checked.

# Revision 108 - Soul_Assassin

- all btr buoyancy fixed

# Revision 107 - reyhard

turned off FFV
improved ural cargo shadow
tweaked gaz66 ammo positioning

# Revision 106 - gurdy

UAZ name change


# Revision 105 - RedPhoenix

small adjustemnts for Ural suspension
small torque curve corrections for BMP1 and BMP2

# Revision 104 - RedPhoenix

fixed sluggish suspension on Tigr occured by fixed model
fixed Gaz66 not shifting up

# Revision 103 - reyhard

close issue T190 - improved suspension + improved axis positioning on btr80
close issue T224 - new damage textures for older t80s 
close issue T225 - added missing damage material for front light
close issue T224 - added damageVez selection for decals (though one on gunner hatch, which is not used now, is still going to appear in destroyed model)

# Revision 102 - vasmkd

t72b3 turret ERA AO darkened

# Revision 101 - vasmkd

t72b3 diffuse update with proper skirt colour

# Revision 100 - Stagler



# Revision 99 - Stagler

- Fixed Gaz-66 Repair vehicle (No repair options)
- Added Gaz-66 Ammunition resupply truck

# Revision 98 - reyhard

added some 1.36 stuff: deflection param in bisurfs & minTotalDamageTreshold=0.4; (prevents from destroying btr with M2)
added A2 RPG7 reload anim

# Revision 97 - RedPhoenix

new ural dataset after I fucked up the last one
slight gaz66 changes

# Revision 96 - reyhard

added hint if extended armor is turned on & there are rhs vehicles on the map

# Revision 95 - reyhard

fixed igla may lock on ground vehicles
fixed "Embedded skeleton OFP2_ManSkeleton has different [ bones count ] in different p3d files" in diagnostic.exe
added t72 g2012 groups
set explosionShielding to 0 for hithull hit points
changed some more "" into '
added rpg7 magazines models
added motor burning texture to rpg7 projectiles
improved firegeo of t72
improved t72 shadows
improved tigr suspension 
started work on t72 FCS remake - current system may not work (and new one is still not ready)

# Revision 94 - Soul_Assassin

Closes issue T189 - thermals to T-72B3

# Revision 93 - RedPhoenix

small Tigr PhysX enhancements

# Revision 92 - Stagler

Fixed ESS goggles not having selection and being attached to the models penis at lower lods.

# Revision 91 - laxemann

Changed: New 120mm sounds 

# Revision 90 - RedPhoenix

fixed wrong fording depth for Gaz Tigr in T203
New engine and suspension dataset for Gaz Tigr 
fixed to small fording depth for Ural 

# Revision 89 - laxemann

Added sounds for the MP-433 (rhs_weap_PYA)

# Revision 88 - reyhard

fixed some rpt errors (ural missing oil source, cannot create FXcatridge_big, missing sections in diagnostic build)
moved up COM on BMPs & BMDs 1/2
added lodnoshadow param to proxies reslods of t72, t80u & sprut SD
fixed non closed structure on t80u turret proxy shadow (shadow artifact)
close issue T188 added damageVez selection for t72b3
close issue T185 fixed bmd4 grain effect in driver optics
added FCS calculations for PKT in BMD4
close issue T199 fixed Sprut-SD elevation bug
improved damage handling script (performance optimizations)
close issue T62 - fixed no crosshair on 3rd person for russian armanent
close issue T83 tweaked 2s3 gunner view

# Revision 87 - reyhard

6b23 rifleman missing textures hotfix

# Revision 86 - reyhard

replaced TKN-1S with TKN-3 on btr80
close T195 removed wirecutter from pilot view of umtbs
reduced door action range on mi24
added camo selection for vests (using hidden selections)
fixed last res lod of 6b23 with 6sh92
added ML variants to ammobox


# Revision 85 - MistyRonin

RHS CTI: Include AFRF and USF vehicles ( factories )

# Revision 84 - reyhard

added FFV poses for Mi24 cargo
removed unused muzzleFlash effects entries
fixed missing gunner getin dir memory points for uaz open
fixed welcome screen handler

# Revision 83 - reyhard

some more changes of "" into '

# Revision 82 - reyhard

added inventory icons for new scopes
tweaks in recticle changing script
added glass selection to first res lod in ekp1

# Revision 81 - reyhard

close T167 - added kobra recticle [press / on numpad to change recticle (default secondary optics mode key)]

# Revision 80 - Soul_Assassin

Closes issue T191 - ekp1 edgeflows
Closes issue T164 - res lods and shadows fro new scopes


# Revision 79 - reyhard

changed some more "" into ' in btr80 useractions
added damage materials to t72b3 (damageVez selection need tweaks on model)
fixed some errors in 1G42 & 1G46 FCS

# Revision 78 - reyhard

changed mass of btr80s
some fixes to btr hatches (replacing "" with ')
turned off debug mode in cti
removed bystrica & bukovina zeus versions as they are not present yet
changed inertia for MGs

# Revision 77 - RedPhoenix

- improvements of Gaz-66 gearbox (fixed not changing in 3rd gear)

# Revision 76 - Soul_Assassin

Further T-72 fixes
Improved clearance on T-72: closes issue T176
Fixed some BTR-80 interior geometry sticking out
2A42 and A72 use correct autocannon sounds

# Revision 75 - reyhard

CTI:
*replaced all a = a +b & array push functions with pushback
*replaced vector functions with engine commands
*fixed bug with onConnectPlayer server script (errors in rpt)
*fixed binoculars (yet it still leaves errors in rpt)
*fixed some russian units definitions
*added more vehicles & equipment to russian side

# Revision 74 - reyhard

tweaks to mi24 memory points & geometry
tweaked commander triplex uv maping on btr70/80
fixed btr80a last res lod (I left again some work in last lod after tweaking res lods :P)
changed "" to ' in init lines & uis as pboprojects handles them different (errors about missing ;)
fixed issue T171 - tweaked Mi8 speed
fixed issue T175 - added new driver optics to 2s3
fixed issue T127 - commander optics stabilization on t80
fixed issue T4 - changed M112 atgms to M119 on T80A/U
fixed issue T182 - commented out BMP3 groups
changed T72 FCS 'laser' & PL1 - should improve AI behaviour in T72, T80 (without letter) & Sprut-SD
tweaked a little bit TM62 mass
tweaked used RPG26 & RSHG-2 tubes models
reduced Mi24 fuel consumption rate
some tweaks to TGP-A silencer - need testing (connected with issue T187)
removed test 'rpg7 air supply box' :P

# Revision 73 - Soul_Assassin

t-72 fixes, experimental change to clearance

# Revision 72 - reyhard

mi24:
*fixed components numbering in geo lods
*added some memory points for RTD simulation
*added experimental RTD xml
*changed mass to empty equivalent as weapons pods weight is handled by separate config entries now
*added more land contact points
removed more decal related rpt spam
added weight to magazines used by helis
changed tm62 & pmn-2 mass
changed tm62 fuze (200kg, magnetic)
tweaked uazs view cargo shadows
tweaked fieldcap shadows
removed nightvision param from t80s (obsolote)
increased tigr engine armor
added missing VV bmp2 variants to cfgPatches

# Revision 71 - gurdy

hind texture updates

# Revision 70 - sabre

[Optics] Kobra commit .2 cleaned NOHQ, darkened diffuse plus edits.

# Revision 69 - USSRsniper

Added Mi-24 with sling load rack.

# Revision 68 - vasmkd

rpg7v2 warheads diffuse, normals and specular updates

# Revision 67 - vasmkd

Better specular for rpg-7v2

# Revision 66 - Soul_Assassin

decal rpt spam removed

# Revision 65 - reyhard

added 1p63 recticle
fixed ural lodnoshadow issue after copypasting proxies
added some more FFV positions to uaz open
added dynamicViewLimits to uaz + tweaked view limits
added folding bipod anim - there is bipod item (rhs_bipod) which fits accessory slot. for use with scripts rather that end solution

# Revision 64 - Stagler

-Standardised Map Flag Markers 

# Revision 63 - Soul_Assassin

T-72B3 lods, shadows and decals fixed

# Revision 62 - reyhard

added firing from vehicles to ural, gaz66 & uaz open
fixed COM on btr80
fixed lights selections on t72

# Revision 61 - vasmkd

t72b3 diffuse, specular and normals added.
also t72b3 p3d updated

# Revision 60 - Soul_Assassin

changed btr-60 AS value to trigger rebuild

# Revision 59 - Soul_Assassin

removed `class = vehicle` properties from B3 proxies

# Revision 58 - sabre

[Optics] EKP1 Textures, first version. WIP!

# Revision 57 - sabre

[Optics] 1p63 Textures, First version.

# Revision 56 - Soul_Assassin

injected EKP-1S-03 and 1P63

# Revision 55 - reyhard

improved btrs geometry convexity
added missing antena on bmp1d in 1st res lod
fixed missing internal shadows in bmp1/2

# Revision 54 - reyhard

fixed mi8 rpt enginehit errors
fixed prp3 using bmp1 physx config instead of bmp2
tweaked ammo values
tweaked destruction materials for tigr
fixed proxy top error on rpg7 in diagnostic mode (missing viewpilot lod)
tweaked rpg26/rshg2 position while on back
CTI:
*replaced _x=_x+[blabla] with pushback command - "It's highly recommended to use the new pushBack command, up to 43% faster than set and up to 11843% faster a plus b! "
*removed nvg from russian default equipment
*replaced worker from crewman to driver on russian side
*fixed poping up errors connected with gui & missing sounds errors in rpt
*added some more equipment to russian side

# Revision 53 - reyhard

commit test

# Revision 52 - reyhard

test change for packer

# Revision 51 - reyhard

cti visible in missions list

# Revision 50 - reyhard

added empty rpg bag (rpg with rpgs in is still avaible but it has scope=1)
added mountain flora vest to virtualAmmoBox.sqf
readded rhs_missions

# Revision 49 - Soul_Assassin

removed wild \ in sounds

# Revision 48 - Soul_Assassin

fixed paths for new sounds

# Revision 47 - laxemann

Sounds + configs for the GSh30 aswell as the yakB

# Revision 46 - reyhard

tweaked mi24 cargo shadows
tweaked su25 shadows
tweaked btr70&80 firegeometry
removed HMD from KA-60
fixed ataka res lods order
added cfgPatches entries to a3 stuff for better compatibility

# Revision 45 - reyhard

hotfix for snorkel script

# Revision 44 - RedPhoenix

- bouyancy fixes

# Revision 43 - Soul_Assassin

rhs missions removed for build testing

# Revision 42 - MistyRonin

RHS MP missions, updated gear

# Revision 41 - Sarge

RHS Altis CTI

# Revision 40 - Soul_Assassin

fixed urals for pboProject

# Revision 39 - Soul_Assassin

hopefully final changes to make afrf pboProjectable

# Revision 38 - Soul_Assassin

pboProjects cleanup

# Revision 37 - Soul_Assassin

more pboProject fixes

# Revision 36 - Soul_Assassin

various pboProject fixes

# Revision 35 - reyhard

tweaks to btrs hitpoints & armor (few missing materials)
fixed scope=2 on base ka60 retex
fixed missing uv set error on pgo7 in diagnostic.exe
added reslods to PK-AS & PGO-7
tweaked shadows for 1p29, 1pn93 & pso-1
added reslods & new shadowlods to RPG7 
fixed RPG7 geometry
added reslods & geometry to svd

# Revision 34 - Soul_Assassin

btr70 pboProject fixes

# Revision 33 - Soul_Assassin

a2cars pboProject fix

# Revision 32 - Soul_Assassin

bmp pboproject fixes

# Revision 31 - Soul_Assassin

t80 pboProject fixes

# Revision 30 - Soul_Assassin

gaz66 pboProject fix

# Revision 29 - Soul_Assassin

decals pboProject fix

# Revision 28 - Soul_Assassin

c_sprut pboProject fix

# Revision 27 - RedPhoenix

- fixed missing tokens for pboProject

# Revision 26 - Soul_Assassin

fixes for packing

# Revision 25 - Sarge

Incorrect island name, closes T128

# Revision 24 - Soul_Assassin

build fixes

# Revision 23 - Soul_Assassin

cfgPatches added to all folders

# Revision 22 - Soul_Assassin

adding cfgpatches to model folders

# Revision 21 - reyhard

removed unused sights

# Revision 20 - reyhard

fixed token error

# Revision 19 - reyhard

test config.cpp for folder with models

# Revision 18 - reyhard

path fix for sounds

# Revision 17 - reyhard

fixed T113 "Decals showing in wrong positions sometimes"

# Revision 16 - laxemann

Added sounds for pretty much every (ground) vehicle cannon and every vehicle MG

# Revision 15 - reyhard

replaced chech text in mi24 cargo bay with russian one
tweaked damage textures for btr60, zsu, uaz & ural
added numberPhysicalWheels = 14; param to vehicles
tweaked rpg7 power
tweaked t72 obr85 & t80bv hitpoints

# Revision 14 - reyhard

fixed sound paths after pboprefix change

# Revision 13 - gurdy

added pboprefix to rhs_sounds


# Revision 12 - laxemann

Added:
Sounds and soundconfigs for the SVD + variants

# Revision 11 - laxemann



# Revision 10 - gurdy

changed T-72B3 hull texture 

# Revision 9 - gurdy

added Mountain Les test gear

# Revision 8 - gurdy

added T-72B3

# Revision 7 - reyhard

tweaked gear change & wipers sound using animationSourceSound
tweaked gear changing anims
rpg26&rshg2:
*tweaked hand anim
*added new aiming mode
*tweaked empty model
*added mass in geometry lod
reduced russian helmets armor
added slingload max cargo param
fixed ai not engagin ka52
fixed t80u some proxies not hidding on destruction

# Revision 6 - reyhard

fixed nvg grain effect in custom fcs
fixed bmd4 commander fcs
changed t72 group names
removed some debug infos from scripts

# Revision 5 - reyhard



# Revision 4 - reyhard

updated website in mod.cpp
fixed & improved hitpoints on Ka52, Mi8 & Mi24
changed Su25 & Ka52 skeleton name to avoid compability issues with other mods using bis skeleton from a2
fixed some grapichal glitches with btr70 & 80
fixed Mi24 AFM configuration
fixed missing token in bmp2 physx config
reverted suspension settings on Btrs & Tigr until issue with levitating wheels is figured out
fixed possible glitch with damage script resulting in strange penetration values
tweaked heat penetrator behaviour
tweaked 2a28 grom heat behaviour
fixed maxFordingDepth on t72, sprut sd, bmds, bmps
fixed flying ess gogles in distant lods
