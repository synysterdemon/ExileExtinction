
# Revision 1686 - da12thMonkey

@ Removed strap loop from the top of Bowman earpiece in MICH helmets, to stop clipping through

# Revision 1685 - reyhard

@ fixed M6A2 rpt errors

# Revision 1684 - reyhard

@ random texture picking in eden - close T1580

# Revision 1683 - reyhard

@ reverted m792 autodestruction
^ improved m113 driver view

# Revision 1682 - Redphoenix

^ corrected several USAF pilot stick animations close T1635

# Revision 1681 - reyhard

^ removed 1.60 targeting system
^ TOW now GHOT FLIR

# Revision 1680 - MistyRonin

^ Tweaks to Mark V SOC Crew

# Revision 1679 - reyhard

^ tweaks to M1 tanks hitpoints
^ removed double pintle_cover.p3d proxy from m1a1 tusk I & m1a1FEP

# Revision 1678 - reyhard

@ mirror for armed variants of rg33, fmtv & hemmts were not properly 
inherited (some engine change I guess) - close T1624
@ fixed missing LB script error - close T1614
^ tweaked hemmts mirrors uving
@ armed hemmts were missing some geometry in pilot lod

# Revision 1677 - Soul_Assassin

@ Attempt to fix faulty normals on sparewheel in HEMMTs

# Revision 1676 - Redphoenix

+ SMAW Spotting Rounds to Arsenal

# Revision 1675 - LAxemann

Fixed: MKV config so that the sounds work

# Revision 1674 - reyhard

@ fixed M240 anim changing script not working after reload

# Revision 1673 - LAxemann

Changed: MKV config to use new sounds

# Revision 1672 - LAxemann

Added: New sounds

# Revision 1671 - reyhard

@ Mark V alpha fix

# Revision 1670 - gurdy

@ texture fix on m1117

# Revision 1669 - da12thMonkey

@ Some weapons missing RHS author tags (M107s, MP7 camo variants etc.)

# Revision 1668 - Redphoenix

^ raised RG33 brake Force

# Revision 1667 - Redphoenix

^ FMTV Handbrake and other PhysX-related changes

# Revision 1666 - MistyRonin

^ Improve requested SWCC placeholder 
+ SPC patchless variant

# Revision 1665 - sabre

[Textures] SPC Textures sans USMC Flak patch.

# Revision 1665 - sabre

[Textures] SPC Textures sans USMC Flak patch.

# Revision 1664 - MistyRonin

^ Improved Mark V SOC physX
+ Add Armored Driver for FMTVs per request
+ Add placeholder SWCC crewman to Mark V per request
^ Updated US stringtable 

# Revision 1663 - da12thMonkey

@ Fixed rogue "camo2" selection on the gun mount in view Gunner LOD

Was interfering with the "Camo2" hiddenSelectionsTextures for the flatbed.
Lower-case meant "camo2" was a separate selection to "Camo2" and HStextures were being applied there instead.
Result was that desert vehicle had woodland flatbed in viewgunner LOD ingame. Repair and ammo models' selection names were okay.

# Revision 1662 - MistyRonin

+ Add new "Armored" driver in US Army, and assigned it to US HEMTTs

# Revision 1661 - MistyRonin

^ Changed HEMTT crews from driver to rifleman M4. 

# Revision 1660 - Redphoenix

more CfgPatches 

# Revision 1659 - Redphoenix

^ CfgPatches Fixes

# Revision 1658 - reyhard

@ hmmwv doors sounds

# Revision 1657 - reyhard

@ AH64 & AH1Z gun particles position
@ HEMMT & RG-33 OGPK mirror were mirrored (fmtv are still bugged)
@ added pintle selection for armed hemmts
+ added turn in ability for armed hmmwvs, hemmts, fmtvs & rg33


# Revision 1656 - reyhard

@ c130 get in bug seems to be fixed - please test

# Revision 1655 - reyhard

turned off c130 for some local testing

# Revision 1654 - reyhard



# Revision 1653 - bek

@ Other USF rvmat referencing AFRF

# Revision 1652 - reyhard



# Revision 1651 - bek

@ RHSUSF rvmat referencing AFRF

# Revision 1650 - reyhard



# Revision 1649 - reyhard



# Revision 1648 - reyhard



# Revision 1647 - reyhard



# Revision 1646 - reyhard



# Revision 1645 - reyhard



# Revision 1644 - reyhard



# Revision 1643 - reyhard



# Revision 1642 - reyhard

^ more c130 testing

# Revision 1641 - reyhard

^ more c130 testing

# Revision 1640 - reyhard

@ c130 testing

# Revision 1639 - MistyRonin

@ Proper M203 anim for Bk2

# Revision 1638 - sykoCrazy

@ Fixed missing rocket magazines

# Revision 1637 - da12thMonkey

^ SOPMOD M4s fitted with legal ironsights from M27
^ side rail proxies moved forward

As per Misty's instructions

# Revision 1636 - sykoCrazy

@ Fixed missing ammo class

# Revision 1635 - reyhard

^ finalized hemmt - close T1487:
	- Added damage & destruction materials
	- Player is no longer able to go through wreck
	- Lights selections
	- Added res lods
	- Added spare wheel hidding
	- Fixed destruction selections
	- Fixed M2 UI
	- Fixed M2 attenuation effect
	- Added bed in geometry physx so it's possible to transport things inside
	- Added clan logo
	- Added engine smoke & fire effect
	- Added texture selection in VG
	- Fixed gunnerview mem point
	- Fixed some selections that didn't have rvmat

# Revision 1634 - Soul_Assassin

Unburn c_MELB

# Revision 1633 - sykoCrazy

+ FFAR rocket models
@ Rocket proxy weapons on helicopters
@ Littlebird texture detail

# Revision 1632 - zeealex

[*] Reduced Spectre Texture resolution

# Revision 1631 - Soul_Assassin

@ Removed broken FFV for now

# Revision 1630 - Soul_Assassin

^ Mk19 inserted into Mk V SOC, some alpha changes.

# Revision 1629 - zeealex

[*] Fixed PEQ ShadowLODS

# Revision 1628 - reyhard

@ potential fix for misty bug

# Revision 1627 - zeealex

{*] fixed flipped opscore NSW NOHQ green channel

# Revision 1626 - reyhard

+ added flagRight & flagLeft selections to G3 uniform

# Revision 1625 - da12thMonkey

^ Added an inner aperture to the M27's rear ironsight, as per Misty's instructions. Closes T1589

# Revision 1624 - reyhard

@ fixed XEH error logs
^ mark v soc is now compatible with CBA & our EH
^ added rhs prefix to mark V animation names
@ potential fix for Mark V ctd
@ attenuation effect in Mark V turrets
@ missing materials in Mark V FG
^ changed mark v weapons so they inherit from rhs counterparts
^ removed 1.60 crewAim indicators from Bradley & M1 tanks

# Revision 1623 - Kllrt

@ Renamed UH1Y skeleton for safety

# Revision 1622 - reyhard

^ removed recompile param from USF

# Revision 1621 - reyhard

@ added missing model.cfg to markvsoc anim folder
^ changed acc combo to cfg param reading version
^ engine fire change vehicle rvmats to damaged version

# Revision 1620 - Soul_Assassin

^ Mk V SOC port M2 changed

# Revision 1619 - Soul_Assassin

@ Resurrected missing geometry on loader guns of all M1A1 and A2

# Revision 1618 - MistyRonin

^ Improved SOPMOD 2 rifles hand anim

# Revision 1617 - MistyRonin

^ Unscope Mk 18 & M4 Block 2 - As we are now into SOCOM stuff, and they have the grips, iron sights and safety configured. 

# Revision 1616 - MistyRonin

+ Tan & OD variants for SU230 3D

# Revision 1615 - da12thMonkey

+ Basic UI icons for SU-230 SpecterDR and PVS-27 MUNS

# Revision 1614 - da12thMonkey

^ Moved Specters up by a few mm to stop rail clipping, following previous upscaling
^ Hidden Specter+PVS-27 model to use updated Specter mesh

# Revision 1613 - da12thMonkey

^ Scaled up SpecterDRs to be 153mm in length (Y position might need tweaking again to sit on rails)
- Removed "Addblend" renderflag from reticle .rvmat. Hopefully fixes T1586 but needs testing since I couldn't repro the original issue ingame
^ Made 3D reticle lines thicker and scaled up range numerals so they are easier to see in 4x 3D scopes

# Revision 1612 - MistyRonin

+ SU230 Tan and Olive variants

# Revision 1611 - MistyRonin

+ Add new glass texture to Mark V SOC

# Revision 1610 - MistyRonin

+ AN/PEQ-15 Black variants config (including combos)

# Revision 1609 - Soul_Assassin

Mk V - starboard M2 replaced, alpha sorting glass fixed

# Revision 1608 - da12thMonkey

@ Missed a small part when copying+pasting shadow LOD to other PVS-27 attachments

# Revision 1607 - da12thMonkey

+ PVS-27 Shadow LOD mesh

# Revision 1606 - zeealex

[+] Added texture variations for SpecterDR and PEQ 15

# Revision 1605 - da12thMonkey

^ Centred PVS-27 on rail axis to reduce minor clipping - closes issue T1582
^ Closed missing face on M16A4 RIS top rail segments (and reduced section count while I was at it)

# Revision 1604 - da12thMonkey

@ M27 pilot views: added missing parts magazine release and fence, dust cover etc. fixes {T1579}
^ Add renderflags to SU-230 reticle rvmats
^ Fixed triangulation artifact in SpecterDR

# Revision 1603 - Soul_Assassin

^ Fixed some geometry clipping issues in first person

# Revision 1602 - MistyRonin

+ Add SpecterDR 3D (CX) variant & SU230A 3D
^ Tweaks to SpecterDR configs
+ Add M4A1 Desert strings to stringtable - Close T1555

# Revision 1601 - da12thMonkey

^ Reworked SpecterDR pilot LOD for 3d scopes - commercial reticle for Misty
+ SU-230 model (M4/M249 reticle), 3D matches 2D scope
+ SU-230A model (7.62mm rifle/M240 reticle), 3D matches 2D scope
^ Added reticle illumination in 3d modes
^ Set BUIS zero to 200m

# Revision 1600 - Soul_Assassin

^ Improved M1117 config for parsing

# Revision 1599 - Soul_Assassin

SpectreDR work

# Revision 1598 - da12thMonkey

@ Updated texture & material paths in orange tracer model to the correct location

# Revision 1597 - zeealex

[^] Updated Specter DR model and textures

# Revision 1596 - Kllrt

@ Fixed paths on MkV boat

# Revision 1595 - MistyRonin

^ Update Mark V SOC files paths

# Revision 1594 - MistyRonin

^ Improved Mark V Hull texture

# Revision 1593 - da12thMonkey

+ Calibrated 2D optics for the SU-230/PVS (5.56mm) and SU-230A/PVS (7.62mm) SpecterDR 4x mode

Matching reticles will be added to .p3ds for the 1x mode and 3D 4x once the reworked model is finalised

# Revision 1592 - Soul_Assassin

^ Patrol cap scaled down and fits better

# Revision 1591 - MistyRonin

^ Tweaks to Spectre & PVS-27 combo

# Revision 1590 - MistyRonin

@ SpecterDR POV tweaks

# Revision 1589 - MistyRonin

@ Fix missing weapon for USMC SARC (D)
^ Tweak SpecterDR

# Revision 1588 - MistyRonin

^ Config tweaks for SpectreDR family
^ Allowed NT4 Suppressors for M249 with long barrel

# Revision 1587 - Soul_Assassin

^ Moved Elcan scopes to new Scopes pbo (please put all new scopes here)
^ SpectreDR size, texture/normal and rvmat tweaks, new shadow

# Revision 1586 - MistyRonin

+ Add Mark V SOC sounds

# Revision 1585 - MistyRonin

+ Mark V SOC raw files. 

# Revision 1584 - reyhard

@ removed gear from canopies & ejection seat - close T1570

# Revision 1583 - reyhard

@ fixed infinitive ammo thing - close T1569

# Revision 1582 - zeealex

[*] Flipped specterDR NOHQ G channel

# Revision 1581 - Soul_Assassin

@ XPS dlc logo and small config cleanup.

# Revision 1580 - MistyRonin

^ Set tracer p3d in rhsusf_weapons - where it should had been

# Revision 1579 - MistyRonin

^ Add new (and proper) reticle to SpectreDR 

# Revision 1578 - sykoCrazy

+ Elcan SpecterDR reticle

# Revision 1577 - da12thMonkey

@ Fixed - M151 spotting scope _icon type image was generating a missing texture error (due to the old weapon attachment icon method). Replaced _icon.paa with a newly made .paa and different filename formatting, as per wld427's suggestion

# Revision 1576 - MistyRonin

^ Tweaks to USMC Recon loadout. 

# Revision 1575 - reyhard

^ TOW tube hiding on reload

# Revision 1574 - reyhard

@ triangulated WMX shadow lod - close T1564

# Revision 1573 - MistyRonin

^ Add AS file path to RVMAT

# Revision 1572 - MistyRonin

+ Add Ambient Shadow texture for WMX

# Revision 1571 - bek

^ re-added eotech logo because I likes it
^ tweaked textures/rvmat

# Revision 1570 - MistyRonin

- Day visual mode from AN/PVS-27 for accuracy - thanks to Hatchet's info 

# Revision 1569 - da12thMonkey

+ UI icons for other HK416 variants

# Revision 1568 - bek

^ Removed l3 branding from xps3/data/xps3_co.paa
^ Reduced xps3 glass glossiness
+ xps3 inventory icon

# Revision 1567 - da12thMonkey

Minor HK416 model changes

^ Stowed M320 front grip
^ Slight reduction of section count on all models (removed reference to IAR texture in LOD 5 and merged some 'like' sections)

# Revision 1566 - bek

+ eotech xps3 (wip)
@ a3 eotech renamed to EXPS3

# Revision 1565 - da12thMonkey

Made HK416 entries in cfgPatches weapons[] array

+ Editor weaponholders for new HK416 variants

# Revision 1564 - MistyRonin

^ Add stringtable entries for Leupold (Desert) & Specter
@ Fix wrong texture in one of the Fast Opscore

# Revision 1563 - MistyRonin

^ 2nd batch of SpectreDR configs 
+ Leupold Mk4 Desert

# Revision 1562 - MistyRonin

+ Add Leupold mk4 desert p3d

# Revision 1561 - sabre

[Textures] Swapped out old RHARD pack texture.

# Revision 1560 - MistyRonin

+ Elcan SpecterDR first config

# Revision 1559 - sabre

[Textures] Eotech Desert removed some nasty seam errors

# Revision 1558 - zeealex

[+] Initial injection of SpecterDR raw files (misty's on config)

# Revision 1557 - da12thMonkey

More HK416 stuff:

+ Added variants D10 and D14.5 with M320 GL (should have all the necessary model.cfg anims)
+ Added version of the D10 with LMT SOPMOD stock (also classes for grip system)
^ Moved optics proxies 25mm backwards
^ Moved Magazine 10mm upwards
+ Handanim to fit the M320 (sits slightly lower and further forward than it does on the M4)
+ Strings (maybe change "SOPMOD stock" to "LMT stock"?)

# Revision 1556 - da12thMonkey

+ UI icons images (M107 and HK416 variants)

# Revision 1555 - Kllrt

^ Improved HK416 shadow and added new textures for rear anim sight hide

# Revision 1554 - MistyRonin

- Scope to 1 ANVIS NVG

# Revision 1553 - da12thMonkey

Activated the ironsight hide animation for HK416 pending texture/material changes

# Revision 1552 - reyhard

@ fixed initSpeed inheritance since marksman dlc...
+ added engine smoke effect to m113

# Revision 1551 - sabre

[Textures] Slight brightness increase for M2010 Desert paint.

# Revision 1550 - sabre

[Textures[ Mk4 detail fix.

# Revision 1549 - reyhard

@ M1A1 FEP WD had texture swichted with OD variant
^ added eden attribute for DUKE antenna hiding/unhiding
^ changed HK416 14,5 muzzle velocity

# Revision 1548 - sabre

[Textures] Desert texture for Leupold Mk4 ER/T(XM2010)

# Revision 1547 - MistyRonin

^ HK416 Tweaks based on the vanilla MXC (MX Compact)

# Revision 1546 - MistyRonin

+ New batch of missing gear for the Ammo Crates, Zeus, and Virtual Arsenal

# Revision 1545 - MistyRonin

^ Update Virtual Arsenal with new weapons, uniforms and gear
^ Update Ammo & Weapon Crates
+ Zeus placeable weapons
@ Fix Wrong Opscore string

# Revision 1544 - Kllrt

^ Improved muzzle slot on HK416

# Revision 1543 - MistyRonin

@Fixes for Desert M4A1 variants

# Revision 1542 - Soul_Assassin

^ Some res lods for M977A4 Ammo

# Revision 1541 - reyhard

^ reduced muzzle speed of 10 inch HK
^ tweaked M1 decal init
^ tweaked M1 hitpoints & fixed some selection errors in res lods
^ tweaked rocket impact point for ah64 - close T1531
^ added res lods to rg-33 since plenty of people use it anyway

# Revision 1540 - Soul_Assassin

^ SPCS shoulder weights adjusted

# Revision 1539 - Soul_Assassin

Updates to PVS27 rvmat and smoothing groups

# Revision 1538 - da12thMonkey

+ HK416 grip system classes (inc. cfgpatches entries)
^ HK416 displayname as stringtable

# Revision 1537 - da12thMonkey

fixed build - I cocked up commenting out a section of the model.cfg

# Revision 1536 - da12thMonkey

^ Zeroing and animation for rear HK416 ironsight

Is also set up to hide the irons when optics are attached (rear on the D14.5, front and rear on the D10) as suggested in {T1554}. However, I've disabled the animation because the rear sight has a baked-in AO shadow that is visible when the ironsight is hidden

# Revision 1535 - da12thMonkey

^ Adjusted alignment of proxies on HK416s (muzzle, muzzleflash and side)

# Revision 1534 - Soul_Assassin

Various stringtable fixes

# Revision 1533 - Kllrt

Added HK416 WIP

# Revision 1532 - aleksadragutin

Added a basic p3d file with textures of my HK416.

# Revision 1531 - reyhard

^ removed proxies from M1 tanks & added hidden selections (WIP - decal selections are not configured properly for now)
^ tweaked gun mantlet FG for M1 tanks
^ optimized res lods for M1 tanks
^ added ability to hide DUKE antena (in VG only for now)

# Revision 1530 - MistyRonin

+ Add more Desert M4A1 variants

# Revision 1529 - MistyRonin

@ Fix old texture path in M4 desert textures

# Revision 1528 - MistyRonin

@ Fix Desert M4A1 Hidden Selections 

# Revision 1527 - MistyRonin

+ M4A1s Desert & Eotech Desert 

# Revision 1526 - MistyRonin

+ Add US weapons desert textures - Configs coming next

# Revision 1525 - MistyRonin

@ Fix Eagle UCP (AR) wrong texture
^ Improve US Army & USMC pilots loadout

# Revision 1524 - MistyRonin

+ Add last Ops-Core helmets - Close T1525

# Revision 1523 - j0zh94

@Fixed M107 zeroing error, added bullet. Zeroing may need further tweaking

# Revision 1522 - zeealex

[^] Improved M107 Visuals slightly

# Revision 1521 - da12thMonkey

^ Improved PVS27 fresnel+specular base values (further tweaking of _smdi and values may be needed)

# Revision 1520 - MistyRonin

^ Improvements of AN/PVS-27

# Revision 1519 - reyhard

^ added engine smoke destruction effect to Bradleys
@ fixed missing element at the bottom of the Bradley ramp
@ destruction selections for M2A3 BUSK III - close T1537
@ missing bipod proxy for M4 mstock variant - close T1541
@ destruction selections & missing rvmats for M113 - close T1536

# Revision 1518 - reyhard

@ wrong f22 canopy name - close T1538

# Revision 1517 - MistyRonin

+ Add few more variants of Ops-Core

# Revision 1516 - MistyRonin

^ Less brighter texture for the WMX

# Revision 1515 - gurdy

@ path corrections

# Revision 1514 - MistyRonin

^ Some more WMX tweaks.

# Revision 1513 - MistyRonin

@ Fix WMX assignation 

# Revision 1512 - MistyRonin

+ Add WMX and WMX & PEQ combo configs

# Revision 1511 - MistyRonin

+ Add WMX Flashlight

# Revision 1510 - MistyRonin

- Remove last handguns from US OCP & USMC squad leaders. - For realism sake

# Revision 1509 - zeealex

[*] reduced PVS27 texture size to 2048

# Revision 1508 - MistyRonin

^ More improvements to AN/PVS-27 variants

# Revision 1507 - zeealex

[*] rescaled PEQ 15 texture maps

# Revision 1506 - MistyRonin

^ AN/PVS-27 improvements

# Revision 1505 - MistyRonin

^ Make AN/PVS-27 scopes compatible with ASDG

# Revision 1504 - MistyRonin

+ First AN/PVS-27 config

# Revision 1503 - zeealex

[^] improved AN PEQ15 normal map and specular map

# Revision 1502 - Soul_Assassin

^ Ballistic data correct for soft headwear in VA - close T1529

# Revision 1501 - zeealex

[+] added AN PVS27 Raw files for config

# Revision 1500 - Kllrt

@ Fixed M9 firing pin safety bar movement

# Revision 1499 - Kllrt

@ SR-25 (Mk.11) has correct supressor position - fixes T1542

# Revision 1498 - Kllrt

@ Glock 17 has correct texture in LOD4

# Revision 1497 - Soul_Assassin

Upped required arma version to 1.58 - close T1532

# Revision 1496 - MistyRonin

+ ANVIS BC with mount test

# Revision 1495 - sykoCrazy

+ Ground suprresion version of the UH-1Y(2x19-tube rocket pod/2x miniguns)

# Revision 1494 - zeealex

[+] Added New AN PEQ15 model - May need readjustments to beam

# Revision 1493 - MistyRonin

@ Final fix for the Ops Core helmet 

# Revision 1492 - MistyRonin

@ Fix OpsCore shadows - 3rd try

# Revision 1491 - MistyRonin

+ Add ANVIS-9 US NVG config - The model is missing the mount, Zee is on it.

# Revision 1490 - MistyRonin

@ Fix opscore shadows - 2nd try

# Revision 1489 - MistyRonin

@ Fix Ops-core shadows - First Try

# Revision 1488 - MistyRonin

@ Fix old path in Ops-Core helmets

# Revision 1487 - gurdy

+ OD M113A3 light config textures

# Revision 1486 - sykoCrazy

@ Missing mag for empty weaponproxy

# Revision 1485 - MistyRonin

+ Add first batch of the new ops-core helmets

# Revision 1484 - MistyRonin

^ Update tan comtac headset texture

# Revision 1483 - zeealex

[^] improved SR-25 standard stock scale

# Revision 1482 - MistyRonin

@ Add missing semi colons to c_melb

# Revision 1481 - sykoCrazy



# Revision 1480 - sykoCrazy

+ Rocket proxies to AH-1/AH-64/UH-1Y models
+ Littlebird eden attributes(e.g.:changing nose decal;adding tail number)

# Revision 1479 - Soul_Assassin

Unburn Misty

# Revision 1478 - MistyRonin

@ 2nd try to fix the opscore files

# Revision 1477 - MistyRonin

@ Fixing attempt for the opscore files. 

# Revision 1476 - MistyRonin

+ Add new US Opscore models and textures. 

# Revision 1475 - gurdy

@ scope out SRAW

# Revision 1474 - reyhard

^ SMAW tweaks

# Revision 1473 - reyhard

^ improved smaw handling - removed userActions solution (yay!) and replaced it with dynamic addAction loaded upon launcher selection

# Revision 1472 - reyhard

^ tweaked M249 last res lod


# Revision 1471 - reyhard

^ tweaked AT-4 shadow
^ tweaked m590 pump action anim

# Revision 1470 - Soul_Assassin

@ Temporary switch off HiddenSelectionMaterials to prevent no material loadind on MARPAT-D MICH helmets

# Revision 1469 - Soul_Assassin

^ Improved SPCS shoulder weights

# Revision 1468 - zeealex

[^] fixed Arm clipping on Crye Gen 3

# Revision 1467 - reyhard

^ updated cfgPatches

# Revision 1466 - reyhard

^ added bradley BUSK groups

# Revision 1465 - MistyRonin

+ Add Black Merrells to G3 Black uniform

# Revision 1464 - sabre

[Textures] Added Black Merrels texture

# Revision 1463 - MistyRonin

- Scoped the Frog M81 uniform to 1, and linked the G3 M81 to it for retro-compatibility. - As the Frog M81 was meant as a placeholder of the G3 one

# Revision 1462 - sabre

[Textures] Added G3 in Black, Tan & Ranger Green

# Revision 1461 - MistyRonin

@ Correct G3 Multicam wrong texture path

# Revision 1460 - MistyRonin

+ Add G3 Uniform configs for plain variants
^ Improved SOCOM uniforms configs

# Revision 1459 - MistyRonin

+ Add G3 Uniform placeholder textures for plain variants

# Revision 1458 - MistyRonin

@ Missing display name for US Army Airborne Rifleman (light)

# Revision 1457 - reyhard

@ facepalm fix - spalling script didn't worked because I used wrong namespace
@ fixed diagnostic.exe uv source error messages for elcan, acog & m68cco

# Revision 1456 - sabre

[Textures] G3 MC small wrinkles shifted.

# Revision 1455 - sabre

[Textures] G3 MC and M81 first versions.

# Revision 1454 - MistyRonin

@ Fix wrong characters at the end of infantry_socom file. 

# Revision 1453 - MistyRonin

+ Add G3 M81 placeholder uniform 

# Revision 1452 - MistyRonin

+ Add US G3 placeholder M81 texture

# Revision 1451 - MistyRonin

+ Add US Army Airborne groups

# Revision 1450 - Soul_Assassin

Fixed SPCS pistol pouches

# Revision 1449 - Stagler

+Added Falcon-II (MC)

# Revision 1448 - Soul_Assassin

^ Adjusted FROG uniforms to fit better with SPCS

# Revision 1447 - Stagler

^Updated Falcon textures

# Revision 1446 - reyhard

@ fixed inheritance error

# Revision 1445 - gurdy

^ Altered base ACH configuration

# Revision 1444 - sabre

[Textures] US Army Camelbak v1

# Revision 1443 - Soul_Assassin

Fixed weighing issues on SPCS Camelbak - work on T46

# Revision 1442 - richardsd



# Revision 1441 - MistyRonin

^ Update US Army Airborne configs - 2nd batch
+ Add M107s painted with Leupold AI variants
^ Changed Rifleman (M590) for Breacher 
+ Added Breacher backpack

# Revision 1440 - da12thMonkey

+Added unique gear icons for MP7A1s, M8541A SSDS and Leupold 6.5-20x50mm

# Revision 1439 - reyhard

@ fixed door toggle action for unarmed M1025
^ tweaked M1025 doors FG & geometry - close T1491

# Revision 1438 - Soul_Assassin

^ Improved ACH lod switching

# Revision 1437 - MistyRonin

@ Correct faction issue with US Army UCP Airborne

# Revision 1436 - MistyRonin

+ Add first batch of US Army Airborne configs 
+ Add M62 tracer 20rnd mag 7.62
^ Updated US Stringtable.xml
^ Updated US Vehicleclasses & EditorSubcategories

# Revision 1435 - sykoCrazy

^ AH-64/AH-1/AH-6/UH-1 weapon proxies
^ Rockets, hellfire/rocket pods for USMC and Army helicopters
^ Littlebird rvmats and textures
@ AH-64 body rvmat to make it look a bit less like shiny plastic

# Revision 1434 - MistyRonin

@ Fix missing M113 desert textures

# Revision 1433 - Soul_Assassin

@ Fixed M109A6 being too front heavy - close T1477

# Revision 1432 - reyhard

^ 3den variables are no longer transmitted over net
+ added ability to decide whether doors should be left opened after dismount from M1025 series vehicles. doors provide cover & it's possible to fire through them if window is lowered
+ added some decals to hmmwvies
@ fixed something - close T1478
^ added geometry to hmmwv doors so it's possible to rest on opened ones

# Revision 1431 - da12thMonkey

^ Minor optimisation of M249 models: removed duplicated sight rail mesh in top res LODs (was adding 466 tris and visible z-fighting)

# Revision 1430 - Soul_Assassin

Tweaked G3 kneepad size.

# Revision 1429 - da12thMonkey

+ Added Premier Reticles gen 2 mildot modeloptics for M8541A SSDS
@ Corrected M8541A SSDS magnification to 3-15x

# Revision 1428 - reyhard

@ cap anim fix - close T1483

# Revision 1427 - MistyRonin

@ Correct M72A7 weight (to 3.5kg)

# Revision 1426 - MistyRonin

@ Set proper weight for M72A7 - It should be about a third of a M136 (2.5 vs 6.7kg)

# Revision 1425 - MistyRonin

+ M72A7 to Ammo crates
+ M72A7 Rifleman to USMC sub-factions
+ M72A7 as placeable object in Zeus
+ New strings into US Stringtable related to M72A7

# Revision 1424 - reyhard

^ LAW & AT4 can now be carried in backpack
@ LAW & AT4 is now reloaded properly
^ configured reload sound for at4.p3d
^ changed LAW inheritance
^ increased Javelin locking time

# Revision 1423 - Soul_Assassin

@ Fixed inverted FROG normals
@ Fixed missing selection in MICH 2000 MARPAT helmet
Finilized G3 - closes task T1480

# Revision 1422 - Soul_Assassin

+ Scoped SPCS back in, configged, made lods and Rifleman variant
+ Scoped G3 back in, re-proportioned legs, tweaked materials

# Revision 1421 - zeealex

[+] Added Gen 3 Gloves 
[+] Added .rvmat files (Gen3 and mechanix) 
[^] Improved Gen3 weighting
[^] Improved Oakley glove weighting on US marine V2 (transferrable to other models)

# Revision 1420 - richardsd

@ Fixed: Clipping issue - Fixes Ticket 1469
- Removed: All proxies, as per 1.56 update
+ added: Desert Textures WIP

# Revision 1419 - MistyRonin

+ Add MP7 to ammo crates and as a Zeus placeable object

# Revision 1418 - MistyRonin

^ Assign US DLC to MP7s

# Revision 1417 - sabre

[Textures] SPCS v1

# Revision 1416 - gurdy

@ spcs scaling

# Revision 1415 - Soul_Assassin

More MELB author stuff

# Revision 1414 - Soul_Assassin

Added DLC and author name to MELB

# Revision 1413 - MistyRonin

+ US G3 uniform materials

# Revision 1412 - MistyRonin

^ Few fixes & improvements to US troops classes

# Revision 1411 - reyhard

^ tweaks for L-159

# Revision 1410 - j0zh94

^ Updated m72_smdi.paa for Rail

# Revision 1409 - reyhard

^ another round of safe mode optimisation & bugfixing

# Revision 1408 - reyhard

^ safemode & acc combo script now properly deinitalize after embarking vehicles

# Revision 1407 - reyhard

^ proxies adjustments for L159

# Revision 1406 - Soul_Assassin

Attempt to fix MELB packing

# Revision 1405 - sykoCrazy

+ Littlebirds from MELB mod

# Revision 1404 - MistyRonin

^ Update US Stringtable

# Revision 1403 - Soul_Assassin

Scoped out G3 uniforms

# Revision 1402 - MistyRonin

^ Assign M8541A to USMC SR-25 AI rifle combos. 

# Revision 1401 - MistyRonin

^ Give proper USMC designation, M8541A SSDS, to "Premier" scope 

# Revision 1400 - reyhard

^ autotrack improvments 

# Revision 1399 - reyhard

@ Lead hotfix

# Revision 1398 - reyhard

@ small fixes to paradrop & loadout script

# Revision 1397 - Soul_Assassin

^ IOTV rescale and reposition to fit better with new proportions - fixes T1453
@ Fixed ACU missing patches and redid a bit the proportions - fixes T1430

# Revision 1396 - Soul_Assassin

@ modelSides[] fixed for all US uniforms - fixes T1470.

# Revision 1395 - sykoCrazy

@ Rocket pods positioning issue

# Revision 1394 - richardsd

@ Fixed: Door Issue on APK (Ticket 1450)
@ Fixed: Cargo Tex More Worn
@ Fixed: Turret Texture

# Revision 1393 - sykoCrazy

@ Proxies repositioned in AH-1 and AH-64

# Revision 1392 - sykoCrazy

@ Repositioned rocket pod proxies on AH-1Z

# Revision 1391 - sykoCrazy

@ Fixed length of M260(19 tube rocket launcher)
@ Proxy positions for rocket pods on AH-64
^ model and textures for LAU-61C/A(19 tube USMC rocket launcher)


# Revision 1390 - reyhard

^ hidden selections for G3 fix

# Revision 1389 - reyhard

^ assigned Merrells texture & rvmat

# Revision 1388 - sabre

[Textures] Merrells v1

# Revision 1387 - reyhard

^ tweaked AH-64 speed
@ fixed paradrop wp custom completion radius 

# Revision 1386 - reyhard

@ fixed M1025 unarmed ghost lod
^ improved paradrop script
+ added paradrop waypoint
@ m590 sounds not working
^ calibrated FCS calculations for M1069 HE rounds

# Revision 1385 - sykoCrazy

@ M261 model issue
^ Rocket pod textures
^ M299 Helllfire pod(added to AH-64 & AH-1)

# Revision 1384 - Soul_Assassin

Kick Jenkins into rebuild of a2port_air

# Revision 1383 - sykoCrazy

@ Wrong file path

# Revision 1382 - sykoCrazy

@ Further tweaks to UH-60 cyclic movement
^ M261(19 shot FFAR pod) model and texture

# Revision 1381 - sykoCrazy

@ UH-60 rotors are now properly set in the Shadow LOD
@ UH-60 rotor blur texture no longer has yellow stripes
@ UH-60 cyclic left/right animation is no longer inverted
^ AGM-114 model and texture (first test of air weapons port from MELB mod)

# Revision 1380 - MistyRonin

@ Fixing the HEMTT fix - Author macro was not defined

# Revision 1379 - MistyRonin

@ Trying to fix missing HEMTT names

# Revision 1378 - richardsd

+ Added HEMTT A4

# Revision 1377 - reyhard

@ fixed M109 ghost lod

# Revision 1376 - Bakerman

^ RHSUSF_fnc_firedSaclos now uses cursorObject command

# Revision 1375 - MistyRonin

@ Fixed wrong ammo for UMSC Recon M107 snipers

# Revision 1374 - MistyRonin

^ Updates & tweaks to US troop configs

# Revision 1373 - MistyRonin

^ Updated US Weapons AI

# Revision 1372 - reyhard

^ limited number distribution for ch-53

# Revision 1371 - Soul_Assassin

+ Rest of USMC number decals - close T1405

# Revision 1370 - gurdy

^ MARPAT covers

# Revision 1369 - reyhard

^ changed AFM on CH-53 to CH-49 based

# Revision 1368 - reyhard

^ reduced & defined main rotor center

# Revision 1367 - reyhard

@ M1 eden ammo loadout typos
@ Wrong back door selection in 2nd res lod & missing interior proxies in res lod 3 & 4 - close T1440

# Revision 1366 - MistyRonin

@ Fix wrong RG33 Army spawning in USMC groups

# Revision 1365 - reyhard

@ upon ejection from ejection seat another ejection seat was created
@ some .rpt errors connected with ejection seats & canopy
^ reduced M1 tanks max ammo to 36 rounds (since to get those extra 6 rounds special operation is required involving rotating turret to specific angle. that what's Damian saying at least :P)

# Revision 1364 - reyhard

^ changed color of mastersafe action

# Revision 1363 - reyhard

+ added master safemode switch to A-10, F-22, AH-64 & AH-1Z. There is shortcut for that user action on "User Action 13" key. T1267 probably can be closed since master safe closes all bays on F-22
^ added proper tailBladeCenter point to CH-53, attempt at fixing T1425
^ added High ROF mode to A-10 gau (sound is getting weird on low fps, need to investigate method mentioned in that post - https://forums.bistudio.com/topic/187965-fmod-in-arma-3/#entry2995526 )
^ some small tweaks to A-10 MFD

# Revision 1362 - gurdy

@ USMC hat rvmat

# Revision 1361 - Kllrt

Fixed M72A7 (used) levitation bug

# Revision 1360 - reyhard

^ remaked F22 mfd, gun is now aligned
^ added canopy anim to f22
+ added seat ejection to f22
^ changed canopy simulation
^ tweaked seat ejection script
^ healed soldiers broken wrists when holding US weapons + corrected finger positions on m14 & sr25 - close T1419

# Revision 1359 - reyhard

+ added seat ejection script to A10
+ added eden rearming system to M1 tanks
^ WIP work on TV Maverick
^ reproxified A10 weapons 
^ aligned AGM65 & ALQ131 to zero position
@ a10 hud properly aligned now
^ tweaked M1117 proxies - close T1411 & T1408
^ added A10 variant with six AGM65 missiles 
@ changed Car vehicle class
@ fixed ANPVS-7 missing head selection & made new shadow lods - close T1394

# Revision 1358 - MistyRonin

^ USMC troops tweaks 

# Revision 1357 - Stagler

[^] Tweaked opscore cover textures again slightly

# Revision 1356 - Stagler

[^] Improved FG and CB Opscore cover textures
[^] Standardised texture Opscore names
[+] Added Opscore Peltor no helmet cover variants

# Revision 1355 - gurdy

+ USMC Boonie hats and 8-point cap

# Revision 1354 - j0zh94

^ New m72_smdi 

# Revision 1353 - Kllrt

Fixed M72A7 sights animation + added SIDE proxy for laser

# Revision 1352 - Kllrt

Added M72A7 sight anim

# Revision 1351 - Kllrt

Fixed M72A7 fired model

# Revision 1350 - reyhard

@ fixed misplaced UH1Y gunner
^ some more eden integration
^ added ability to hide benches in c130 & ch47 for more cargo duties
@ fixed minigun sound - close T1356
^ added hidden selections to covered MICH helmets

# Revision 1349 - reyhard

^ ongoing eden integration
^ improved m1911 reload anim
+ added weapon safety system - default combo ctrl+f, can be changed or disabled completely in menu option. WIP
^ added safety anims on m1911, m249, m4, m16, m27, m107, m9 & m320
^ added M792 shell auto destruction after ~3km
^ added filter selection to uh60
^ added reslods to standalone m320
@ added missing mass in geometry lod for MP7, M32, M320 &  M1911

# Revision 1348 - MistyRonin

@ Fix super-duper capacity for M1911 mag

# Revision 1347 - reyhard

^ female voice has now proper preview sound in VA

# Revision 1346 - reyhard

@ added scripted workaround for AI not engaging with autocannon when laserLock = 1
@ fixed M9 holster position
^ improved script handling after loading game

# Revision 1345 - reyhard

@ m72 was missing components in geo (physic not werking) & firegeo
@ FINALL ATTEMPT TO SORT ALPHAS ON M113 TRACK TEXTURES
@ front IFF panel hiding 
+ added ability to specify if disposable launchers are thrown away automatically after changing weapon in rhs menu options (by default turned on)

# Revision 1344 - reyhard

@ fixed MP7 textures & animations
^ various performance improvements to weapon handling scripts

# Revision 1343 - Soul_Assassin

+ Added US flag and map marker.

# Revision 1342 - MistyRonin

@ Attempt to fix MP7 main texture issue

# Revision 1341 - MistyRonin

^ MP7 configs tweaks

# Revision 1340 - reyhard

@ fixed M240 muzzle flash - close T1383
+ added M240 hand anim handle
@ fixed M1a2 woodland spent cases eject pos - close T1380
^ announcer & radio chat didn't fired up with AFM & gauges visible
@ removed searchlight from UH1Y observer seat

# Revision 1339 - Bakerman

4.6x30mm ammo redux

# Revision 1338 - MistyRonin

^ 2nd batch of MP7 configs (new mags & ammo)

# Revision 1337 - MistyRonin

+ MP7 first config - issues expected

# Revision 1336 - MistyRonin

+ MP7 files - Configs will come later

# Revision 1335 - Stagler

[^] Improved Falcon Textures

# Revision 1334 - reyhard

^ changed 0.50 cal bmg mag names
^ configured mk211 mag
^ added mem eye points for m107
^ added magazine picture for m107 mags

# Revision 1333 - reyhard

@ M72 fixes

# Revision 1332 - Kllrt

M72A7: US soldiers can now see front sight

# Revision 1331 - Kllrt

M72A7: Not-fixed, but better handanim

# Revision 1330 - Kllrt

WIP M72A7 changes

# Revision 1329 - LAxemann

Changed: New M240 reload sound that fits the new animation

# Revision 1328 - reyhard

- removed repeatString & getRandomArElement functions from decals
@ CH53 couldn't start flying in 3den - added RTD center mem point & moved whole model by 2 meters in Y axis
+ added 3den attributes to M1, M113, M109 & CH-53
^ added res lods to M109

# Revision 1327 - Bakerman

.50cal ammo

# Revision 1326 - Kllrt

Fixed M72A7 mem points and model.cfg

# Revision 1325 - Bakerman

T379 M72A7 ammo

# Revision 1324 - j0zh94

^ Added more selections to M72 for animation

# Revision 1323 - reyhard

@ weapons string fix
+ added hidden selections to M113
^ improved wheel shadows for m113
^ removed front addon armour from vehicles which didn't have them in res lods
+ added hidden selections to M109 (wip work)

# Revision 1322 - zeealex

[+] Added LC M107 (scope 1) 

# Revision 1321 - zeealex

[+] added model config for crye gen 3

# Revision 1320 - MistyRonin

^ Add materials to M107 painted variants

# Revision 1319 - j0zh94

@ Fixed broken M72 Hand anim

# Revision 1318 - zeealex

[*] Fixed US army happy hour weights
[*] Fixed missing texture path on Crye Gen 3s 
[^] removed patch textures from US army shirt (as they are using Geometry)

# Revision 1317 - MistyRonin

@ Fix wrong Leupold assigned to US Army M107

# Revision 1316 - MistyRonin

+ Add US Army & USMC Snipers with M107
+ Test SF Guy with G3 Uniform

# Revision 1315 - MistyRonin

+ Add M107 painted first configs

# Revision 1314 - zeealex

[^] Replaced US Army soldiers with the reproportioned models 
[NOTE] 10th mountain and 101st AB are missing their 3D patches, will weight and add as soon as I get them. 

# Revision 1313 - zeealex

[+] Initial injection of Crye Gen 3 Gear (pending changes)
[+] Added M107 Desert and Woodland textures and .rvmats 

# Revision 1312 - zeealex

{+] Added shadowLOD to Premier scope
[+] Fixed .RvMat issue on premier scope



# Revision 1311 - Soul_Assassin

SPCS scoped out - close T1360

# Revision 1310 - reyhard

@ fixes to grip system - close T1370
@ forgot to upload tan version of grips

# Revision 1309 - zeealex

[^] changed premier scope glass. 
[^] Adjusted M107 specular level
[^] Adjusted optics proxy on M107

# Revision 1308 - reyhard

^ added tan TD & AFG grip
+ added hidden selections to M16 & M240
^ tweaked ironsight texture

# Revision 1307 - Bakerman

^ Simple HEAT simulation for vehicles without composite armour
^ SMAW muzzle synchronization now runs on each frame

# Revision 1306 - zeealex

[^] Adjusted body NOHQ

# Revision 1305 - zeealex

[^] Specular Map Tweaks

# Revision 1304 - zeealex

[^] Darkened Premier Scope Texture
{+] added glass .rvmat to premier scopes
[^] changed M107 optics proxy postition
[^] Darkened M107 texture

# Revision 1303 - reyhard

@ minor fixes to m107

# Revision 1302 - Bakerman

Reverted anm14 damage script.

# Revision 1301 - reyhard

^ wip werk on m107:
replaced deploypivot point with bipod mem point (since cfg was pointing to it)
configured muzzle flash
synced reload anims
animated barrel
tweaked hand anims
fixed texture errors
tweaked shadow
@ fixed empty gui error while using grips
^ tweaked 0.5 BMG & winmag inheritance (should inherit suppresion, shake & other effects from bis bullets)
@ fixed some missing strings
^ added inventory pics for grips

# Revision 1300 - reyhard

@ AI weapons fix for weapons with grips

# Revision 1299 - reyhard

@ fixed pistol m320 max zeroing
@ fixed m249 mags initSpeed
^ changed m240 reload anim
^ changed M107 reload anim
+ added ironsight anims to M4BII, MK18, M240, M249, SR25 & Mk14
@ fixed m249 rvmats wrong texture path

# Revision 1298 - j0zh94

^ Improved M107 bipod animations, still need some more tweaking

# Revision 1297 - MistyRonin

@Fixed M107 classname error.

# Revision 1296 - MistyRonin

+ Add Premier scope to ASDG compatibility list

# Revision 1295 - MistyRonin

+ Add first config for Premier Scope & little fixes in US weapons accessories.

# Revision 1294 - reyhard

@ CBA compatibility attempt - T1361

# Revision 1293 - zeealex

[+] Added Premier Scope Raw Files

# Revision 1292 - zeealex

[^] Improved Barrett M107 model and textures. 

# Revision 1291 - reyhard

^ added initSpeed modifier to rifles - magazines has inits speed zeroed for m16 20 inch barrel
^ removed ironsight zeroing from m2010
^ reorganized weapons
+ added ironsight anims for m4, m16 & m27iar
+ added gripod handling system (gripods handled as underbarrel attachment)
@ fixed SpeechVariants for m113 & M2 bradley
- removed bis MK48 files


# Revision 1290 - j0zh94

^ Added M72 rocket + LOD

# Revision 1289 - j0zh94

^ Added new M72 textures/downscaled, fixed minor LOD issue

# Revision 1288 - MistyRonin

@ Correct US Army Sniper UCP loadout. 

# Revision 1287 - j0zh94

@ Fixed M72 upscaling

# Revision 1286 - Kllrt

Updated M72A7 WIP

# Revision 1285 - reyhard

^ improved m1117 gunner periscopes
^ reenabled rg33 proxy retexturing
^ replaced modelToWorld with modelToWorldVisual
+ added M1117 gunner feed on commander station handling
^ zeroed m1117 reticle

# Revision 1284 - reyhard

+ added ramp binding
+ added 120mm & 40mm carnister ammo
@ fixed 120mm HEATs & HEDP configuration
^ tweaked tusk searchlight
^ added eden categories for placable items
^ added short mag description for mk19 grenades
^ work on m1117 sight zeroing
+ added periscopes for m1117
@ fixed tow lock

# Revision 1283 - reyhard

^ M1117 - added cargo shadow lods, cleaned up cfg, wip optics, added door anims, tweaked light effects, tweaked particles, fixed texture errors, etc
^ added ramp key bind
Olive texture are missing!

# Revision 1282 - Bakerman

^ AN-M14 TH3 creates thermite droplets
T1252

# Revision 1281 - Bakerman

T1354 iNil check for acc_combo.sqf

# Revision 1280 - Kllrt

Removed extra TGAs from M72 (oops!)

# Revision 1279 - Kllrt

WIP M72A7

# Revision 1278 - Bakerman

^ Decreased suppressor velocity increase to 1%

# Revision 1277 - Bakerman

@ Suppressors no longer modify hit values

# Revision 1276 - ballistic09

@ wrong uniform on USMC woodland troops

# Revision 1275 - zeealex

^ darkened M107 Textures

# Revision 1274 - zeealex

* model cfg take two

# Revision 1273 - zeealex

+ Added M107 Bipod Anim (needs tweaking but will suffice)

# Revision 1272 - reyhard

@ muffled sound fix (works with 1.56)

# Revision 1271 - reyhard

^ experimental turret locking tweak

# Revision 1270 - MistyRonin

^ Update of M107 config - Experimental too so far.

# Revision 1269 - MistyRonin

+ Add M107 - First experimental test of M107 config

# Revision 1268 - zeealex

+ Added M107 Box Mag Replacement P3D

# Revision 1267 - zeealex

+ Added M107 Raw Model Pending setup (to be looked at immediately)

# Revision 1266 - reyhard

readded vehicle classes

# Revision 1265 - MistyRonin

+ Add Eden Group Pictures to US groups

# Revision 1264 - MistyRonin

^ Update US stringtable

# Revision 1263 - MistyRonin

@ Fix US Airborne patches.

# Revision 1262 - Stagler

-Attempted to fix Opscore Cover shadow bug

# Revision 1261 - MistyRonin

^ Adapted US configs to Eden Categories.

# Revision 1260 - bek

^ Fixed USF rifles recoil. T648
note: there is still room for improvement, such as giving weapons with different grips different recoil values. 

# Revision 1259 - MistyRonin

^ USMC soldiers decided to adopt the Mk318 as their standard bullet - As their real life counterparts. 

# Revision 1258 - Bakerman

^ HEAT warhead simulation performance & reliability

# Revision 1257 - reyhard

@ removed dispersion from m256 player mode

# Revision 1256 - reyhard

@ corrected at4 rocket rvmat
^ added AI dispersion for M256 cannon

# Revision 1255 - Bakerman

SRAW projectiles shadow and mass

# Revision 1254 - MistyRonin

@ Fixed missing strings in US Stringtable

# Revision 1253 - gurdy



# Revision 1252 - MistyRonin

+ Added new M4, M16 & M27 as Zeus placeable, in VA and in crates

# Revision 1251 - MistyRonin

^ Updated US troops with new grips, and scoped 2 SPCS vests

# Revision 1250 - MistyRonin

^ Updated M4,M16 and M27 model.cfg

# Revision 1249 - gurdy

^ added fixed vests

# Revision 1248 - MistyRonin

+ Add first US TD configs

# Revision 1247 - gurdy

@ readded grippod and made new vertgrip variants

# Revision 1246 - reyhard

^ fcs tweaks

# Revision 1245 - gurdy

@ change OCP names to OEF-CP

# Revision 1244 - gurdy

^ replace grippods with tangodown foregrip

# Revision 1243 - MistyRonin

- Removed M1117 UN config from US Project

# Revision 1242 - reyhard

^ increased M1 reload time without loader
^ tweaked M1 optics visuals
^ tweaked lead scripts
^ added fire on move script for M1

# Revision 1241 - MistyRonin

^ Updated M1117 crew (still temporary) 

# Revision 1240 - MistyRonin

^ Updated M1117 load out

# Revision 1239 - MistyRonin

^ Improved M2 effects position on M1117

# Revision 1238 - Redphoenix

+ ZaslehKulas for M1117 40mm gun

# Revision 1237 - LAxemann

Decreased M2010 bolt action sound volume

# Revision 1236 - LAxemann

Tweaked: M2010 reload sound stereo

# Revision 1235 - LAxemann

Added: M2010 reload sound
Tweaked: M240 reload sound parameters (Distance + volume)

# Revision 1234 - LAxemann

Added: M2010 bolt action sound function in rhs_m2010_handler.sqf

# Revision 1233 - LAxemann

Added: M2010 bolt action sounds

# Revision 1232 - MistyRonin

@ Add missing path for US Troops

# Revision 1231 - MistyRonin

@ Fix US Zeus items duplication 

# Revision 1230 - MistyRonin

+ Add more Zeus placeable gear (US ACH, Opscore, LWH Helmets)

# Revision 1229 - reyhard

@ rear FFV turrets get in/out memory points were inverted

# Revision 1228 - reyhard

@ rpt errors fix

# Revision 1227 - MistyRonin

@ Fix more M1117 paths, change UN variant side and add AT4 to loadout. 

# Revision 1226 - Stagler

-Added new (better + non-BIS) texture for Ranger Green Falcon-II pack.
-Added (better + non-BIS) Coyote Falcon-II pack.

# Revision 1225 - reyhard

@ mod.cpp fix

# Revision 1224 - gurdy

@ fix M1117 rvmats

# Revision 1223 - MistyRonin

@ Update M1117 OD & Fix data file names

# Revision 1222 - MistyRonin

@ Add M1117 OD Config

# Revision 1221 - gurdy

^ M1117 textures and added OD variants

# Revision 1220 - MistyRonin

+ Add new mag variants to be used by the M1117

# Revision 1219 - MistyRonin

^ Updated M1117 weapons & mags loadout

# Revision 1218 - gurdy

@ fixed M1117 exterior Materials

# Revision 1217 - gurdy

^ M1117 changes + initial texture :)

# Revision 1216 - Redphoenix

^Fixed File Path for M1117 damagewheel.p3d proxy

# Revision 1215 - Redphoenix

+ M1117 physx.hpp
^ M1117 file paths
^ M1117 does now show up ingame

# Revision 1214 - MistyRonin

@ Fix M1117 bad file reference

# Revision 1213 - MistyRonin

@ Update M1117 config

# Revision 1212 - MistyRonin

+ Inject M1117 - There may be issues due to some issues I had with PBO Project

# Revision 1211 - reyhard

- disabled proxy retexturing till RC come out

# Revision 1210 - reyhard

@ fixed CCO68
@ fixed typo in vest cfg (missing semicolon, dunno how it binarized before)

# Revision 1209 - MistyRonin

@ Unhide CVCs

# Revision 1208 - MistyRonin

+ Add more M32 rounds

# Revision 1207 - MistyRonin

+ 2nd batch of SRAW configs

# Revision 1206 - MistyRonin

+ First SRAW Configs

# Revision 1205 - j0zh94

^ M9 Berretta no longer has grey background (which caused glowing at certain ranges)

# Revision 1204 - LAxemann

Tweaked: Closure volume levels, weapon mechanics are now audible again when firing (Who lowered their volume?)

# Revision 1203 - reyhard

^ added rg33 proxy camo selections

# Revision 1202 - reyhard

@ AT4 loading conflict with AFRF
@ max flying height for C130j

# Revision 1201 - gurdy

^ SRAW textures

# Revision 1200 - reyhard

@ fixed at4 inv errors
^ added open sight anim
^ tweaked reachambering sequence

# Revision 1199 - gurdy

+ SRAW Models

# Revision 1198 - reyhard

^ added prone m590 reload anims
@ fixed m1025 /w m2 ammo belt clipping 
@ fixed AGM missiles penetrator
^ increased GAU bullet timeToLive - now they have to actually hit the ground
@ fixed missing anim rpt error for M1A2

# Revision 1197 - reyhard

@ fixed hitpoints compilation errors
^ reenabled rechambering anim for m590
+ added vest, uniforms & other stuff as placeable editor items

# Revision 1196 - reyhard

@ M1 Fixes
@ C130J error message
^ changed CH53 ui picture
^ changed javeling holding anim
^ changed M27 IAR hand anim
^ changed M590A1 magazine reload anim

# Revision 1195 - gurdy

+ SRAW Model

# Revision 1194 - reyhard

@ fixed M2A3 BUSK III shadow lods hiding after destruction
@ fixed M2 muzzle flash visibility on M113
@ fixed M2010 rechambering anims quirks
^ configured engine hitpoints for c130
^ made new firegeometry for Ch53 with working cargo proxies
^ added glass destruction effect for Ch53
^ VG options for CH53
^ added pilot anims for ch53
+ added CH53 announcer for all US aircrafts
@ rear top hatch not animated in cargo & pilot lod
^ tweaked shell ejections mem points on m113
^ tweaked CBA compatibility
^ tweaked m113 3rd person view
^ tweaked m113 ammot loadout

# Revision 1193 - MistyRonin

@Fix missing string for M18 Green smoke can

# Revision 1192 - MistyRonin

@ Fixes in US Weapons & troops configs

# Revision 1191 - MistyRonin

@ Tune US Army & USMC troops configs

# Revision 1190 - Bakerman

^ Vest HitPoints

# Revision 1189 - Soul_Assassin

Version updated. USAF Jenkins revival.

# Revision 1188 - reyhard

@ HMMWV fixes
^ added ability to hide A2 parts (antenna, BFT, CIP) through arsenal - might be useful for 3rd party mods that want to include earlier versions
+ added ability to hide IFF Panels to M1, M2 & M109
+ added standalone versions of Surefire flashlight & PEQ15 Top mounting
@ fixed M240 CAP ammo belt clipping
@ fixed SR25 inventory icons errors
^ tweaked M32 GL reload anims
^ tweaked SR25 hand anim
+ added stock hand anims for m16 & m4
^ added collimator effect to M2A1 standalone
^ removed inverted shadow effect from M68 CCO
^ tweaked FCS calculations on slope for M1 tanks
^ increased static Stinger reload time
@ fixed M113 M2 WD ammo belt clipping 
@ fixed M230 not engaging infantry
^ unified M2 Bradley armor values
^ added ability to kill turned in driver for M1, M2, M113
^ increased amount of magazines for M113
^ added visual era destruction effect for Bradleys
^ AI driver bailout from tank if rest of crew is killed & gun is destroyed
+ spalling script for M1, M2 & M113 (WIP)

# Revision 1187 - Bakerman

^ Armor compatibility, hitPart function now runs on ALL vehicles
T1210

# Revision 1186 - reyhard

@ missing component selections names in at & smaw geometries
@ zeroing text offset fix
^ added opscores to virtualAmmoBox.sqf

# Revision 1185 - Soul_Assassin

FATS Helmets: straps, res lods and shadow

# Revision 1184 - reyhard

^ rear sight hiding for SR25

# Revision 1183 - Bakerman

USF menu version

# Revision 1182 - reyhard



# Revision 1181 - reyhard

^ added missing static weapons in cfgPatches
^ static M2 magazine mount
^ added muzzle flash rotation to M27 IAR

# Revision 1180 - Pufu

try fix 001

# Revision 1179 - Bakerman

^ Barrel heat refraction only visible on high graphical settings

# Revision 1178 - Bakerman

@ MICH, ACH & LWH UI pictures

# Revision 1177 - MistyRonin

@ USMC Recon strings fix

# Revision 1176 - Bakerman

Fixed bowman picture paths

# Revision 1175 - Bakerman

@ Bowman UI picture

# Revision 1174 - Bakerman

@ ESS UI picture
@ Vest armor descriptions
@ SPC UI picture
Added opscore UI picture

# Revision 1173 - MistyRonin

+ Add USMC Recon Fast helmet units & groups

# Revision 1172 - gurdy

@ some texture paths

# Revision 1171 - MistyRonin

@Fixing wrong filename

# Revision 1170 - MistyRonin

@Add missing folder to FAST helmet paths. 

# Revision 1169 - MistyRonin

@Fix opscore files paths

# Revision 1168 - MistyRonin

@ 1st batch of fixes for US headgear

# Revision 1167 - MistyRonin

@Fixes to save the World (US headgear).

# Revision 1166 - gurdy

+ Initial commit of New Ops-Cores

# Revision 1165 - Bakerman

^ Stacked EventHandlers for all vehicles
T1202 USF

# Revision 1164 - reyhard

@ corrected m119 mass
^ added destruction rvmats to static weapons
@ fixed M1025A2 M2 & unarmed snorkel selections
@ fixed rhsusf_mag_15Rnd_9x19_JHP ammo count
@ added fix for GC camera

# Revision 1163 - Bakerman



# Revision 1162 - reyhard

@ fixed M1025 snorkels
@ fixed m16a4 grip anims

# Revision 1161 - reyhard

@ raven fixes

# Revision 1160 - reyhard

@ ACVC fixes
@ opscore fixes

# Revision 1159 - reyhard

@ fixed AFRF references on M68 CCO and ACOG pip

# Revision 1158 - Soul_Assassin

World unburn

# Revision 1157 - Soul_Assassin

HEMTT interim fix.

# Revision 1156 - Kllrt

Fixed: M249 UI icons

# Revision 1155 - reyhard

duh

# Revision 1154 - reyhard

@ fixed LWH spam - close T1166
^ tweaked pilot lod glass on M2 Bradley

# Revision 1153 - Bakerman

Static TOW SACLOS function call

# Revision 1152 - gurdy

^ Naming

# Revision 1151 - gurdy

@ more names

# Revision 1150 - gurdy

@ Names

# Revision 1149 - reyhard

@ deployed UN troops on m113 to cease z-fighting - close T1126

# Revision 1148 - reyhard

^ added laserlock for AH64 chaingun

# Revision 1147 - Bakerman

^ Limb damage

# Revision 1146 - MistyRonin

@Removed space between M1A1 and SA in the M1A1 group strings - Damian you better be able to sleep properly with that tonight, or I'll give you my 7.62mm somniferous "pill"

# Revision 1145 - MistyRonin

^ Updated M1A1 group names - So Damian can sleep properly tonight :P

# Revision 1144 - Soul_Assassin

F-22 finilized for release - close T1016

 - weapons and weapon doors
 - radio
 - hitpoints and firegeo

# Revision 1143 - sykoCrazy

FIXED Missing main rotor geometry, firegeo and geo phys LOD

# Revision 1142 - Bakerman

Fixed SMAW script error, thanks @reyhard. Close T1125

# Revision 1141 - reyhard

^ added nohq texture to 105mm casing model
^ optimizations and fixes to smaw user actions

# Revision 1140 - MistyRonin

@ Corrected faces issue. 

# Revision 1139 - MistyRonin

@More corrections in USMC & US Navy side

# Revision 1138 - MistyRonin

@Last tweaks for USMC Recon

# Revision 1137 - MistyRonin

@Tweaks for USMC Recon.

# Revision 1136 - MistyRonin

@Fix crossed classnames

# Revision 1135 - MistyRonin

@Fast fix of the fast fix


# Revision 1134 - MistyRonin

@ Fast-fix for groups

# Revision 1133 - sykoCrazy



# Revision 1132 - sykoCrazy



# Revision 1131 - Soul_Assassin

F-22 Work - prep for T1016 and T1068

# Revision 1130 - MistyRonin

+ Add USMC Div Recon groups

# Revision 1129 - MistyRonin

@Fix string of USMC Recon Rifleman light

# Revision 1128 - Bakerman

+ M259 smoke launcher
+ L8A3 smoke shell
Close T1122

# Revision 1127 - MistyRonin

+ First addition of USMC Div Recon - work on T1124

# Revision 1126 - Soul_Assassin

@ M109 now has FireGeometry and Hitpoints set up correctly.

# Revision 1125 - reyhard

@ missing m119 files

# Revision 1124 - reyhard

@ fixed light hitpoints on m113
+ added light textures for m113
@ fixed weapon muffling for rhs vehicles - close T1119
+ added slingload ability to m119 - close T1111
@ fixed some missing gunner/driver get in memory points here and there
^ increased ramp speed
+ added KIA anims for FFV m113 positions (seems to be ignored anyway...)
^ tweaked M1 tanks hitpoints
- removed door anims from c130 - close T846

# Revision 1123 - Bakerman

String consistency

# Revision 1122 - Bakerman

^ Weapon strings

# Revision 1121 - Redphoenix

^ improved M1911 textures

# Revision 1120 - Bakerman

New TOW model config entry

# Revision 1119 - Soul_Assassin

opscore uncovered normal fix - work on T1108

# Revision 1118 - Soul_Assassin

^ Added thermal maps to M113

# Revision 1117 - reyhard

@readded missing function - close T1121

# Revision 1116 - reyhard

@ infantry damage fix

# Revision 1115 - reyhard

M113:
+ added buoyancy named properity
+ added new gunner anims
+ enabled reload/revolving anims on m240 & mk19 variants
@ fixed driver proxies in pilot lod
@ fixed glass movement in res lods
@ sorted alphas in res lods
+ added rear ramp anim
+ added FFV rear hatch positions
+ added destruction rvmats

^ tweaked decal script to read decals from cfgs
@ fixed muffled sound bug
+ added peephole anim for new m136
+ added fire selector anim for SMAW
+ added SMAW to virtualAmmoBox


# Revision 1114 - Bakerman

Updated SMAW loadout fix

# Revision 1113 - Bakerman

Updated SMAW loadout fix

# Revision 1112 - Bakerman

T377 Zero sync, added optics, misc fixes

# Revision 1111 - Soul_Assassin

@ Hovering dump pouch fixed on some SPC variants.

# Revision 1110 - MistyRonin

+ Adding spotting rifle mags to USMC assaultman

# Revision 1109 - Soul_Assassin

Lesh tow values added to CH-53

# Revision 1108 - Soul_Assassin

+ Added compatibility with Lesh's Tow Mod

# Revision 1107 - Bakerman

Added temporary weapon tails

# Revision 1106 - MistyRonin

@ Switched static TOW & HMGs to static category - as requested

# Revision 1105 - Redphoenix

^fixed shadowLOD bugs for several M16s/M4A1 - close T1112

# Revision 1104 - MistyRonin

@Fast fix to allow build

# Revision 1103 - gurdy

^ Naming convention change

# Revision 1102 - gurdy

@ small formatting corrections


# Revision 1101 - MistyRonin

@ Switch US statics to artillery. 

# Revision 1100 - gurdy

@ CH-53E Name

# Revision 1099 - gurdy

^ US Static weapon names


# Revision 1098 - Bakerman

T965 SPC upped to level 4 protection

# Revision 1097 - Bakerman

T377 SMAW loadout fix for realsies

# Revision 1096 - MistyRonin

@Test2: Add init line to assaultman to see if it can use the weapon.

# Revision 1095 - Bakerman

T377 SMAW loadout fix

# Revision 1094 - Bakerman

T377 SMAW sfx

# Revision 1093 - MistyRonin

@ Fix wrong soldiers in US static weapons & test fix for SMAW assaultmen.

# Revision 1092 - Bakerman

T377 SMAW script improved

# Revision 1091 - Bakerman

T965 USF armor definitions

# Revision 1090 - reyhard

@ fixed m113 commander slot in editor
+ added spent catridge script for m119
^ tweaks to static weapons

# Revision 1089 - MistyRonin

+ Adding USMC Assaultmen, additionally adding the SMAW to Zeus placeable and in non virtual ammo crates

# Revision 1088 - Bakerman

T377 SMAW green added to ui function

# Revision 1087 - Bakerman

T377 Removed pointer to missing sfx

# Revision 1086 - RichardsD

@ Re-scaled interior so there are no slight misalignmnets
@ Re-UV'ed the M978 so the rear is not stretched anymore
+ Ammo variant added

# Revision 1085 - Bakerman

T377 SMAW Fixes

# Revision 1084 - Bakerman

MICH2000 hitpoint armor

# Revision 1083 - Soul_Assassin

F-22 texture, material and performance updates. Work on T1016

# Revision 1082 - LAxemann

Tweaked: Added an isty bitsy bit of bass to the M4s

# Revision 1081 - Kllrt

Added: WIP SMAW

# Revision 1080 - reyhard

+ initial commit of US static weapons
@ F22 fixes
@ fixed potential c130 explosion during paradrop - close T745

# Revision 1079 - Bakerman

T965 USAF minor edits

# Revision 1078 - j0zh94

Moved M9 slightly higher to better fit US Army units

# Revision 1077 - Soul_Assassin

World fire put off

# Revision 1076 - Bakerman

M113 model.cfg fixed again

# Revision 1075 - Bakerman

Fixed M113  model.cfg bones

# Revision 1074 - Kllrt

Moved M136 files

# Revision 1073 - Kllrt

Added: BlackPixxel's M136, missing file

# Revision 1072 - Kllrt

Added: BlackPixxel's M136

# Revision 1071 - Kllrt

Fixed: Double semicolon in M27 model.cfg

# Revision 1070 - Soul_Assassin

@ Magnified scope ranging (Mildot/ELCAN/H59) - T1067
^ Leupold Mk4 Spotting scope uses H59 an can now be properly used.

# Revision 1069 - Bakerman

T1087 Fixed galix shells

# Revision 1068 - Soul_Assassin

Color touchup of CH-53 colors
CH-53 hidden selections added

# Revision 1067 - Soul_Assassin

@ M113 M2 reload feed cover animation - close T1088
^ M113 M2 ammo belt clipping in first person

# Revision 1066 - Redphoenix

^ maxSpeed for M1A2 - close T1094
- auto-brake for M1 tanks

# Revision 1065 - gurdy

+ New tow missile moddels

# Revision 1064 - Soul_Assassin

@ Fixed unarmed M113 FFV proxy placement in lods - close T957

# Revision 1063 - Soul_Assassin

More huhmvee lod issues fixed

# Revision 1062 - reyhard

@ fixed M109 commander FFV position
+ added travel lock to M109
+ added reload anim for pistol version of m320 - close T364
+ added proper reload animations for m203 & m320
^ texture sorting for m4
+ added hidden selections for M4
@ fixed M27 IAR full auto sound
+ added new hitpoints for US vests & helmets

# Revision 1061 - Soul_Assassin

@ Humvee LOD switching issues - T949

# Revision 1060 - Soul_Assassin

CH-53 texture updates and decals

# Revision 1059 - j0zh94

Reworked model + textures

# Revision 1058 - reyhard

^ ch53 tweaks

# Revision 1057 - Soul_Assassin

MICH helmet fixes - close T1077

# Revision 1056 - Redphoenix

- removed HEMTT A2 close T1074

# Revision 1055 - reyhard

+ added new turn limits for M1 tanks
^ tweaked armor structural for transport helis - close T1064

# Revision 1054 - gurdy

^ Bradley textures with correct camo colors

# Revision 1053 - Soul_Assassin

Ch-53 texture tweaking.

# Revision 1052 - Soul_Assassin

Ch-53 texture update

# Revision 1051 - Bakerman

^ Flare launcher modes

# Revision 1050 - MistyRonin

@Fixed Abrams loadouts - Close T971

# Revision 1049 - MistyRonin

@ Fixes in USMC configs & M240 mags

# Revision 1048 - Redphoenix

^fixed wrong magazine model for USF smoke grenades

# Revision 1047 - MistyRonin

@ Switch 3d model in M240 M62 bullets

# Revision 1046 - Soul_Assassin

Bringing out of dangerzone

# Revision 1045 - Soul_Assassin

Attempt to restart Jenkins

# Revision 1044 - Kllrt

Added: F22 - heavy WIP

# Revision 1043 - Kllrt

Fixed: CH53 Pilot position and sound path bug

# Revision 1042 - gurdy

@ Opscorestuffz

# Revision 1041 - Redphoenix

^ triangulated M978A4 fuel tank to get rid of the mesh error

# Revision 1040 - Kllrt

Added: Orange tracer for 5.56x45 (w/ sample ammo and mag)

# Revision 1039 - Kllrt

Fixed wrong path on M4A1_BlockII_M203

# Revision 1038 - j0zh94

Slight fix of M9's textures to remove LOD issue

# Revision 1037 - Kllrt

Fixed: CH53 leftover from CUP namespace

# Revision 1036 - MistyRonin

@Second test tweaks for the M27.

# Revision 1035 - MistyRonin

@First test tweaks for the M27 

# Revision 1034 - MistyRonin

@ adding missing code - that's why its bad to code when you haven't slept :P

# Revision 1033 - MistyRonin

@ Adding missing semicolon in CH53 config.

# Revision 1032 - MistyRonin

@ Switch CH53 to USMC factions

# Revision 1031 - Redphoenix

-removed stray vert from all HEMTTs

# Revision 1030 - Kllrt

Injected CH53 v2 (forgot some files sorry)

# Revision 1029 - Kllrt

Injected CH53E

# Revision 1028 - Redphoenix

^Improved ShadowLOD
^Fixed pathing for models for all HEMMTs
^Fixed some minor mishaps

# Revision 1027 - RichardsD

+ HEMTT A4 Model.CFG
^ Memory LOD points

# Revision 1026 - RichardsD

+ HEMTT A4 Strings

# Revision 1025 - RichardsD



# Revision 1024 - Soul_Assassin

CH-53 folders made

# Revision 1023 - MistyRonin

+ Add M9 handgun to US Troops (Army & USMC)

# Revision 1022 - gurdy

+ Added Coyote and Woodland DUKE Antennae textures

# Revision 1021 - gurdy

+ Improved Opscore test

# Revision 1020 - j0zh94

Fixed UI image for M9 Beretta

# Revision 1019 - Redphoenix

+M9 and M9 mags to VAS

# Revision 1018 - j0zh94

Injected M9 Beretta + 2x 15rnd Magazines

# Revision 1017 - Redphoenix

^flipped direction of icon_ch47f_ca.paa - close T1059

# Revision 1016 - Redphoenix

^small spelling mistakes in cfgHints.hpp - T1058

# Revision 1015 - Redphoenix

+shadow for AN/PEQ-15/M952V - close T1056

# Revision 1014 - Redphoenix

^40mm smoke rounds now use the correct 40mm slug model when fired - close T1055

# Revision 1013 - Redphoenix

@ correct ammo type for M249 magazines - close T1053
+ Interim M240 magazines
- removed ability to launch vanilla 3GL magazines

# Revision 1012 - Bakerman

Config entry for galix shell

# Revision 1011 - reyhard

@ fixed C130 ramp anims not visible from cargo lod
^ uploaded Kimi fixed HMD
@ fixed C130 turret inheritance 

# Revision 1010 - gurdy

+ Galix Projectile

# Revision 1009 - Soul_Assassin

Alternative bare MICHs now have Army style headsets for MARSOC - closes task T1038

# Revision 1008 - Redphoenix

+ rhsusf_infantry2 

# Revision 1007 - Redphoenix

-removed more animation frames to decrease file size for M4 variants

# Revision 1006 - Redphoenix

+first file cleanup of rhsusf_weapons
^Alpha Issue for ACOG family - close T1051

# Revision 1005 - Redphoenix

firest file cleanup of rhsusf_weapons2

# Revision 1004 - Redphoenix

.removed unnecessary keyframes from ach_base.p3d

# Revision 1003 - Soul_Assassin

+ Added more MICH helmets - work on T1038
@ Fixed lod color issues with ballistic glasses

# Revision 1002 - Redphoenix

reverting AT4 texture commit

# Revision 1001 - Redphoenix

@removed old lenses on all ACOG variants and replaced with shiny new ones - close T1047

# Revision 1000 - Bakerman

T924 Now with blinding flare and flesh melting fire

# Revision 999 - Soul_Assassin

@ UH-60M correct crew classes.

# Revision 998 - Bakerman

Fixed version

# Revision 997 - Bakerman

T924 Made effects 1000% more realistic

# Revision 996 - Bakerman

TF47 M136 & SMAW

# Revision 995 - MistyRonin

+ M27 troops - related to the last commit

# Revision 994 - MistyRonin

+ Added M27 to USMC troops & crates

# Revision 993 - Soul_Assassin

Finalized M27 - closes task T343

# Revision 992 - Bakerman

^ New AN-M14 TH3 effects
T924

# Revision 991 - Bakerman

Removed unwanted line in script

# Revision 990 - Bakerman

T879 Renamed M113 smoke selections

# Revision 989 - zeealex

+ Added wearable ESS goggles

# Revision 988 - Redphoenix

^M320GL now has fireselector set to F instead of S - close T956

# Revision 987 - Redphoenix

@top proxy in viewpilot now aligned with res0 LOD for M16A4_ris.p3d

# Revision 986 - Bakerman

Initial commit for M113 smoke launchers

# Revision 985 - Redphoenix

+ShadowLOD M27 IAR

# Revision 984 - Redphoenix

@ Silencer placement on M27
@ Laser placement on M27
+ FireGEO LOD on M27

# Revision 983 - Redphoenix

+ M27 IAR

# Revision 982 - Soul_Assassin

+ Added new SPC Camelbak model

# Revision 981 - MistyRonin

+ Adding Glock 17 as placeable item in Zeus.

# Revision 980 - reyhard

^ changed hitpoints to 1.52 ver + cfg should support changes to hitpoint class made in 1.54

# Revision 979 - reyhard

^ reenabled bolt action for m2010 - works with bipods now. hold fire button in order to halt rechambering animation
+ try on rechamber action for m590 :D

# Revision 978 - reyhard

@ workaround for directionStabilization quirks
@ fixed glass textures submarine like view
@ fixed ramp selection on m2a3
^ added custom pip handler for m113
^ tweaked m113 driver anim

# Revision 977 - reyhard

+ added magic antirollbar parametrs to US tracked vehicles in order to prevent silly AI flips

# Revision 976 - reyhard

@ fixes to M1 FCS code

# Revision 975 - Soul_Assassin

^ 82nd and Mountain patches lowered not to float over the uniform.

# Revision 974 - reyhard

+ added auto target track for UH1Y
^ M320 is no longer visible in holster slot
^ tweaked m1911 holster scale & holster offset point to fit (for now) bis vests
^ some tweaks to FCS code

# Revision 973 - Soul_Assassin

^ Added missing Author tags

# Revision 972 - Soul_Assassin

@ Disabled attachments on M32 GL

# Revision 971 - Pufu

@ fixed descriptionshort for 7.62x51 m240 100 rounds belt mags

# Revision 970 - Pufu

@ fixed duplicates Stringtable - close t980

# Revision 969 - Soul_Assassin

^ Javelin can lock on air targets

# Revision 968 - reyhard

@ fixed some heat refractions effects for MG's
^ tweaked UH1Y hud
@ fixed missing rvmat for ah1z

# Revision 967 - Soul_Assassin

@ Fixed FROG first-person hand position

# Revision 966 - reyhard

+ added usePiP=1; param for UH1Y Observer - should prevent strange head twisting
@ fixed some UH1Y flir screen errors

# Revision 965 - reyhard

@ fixed Bradley door handler (doors were closing even player used 'open ramp' action)
^ tweaked/added ui icons for uniforms
+ added door handling script for c130 - potential fix for T846
@ changed IR lock for TOW launcher since without that, AI refuse to engage enemies
^ tweaked mass of 6rnd grenade packs
^ tweaked initSpeed of m576 buckshot - should fix T862 (yet, maybe airfriction need some tweaks)
+ added M1A2SEPv2 TUSK II groups - close T930
@ fixed desert m6a2 in woodland tank groups
@ fixed hmmwv destruction from 12.7 rounds
@ fixed FFAR ballistic - close T842

# Revision 964 - reyhard

@ fixed some "Error compiling '0.5 * (HitEngine1 + HitEngine2)' in 'HitEngine1'" rpt errors
@ fixed IK curve rpt errors
^ changed (and sometimes added) vehicles ui pictures in a3 style

# Revision 964 - reyhard

@ fixed some "Error compiling '0.5 * (HitEngine1 + HitEngine2)' in 'HitEngine1'" rpt errors
@ fixed IK curve rpt errors
^ changed (and sometimes added) vehicles ui pictures in a3 style

# Revision 963 - reyhard

@ fixed bradley wheels dustpos
^ tweaked m113 cfgPatches
^ tweaked collimator effect on m68cco & pip acog

# Revision 962 - reyhard

triggering weapons rebuild

# Revision 961 - reyhard

+ added new collimator effect to m68cco & m552 eotech
@ fixed minefield module

# Revision 960 - reyhard

@ fixed m107 popup error

# Revision 959 - MistyRonin

@ Update the US D & WD groups

# Revision 958 - Soul_Assassin

Cleanup

# Revision 957 - Redphoenix

@ Stringtable.xml Encoding set back to UTF-8
@ removed duplicate strings to clean RPT
@ removed duplicate key entries to prevent Stringforge from not opening Stringtable.xml
deleted d.txt - WTF was that even for?

# Revision 956 - USSRsniper

Fixed HMMWV M2 muzzle flash

# Revision 955 - Bakerman

@ rhsusf_main script paths

# Revision 954 - USSRsniper

Fixes static M2 effects (muzzle smoke and chain links), and other vehicles that use M2 - fixes T950

# Revision 953 - USSRsniper

T950 - Fixed effects on static M2 machine gun

# Revision 952 - MistyRonin

@ Hide FR & MARSOC groups.

# Revision 951 - Soul_Assassin

[tag] Real first commit of 0.4

# Revision 950 - Soul_Assassin

@ Fixed M1A2 driver PiP

# Revision 949 - Soul_Assassin

@ Some major M113 model and texture fixes

# Revision 948 - Bakerman

Menu version set to 0.3.9.1

# Revision 947 - Bakerman

Reverted usf troops randomization

# Revision 946 - Bakerman

No random headgear for usf

# Revision 945 - Redphoenix

^ Mk262 and Mk318 now have red tracers - close T939
^ added missing quotes for M240 mags - close T937
+ added improved ACOG with different lense textures for visual improvement

# Revision 944 - Soul_Assassin

[tag] first commit of 0.4.0

# Revision 943 - Bakerman

Fixed M113 D M240 gun sights

# Revision 942 - Bakerman

Fixed M113 D M240 gun cloud

# Revision 941 - Redphoenix

^ fully fixed M113 unarmed FFV

# Revision 940 - Redphoenix

^ fixed M113 Unarmed FFV

# Revision 939 - Redphoenix

^fixed rhs_logobig_ca.paa

# Revision 938 - Bakerman

T934 one last time

# Revision 937 - Bakerman

T934 another hint update

# Revision 936 - Bakerman

T934 hint update

# Revision 935 - Bakerman

T934 another try at the logo

# Revision 934 - Bakerman

T934 logo

# Revision 933 - Bakerman

T934 USF few that I missed

# Revision 932 - Bakerman

T934 Logo

# Revision 931 - Bakerman

T934 USF

# Revision 930 - Soul_Assassin

Switch off thermals for M113 for now

# Revision 929 - Bakerman

Set M113A3 smoke to launch from hull

# Revision 928 - gurdy

@ Fixed Material on hatch

# Revision 927 - gurdy

^ Added PIP to the rest of the M113s

# Revision 926 - gurdy

+ M113A3 Pilot PIP setup

# Revision 925 - MistyRonin

^ Last tweak on M240 tracers. 

# Revision 924 - sykoCrazy



# Revision 923 - MistyRonin

^ Improved M240 tracer times - to make them more realistic

# Revision 922 - Bakerman

^ Game options button uses profile colour

# Revision 921 - Bakerman

^ Helicopter 20 & 30mm shell lifetime 

# Revision 920 - gurdy

^ Removed honeycomb from M68

# Revision 919 - gurdy

@ Fixed M81 pilot lod..

# Revision 918 - gurdy

@ M81 glove hidden sel fix

# Revision 917 - gurdy

@ Replaced M81 FROG's hands

# Revision 916 - gurdy

@ Fixed IAR grenade straps

# Revision 915 - gurdy

@ LWH texture padding

# Revision 914 - Soul_Assassin

@ Fixed HMMWV fording depth (different for snorkel and no snorkel) - fixes T918
@ Snorkel visible again on appropriate HMMWV versions - fixes T917

# Revision 913 - Soul_Assassin

Small option screen text fixes

# Revision 912 - Redphoenix

^ debloated M32 model.cfg
+ added 6 grenades to M32 for better look
@ M32 zeroing memory points
@ M32 ShadowLOD has now less vertices while retaining the same look
close T357

# Revision 911 - Soul_Assassin

M32 zeroing (as best as I can do) can hit up to 300m, further is anyones guess)

# Revision 910 - Soul_Assassin

SPC weighing and lods
scoped SPCS out
Added SPC variants to VA

# Revision 909 - gurdy

@ Mk. 64 alphas

# Revision 908 - gurdy

+ RG-33 and FMTV pictures

# Revision 907 - Bakerman

^ Heat refraction for vehicle machine guns

# Revision 906 - gurdy

@ More Humvee Fixes

# Revision 905 - Redphoenix

@M32 animations
^M32 memory point positioning
@M2A1 sight fixes

# Revision 904 - gurdy

@ Fixed M1097 antennae

# Revision 903 - gurdy

@ M113A3 M240 lod fix

# Revision 902 - gurdy

@ Hide M4A1+

# Revision 901 - Bakerman

Main now require 1.50

# Revision 900 - Bakerman

@ Minefields

# Revision 899 - Bakerman

Few more HEAT improvements

# Revision 898 - gurdy

@ More M113A3 interior testing

# Revision 897 - gurdy

+ M113A3 Interior LOD tests

# Revision 896 - gurdy

@ LOD material fix

# Revision 895 - gurdy

^ Initial M113A3 Main res LOD deletions

# Revision 894 - gurdy

@ Removed holo from M240

# Revision 893 - gurdy

^ Improved M113A3 proxy LODs

# Revision 892 - LAxemann

Added: Config for Hellfire, Sidewinder and FFAR sounds

# Revision 891 - gurdy

@ M113 LOD test 01

# Revision 890 - Bakerman

^ HEAT simulation

# Revision 889 - Bakerman

@ FFAR sound loop

# Revision 888 - LAxemann

Added: New M136 sounds with tail system

# Revision 887 - Redphoenix

+ monolithic M32 launcher
@ M2A1 sight texture improved

# Revision 886 - Bakerman

M109 sound configs
^ M109 turret traverse speed

# Revision 885 - LAxemann

Adjusted: Javelin and M136 audible range
Added: Prepared vehicle rocket pod sounds

# Revision 884 - LAxemann

Added: New AH-1 Interior sounds
Added: AH-1 distance sounds

# Revision 883 - LAxemann

Added: M197 sounds
Added: m197 sound config
Added: 155mm sounds (not yet used)
Added: UH60 sounds
Added: UH60 distance sound

# Revision 882 - LAxemann

Changed: UH60 sound configs now point to rhsusf_sounds
Added: UH60 distance sound config

# Revision 881 - gurdy

^ SPCS scale

# Revision 880 - gurdy

@ M4A1 camo visibility????

# Revision 879 - gurdy

@ Made SPCS public for testing

# Revision 878 - gurdy

+ Added camo M4s to virtual ammo box

# Revision 877 - gurdy

@ M4A1s visible

# Revision 876 - gurdy

+ Added new SPCS for texture testing

# Revision 875 - MistyRonin

+ Add realistic bullet and mags to the M240 - M993 hidden for retrocompatibility tho in real life its not used in the m240

# Revision 874 - gurdy

@ M4A1 Hidden Sels

# Revision 873 - gurdy

+ Camo M4A1

# Revision 872 - gurdy

@ Fixed antennae selection

# Revision 871 - gurdy

@Humvee Hidden selections

# Revision 870 - gurdy

^ Humvee textures

# Revision 869 - gurdy

^ SPC Tweaks

# Revision 868 - MistyRonin

@Fix in Stinger missile lock system.

# Revision 867 - LAxemann

Tweaked: M4 closure volume

# Revision 866 - LAxemann

Added: All new M4 sounds 

# Revision 865 - LAxemann

Added: Missing M16 forest tail samples

# Revision 864 - LAxemann

Added: M2 mechanic sounds
Added: M134 Minigun servo sounds
Tweaked: Volumes

# Revision 863 - Bakerman

T909 minor script updates

# Revision 862 - Bakerman

@ FCS target lead
+ Option to disable/enable FCS target lead
T909 M1 target lead fixed

# Revision 861 - LAxemann

Added: All new M249 sounds. Yum.

# Revision 860 - LAxemann

Added: New M16 sounds
Fixed: Volume rebalance of almost all US handheld weapons
Fixed: Audible distance of most weapons increased to fit the current A3 standard


# Revision 859 - MistyRonin

@ Tweaked USMC weapon loadouts - per request

# Revision 858 - gurdy

@ Battlebelt clipping

# Revision 857 - MistyRonin

@ Fixes in USMC config - to allow Jenkins to work

# Revision 856 - MistyRonin

@Add new vests to USMC troops.

# Revision 855 - gurdy

+ Added SPC variants

# Revision 854 - gurdy

+ A2 Propper Camelback

# Revision 853 - MistyRonin

+ Adding missing ammo to US launchers crates

# Revision 852 - Soul_Assassin

Added mass to pallet

# Revision 851 - Soul_Assassin

Gear 2 for SPC complete

# Revision 850 - Bakerman

T868 APS script update

# Revision 849 - Bakerman

T868 General script improvements for USAF

# Revision 848 - MistyRonin

@ Last fixes to US Ammo & Weapons crates

# Revision 847 - MistyRonin

@ Fixes to US Ammo & Weapons crates

# Revision 846 - MistyRonin

+ Add missing Glock mags (also to VA)

# Revision 845 - MistyRonin

+ US Weapon crates

# Revision 844 - Redphoenix

^ ShadowLOD fix for US Supply Crate

# Revision 843 - Redphoenix

+ Test ShadowLOD 1000

# Revision 842 - Redphoenix

+ propper US Supply Crate

# Revision 841 - gurdy

^ LWH textures

# Revision 840 - gurdy

@ LWH textures

# Revision 839 - Redphoenix

^ Arma 3 will now use "RedHammerStudios" as pbo author in rpt - AFRF
+ added missing $PBOPREFIX$

# Revision 838 - Redphoenix

@ HMMWV Windows should now have less glare - close T776

# Revision 837 - Redphoenix

@ M1 Abrams series should now create dust particles on the propper places 

# Revision 836 - Redphoenix

@ M1 Abrams now consumes fuel - close T894
+ M1 Abrams Engine Stop sounds - close T880
^ M1 Abrams now uses the right sounds in the right place^
@ Adjusted M1 Abrams Sound levels

# Revision 835 - Redphoenix

^ M1911 Texture & RVmat update
^ Moved eye mem point for M1911

# Revision 834 - gurdy

^ SPC crotch flap

# Revision 833 - MistyRonin

@Fixing old US Army faction references

# Revision 832 - Soul_Assassin

M113 M2 desert lod fixes

# Revision 831 - MistyRonin

@ Fixing faction of USMC (LAR) Desert. 

# Revision 830 - MistyRonin

@ Little corrections on the USMC faction configs.

# Revision 829 - Soul_Assassin

Added lods to desert M113 w M2

# Revision 828 - Redphoenix

@ M1 Abrams fuel consumption - NEEDS TESTING & TWEAKING

# Revision 827 - gurdy

^ Improved SPC crotchflap texture

# Revision 826 - Soul_Assassin

^ Updated mod logo

# Revision 825 - gurdy

@ Added test crotchflap to spc rifleman

# Revision 824 - gurdy

@ Removed camelback from spc test

# Revision 823 - gurdy

@ Revert IOTV Rifleman to old model

# Revision 822 - LAxemann

Added: M32 sounds

# Revision 821 - LAxemann

Changed: Drastically decreased compression on the M2. The punch is back!

# Revision 820 - LAxemann

Changed: New M240 sounds

# Revision 819 - Redphoenix

^ upgraded HMMWV series tire armor - close T854

# Revision 818 - Soul_Assassin

Darkened SPC pouch textures

# Revision 817 - MistyRonin

@Fix of wrong faction issue for USMC (LAR)

# Revision 816 - MistyRonin

+ Adding missing files

# Revision 815 - MistyRonin

@ Updated USMC configs 

# Revision 814 - Soul_Assassin

SPC Texture fix

# Revision 813 - Soul_Assassin

First pass SPC gear 1 texture

# Revision 812 - Bakerman

@ M249 sounds
@ M18 hidden selections

# Revision 811 - Redphoenix

^final HMMWV cockpit gauges improvement - close T728

# Revision 810 - Redphoenix

^HMMWV cockpit gauge animation T728

# Revision 809 - gurdy

@ Another MGO fix...

# Revision 808 - gurdy

@ M145 MGO ARD fix

# Revision 807 - gurdy

+ Smoke Grenade Setup for M113A3

# Revision 806 - gurdy

+ M150 MGO (ARD)

# Revision 805 - gurdy

@ ACOG RVMAT

# Revision 804 - gurdy

@ Elcan Scale

# Revision 803 - gurdy

^ ACOG FP appearance 

# Revision 802 - Soul_Assassin

Fixed M32 inventory icon - close T891

# Revision 801 - Soul_Assassin

Fixed Frog hand placement - close T888

# Revision 800 - Soul_Assassin

Fix M2A1 position - Close T886
Fix wrong texture assignmnet on Eotech 

# Revision 799 - Bakerman

T868 Corrected tiny script omission

# Revision 798 - Bakerman

T868 firedSaclos made compatible with AI gunners

# Revision 797 - Bakerman

T868 TOW atgm marked as SACLOS

# Revision 796 - MistyRonin

@Solved Zeus error message - Close T887

# Revision 795 - Bakerman

^ Zues compatibility for weapon fire camera shake

# Revision 794 - Bakerman

Build test

# Revision 793 - Soul_Assassin

Fix @MistyRonin booboo

# Revision 792 - MistyRonin

@ Updated stringtable and factions - Few optimizations for a future commit

# Revision 791 - sykoCrazy

Gravity geo boxes "component" selection removed to avoid ingame collision

# Revision 790 - sykoCrazy

Gravity geo boxes "component" selection removed to avoid ingame collision

# Revision 789 - Bakerman

^ Updated CE penetration & protection script
Also fixed a bunch of errors

# Revision 788 - Soul_Assassin

^ LWH now have distance lods and hiddenselections work - closes T876
SPCS hidden - closes T875
FROG2 lods added and wighing fixed around the crotch and butt area - closes T872

# Revision 787 - MistyRonin

@Corrected stringtable entry.

# Revision 786 - sabre

[Textures] USMC FROG v2 Desert first version.

# Revision 785 - MistyRonin

+ New Gunner class for light vehicles and addition of variants of LWH helmets

# Revision 784 - sabre

[Textures] FROG Version 2 First Woodland MARPAT textures.

# Revision 783 - Bakerman

T868 Removed hint

# Revision 782 - Bakerman

T868 USF vehicle laser range finders now trigger shtora

# Revision 781 - Soul_Assassin

Cleanup launcher fovs

# Revision 780 - MistyRonin

+ Add extra fuel to UH-60 with ESSS external tanks - Before they had the same as the normal UH-60.

# Revision 779 - reyhard

@ added dummy wound texture to frog02 to prevent popup error on mission launch

# Revision 778 - Soul_Assassin

@ Weapon default FOV changed to 0.25 - work on T851

# Revision 777 - Soul_Assassin

@ Fixed forgotten sound attenuation values in M998 classes

# Revision 776 - zeealex

^ improved marine V2 hand weights

# Revision 775 - Soul_Assassin

LWH shadows and material fixes

# Revision 774 - gurdy

+ Added pictures for M1A1, M1A2, and M109

# Revision 773 - MistyRonin

@ Fixed: Wrong helmet in USMC Desert spotter

# Revision 772 - Bakerman

T857 40mm training round smoke puff

# Revision 771 - gurdy

^ Corrected ACH Norotos UCP config

# Revision 770 - gurdy

^ Improved LWH Acc textures

# Revision 769 - gurdy

^ New helmet selection fixes

# Revision 768 - MistyRonin

@ Fixed US Army Gunner for USMC HMMWV

# Revision 767 - gurdy

+ Added ACH (Norotos) 

# Revision 766 - gurdy

+ Added more LWH versions

# Revision 765 - MistyRonin

+ Grenadier (M32) class - plus different fixes 

# Revision 764 - MistyRonin

@ Fix Glock 17 stringtable & magazine definition 

# Revision 763 - Redphoenix

@ moved some 40mm rounds to folder weapons2/magazines/40mm
+ M576 Buckshot Round

# Revision 762 - reyhard

@ fixed desert m113 w/ m2

# Revision 761 - Redphoenix

@fired version of 40mm grenades

# Revision 760 - Redphoenix

^rotated M781 so it flies correctly
^changed config for M781 so it actually starts flying

# Revision 759 - gurdy

+ Added test SPCS versions

# Revision 758 - Redphoenix

+ M443 HEDP model and textures
+ M781 Practice Round model, config and textures

# Revision 757 - Redphoenix

@M32 ShadowLOD
^M32 model.cfg fixes
^M32 textures and RVMat
^M2A1 sight RVmat and textures


# Revision 756 - gurdy

vest fixes

# Revision 755 - gurdy

+ Readded updated IOTV

# Revision 754 - zeealex

@ Gurdy's Marine V-2 fix
+ MLOD for IOTV with no neckguard+ crotchflap
+ MLOD for SPC rifleman with crotchflap

# Revision 753 - Redphoenix

2nd pboproject crash fix

# Revision 752 - Redphoenix

fixed PboProject crash (missing ;)

# Revision 751 - Redphoenix

+ M32 animation
+ M32 config
+ 6Rnd 40mm magazines
+ M32 Inventory Pictures
+ M32 Initial model.cfg
+ added rhsusf_40mm_HE ammo class
@ rhs_mag_M441_HE and rhs_mag_M433_HEDP now use rhsusf_40mm_HE as ammo
@ M32 RVmat and textures

# Revision 750 - Pufu

Added FMJ and JHP ammo - Spartan's ballistics

# Revision 749 - Soul_Assassin

Strings reverted and merged

# Revision 748 - Redphoenix

@ M32 textures now use the correct texture suffixes
# M2A1 GL sight Injection

# Revision 747 - Pufu

TI map addded, emissive night sights

# Revision 746 - Redphoenix

+ Initial Injection of M32

# Revision 745 - gurdy

^ Fixed FROG2 rvmat


# Revision 744 - Pufu

more shadowlod fiddle...

# Revision 743 - Pufu

further fixes (eye further away - similar to BI)

# Revision 742 - Pufu

shadow LOD fix

# Revision 741 - Pufu

glock inventory icon added.

# Revision 740 - Pufu

second Glock config. Needs ammo class via Spartan.

# Revision 739 - Soul_Assassin

Glock fix

# Revision 738 - MistyRonin

+ Initial config for Glock 17.

# Revision 737 - gurdy

^ Fixed FROG D hidden selection 

# Revision 736 - gurdy

+ Added Temp texture to FROGv2

# Revision 735 - Pufu

first commit glock 17 gen 4 - all LODs + anims in. needs config

# Revision 734 - gurdy

^ Improved HMMWV textures and added additional Green options

# Revision 733 - gurdy

^ Texture improvements from Snorri and RVMAT adjustments 

# Revision 732 - gurdy

^ LWH scale tweak


# Revision 731 - gurdy

^ Improved LWH model and added textures

# Revision 730 - reyhard

@ fixed small alpha dots on wheels textures
@ sorted alpha chanells (not completly) on m113 tracks/wheels

# Revision 729 - Soul_Assassin

@ Major stringtable fixes (Schmeisser)

# Revision 728 - reyhard

@ fixed small hole in  turret rear of M1 FG

# Revision 727 - gurdy

^ Fixed M113 texture paths

# Revision 726 - MistyRonin

@ Corrected a few errors in M113 config.cpp

# Revision 725 - gurdy

+ Added remaining M113 variants and textures

# Revision 724 - Soul_Assassin

@ Fixed addon dependency problem causing crashes on Linux servers when using M136

# Revision 723 - reyhard

+ added PIP driver optic to M1 tanks

# Revision 722 - reyhard

^ increased armour around TOW launcher for Bradleys
^ tweaked aiming point for AI for M1 tanks (experimental - tweak by moving zamerny mem point)
@ fixed various destruction errors for M1 - close T787
^ tweaked few hitpoint for M1 tanks
@ readded missing icons for m113

# Revision 721 - gurdy

^ Added correct weapons to M113s

# Revision 720 - gurdy

+ M113A3 M240 name string

# Revision 719 - gurdy

^More M113A3 corrections

# Revision 718 - gurdy

+ Added Improved M113A3 textures, variants, and shadows

# Revision 717 - reyhard

^ improved hmmwvies destroyed textures & fixed some missing elements
^ standarized a little bit HEAT hit values so new & old system go along a little better

# Revision 716 - Soul_Assassin

^ Bradley turning

# Revision 715 - Redphoenix

^ Improved Turning for Abrams (possible fix for jerky turning)

# Revision 714 - gurdy

+added WIP shadow lod to edit 30 of *_d_M2, added test shadows to some proxies

# Revision 713 - gurdy

+M113 Icons

# Revision 712 - gurdy

+Added updated M113 track textures

# Revision 711 - gurdy

^added new interior textures and fixed remaining materials

# Revision 710 - Redphoenix

^ reduced specular power for M113A3
@ fixed physx
@ fixed paths to materials and textures in m113a3_d_unarmed.p3d

# Revision 709 - gurdy

+Added new pintle and M113A3 variants

# Revision 708 - reyhard

@ fixed strange proxy path for m1a1 tusk I D

# Revision 707 - reyhard

@ fixed m1 damage selections
@ fixed m1a2 tusk commander cupola shields


# Revision 706 - reyhard

^ reduced minimal lase range for m1 - 200m main cannon & 50m coax - calculations at those distance are WIP!
^ tweaked hmmwvies res lods
@ fixed missing damage rvmats for a2 parts
^ tweaked FG of m1 around loader & commander stations
^ tweaked movement ranges for loader mg

# Revision 705 - reyhard

@ changed m1 & m2 commander anim to fix visible rifle while turned in
@ some rpt errors

# Revision 704 - Soul_Assassin

trying to unfuck the m113

# Revision 703 - gurdy

+Added M113A3 stringtable names

# Revision 702 - gurdy

+ Initial Injection of M113A3 (Expect breakage)

# Revision 701 - reyhard

@ restored displayNameShort for US grenades as it was impossible to cycle through grenade types
^ tweaked m1 fcs calculations a little bit

# Revision 700 - Bakerman

Reduced heavy muzzle refraction

# Revision 699 - Bakerman

Reduced heavy refraction

# Revision 698 - reyhard

+ added bipod legs extending anim
@ rotated bipod proxy - close T735

# Revision 697 - Bakerman

T807: Fixed javelin sound reference. Added M249 muzzle up memory points. Added M249 muzzle refraction. Reverted M249 sounds to original. Updated M249 gun particles. Updated M249 description and library. Removed Mk48 material files. Removed faulty M249 receiver material reference.

# Revision 696 - reyhard

CTI:
+ added cantCreateAI=1; param for CTI exclusion (m1a2 mg turrets shouldn't be manned now)

# Revision 695 - gurdy

^hid spec ops rifles and GLs

# Revision 694 - gurdy

^ Improved M109WD textures

# Revision 693 - reyhard

+ added custom arsenal function to prevent load bug - work on T573

# Revision 692 - reyhard

+ added abilitiy to heal at FMTV medcenter
@ fixed AH64 sidewinder errors - Close T820
@ fixed UH60M getin errors - close T819

# Revision 691 - Redphoenix

^ scope = 2 for FMTV Shelter

# Revision 690 - Bakerman

+ Ability to disable vehicle decals with object variables 'RHS_Decal_Enabled', 'RHS_Decal_Symbol_Enabled' & 'RHS_Decal_Number_Enabled'

# Revision 689 - reyhard

^ added missing units to cfgPatches
+ added FMTV shelter animations

# Revision 688 - Bakerman

@ M1 decals are now networked synchronized

# Revision 687 - reyhard

@ fixed weap_m240_base name

# Revision 686 - reyhard

+ added rhsusf_c_troops to CfgPatches of various vehicle addons to prevent rare bug with missing entry in addons list which cause loading errors on dedidcated server
@ fixed m249 & m240 inheritance in sounds pbo - close T808
@ fixed middle cargo seat in uh1y

# Revision 685 - Soul_Assassin

^ Lowered MOI of Abrams wheels to induce better loss of speed

# Revision 684 - reyhard

+ added offset calculations for m1
^ tweaked delpoy points for m249
+ added reslods to marines
^ changed bradley moi to prevent speed bug - YET, ai can't maitan their topspeed 

# Revision 683 - Soul_Assassin

@ SR-25 suppressor image fixed

# Revision 682 - MistyRonin

^ Adding new M249 to AI weapons.

# Revision 681 - Soul_Assassin

long shotgun texture fix

# Revision 680 - Soul_Assassin

fixed boo boo

# Revision 679 - gurdy

^ Reorganized M249s

# Revision 678 - Soul_Assassin

further weapon reference fixes

# Revision 677 - Soul_Assassin

weapon references corrections

# Revision 676 - MistyRonin

^ Adding RHS magazines compatibility to the M249

# Revision 675 - Soul_Assassin

Abrams M240 path fixes

# Revision 674 - zeealex

@ fixed m240 .rvmat filepaths

# Revision 673 - Soul_Assassin

+ M249 and derivatives (toadie2k)

# Revision 672 - Bakerman

^ Small arms barrel refraction is more subtle

# Revision 671 - Soul_Assassin

initial moving of weapons2

# Revision 670 - Redphoenix

^ lowered Center of Mass for Bradley to prevent rolling

# Revision 669 - Redphoenix

^ Bradley PhysX
^ M1-series PhysX
^ FMTV-Shelter SMDI files

# Revision 668 - zeealex

+ added Leupold mk4 entry in virtual ammo box

# Revision 667 - zeealex

^ added auxillary LODS to mk4
@ fixed alpha issue with mk4 reticle. 

# Revision 666 - Bakerman

T712 Removed 'vehicleSpeedY' from moveVelocity

# Revision 665 - Bakerman

T712 Cartridge ejection for M249 & M240 with correct size and timing. Also fixed the double cartridge effect caused by GunParticles inheritance

# Revision 664 - Redphoenix

@ Leica ShadowLOD now use Hard Edges

# Revision 663 - Redphoenix

^ Leica size
^ Leica LODs

# Revision 662 - zeealex

@ removed Rangefinder UI from Leupold Mk4

# Revision 661 - zeealex

@ fixed missing }; in  rhsusf_misc

# Revision 660 - zeealex

@ fixed incorrect filepaths in Leupold mk4 in config

# Revision 659 - Bakerman

T712 Updated cartridge particle velocity to be twice as fast

# Revision 658 - Bakerman

T712 Updated cartridge particle inheritance

# Revision 657 - zeealex

+ Leupold Config (didn't commit)
@ Reversed Green Channel on Leupold NOHQ

# Revision 656 - zeealex

@ Fixed duplicated "</Key>" in string table

# Revision 655 - zeealex

+ Leupold Mk4 Spotting scope (pending correct animation)
@ Fixed incorrect string table entries for Lerca 1200 (Tan)

# Revision 654 - Redphoenix

^ added shell and link ejection for M249 - T712

# Revision 653 - Soul_Assassin

config fixes

# Revision 652 - Redphoenix

^ US grenade family now uses strings for displayName
@ US grenade family has proper/correct descriptionShort - close T795
@ SR-25 now has correct inventory pictures - close T794
^ SR-25M/EC now uses strings instead of normal displayName
@ Harris Bipod has now the correct descriptionShort

# Revision 651 - Redphoenix

^ added missing geometry to M240 feed tray cover selection

# Revision 650 - Redphoenix

^ fixed missing comma in line 176 addons/rhsusf_m1a2/model.cfg

# Revision 649 - gurdy

+ added ERA selections to M1 model.cfgs

# Revision 648 - gurdy

+ M1 script fixes

# Revision 647 - gurdy

+added fixed TUSK I textures

# Revision 646 - zeealex

@fixed M1A1SA config to use new optics modes. 

# Revision 645 - MistyRonin

- Removing tracers from AH-1, AH-64 and A-10.

# Revision 644 - Bakerman

Fixed particle reference for m240

# Revision 643 - Bakerman

@ Correct size for 7.62 ejected cartridges

# Revision 642 - Redphoenix

@ m240B_CAP.p3d no ejects ONLY shells from the bottom ejection port

# Revision 641 - Redphoenix

^ Bullet casings now eject through the correct bottom port
@ Fixed wrong classnames for M240 in virtualAmmoBox.sqf

# Revision 640 - Soul_Assassin

% Fixed M1A1 and A2 lod issues

# Revision 639 - Soul_Assassin

fixed wrong texture and rvmat for tusk 1

# Revision 638 - Soul_Assassin

fixed wrong rvmat on m1 tusk

# Revision 637 - Soul_Assassin

% Fixed buggy soldier leg memory points

# Revision 636 - gurdy

^ clarified M109 names

# Revision 635 - gurdy

^ improved M1A2 spec maps

# Revision 634 - gurdy

+ Updated M109A6 textures


# Revision 633 - gurdy

+Added Update M1A1 TUSK I textures

# Revision 632 - gurdy

^more M1A1 fixes

# Revision 631 - gurdy

^correct barrel art index scripts


# Revision 630 - gurdy

+more barrel art

# Revision 629 - gurdy

^remove slat from base M1a2s

# Revision 628 - gurdy

M1A1SA Fixes

# Revision 627 - gurdy

+ initial injection of M1A1SA TUSK I

# Revision 626 - gurdy

^M109A6 textures

# Revision 625 - Bakerman

All USF weapons now have refraction, updated particles

# Revision 624 - MistyRonin

@Fixed ammo cost for US shells .

# Revision 623 - Soul_Assassin

% UH1Y bounding box fixed

# Revision 622 - gurdy

hidden sel fix

# Revision 621 - gurdy

revert vest models

# Revision 620 - MistyRonin

@Corrected US EOD & Marksman configs

# Revision 619 - Soul_Assassin

class name capitalization improved for documentation

# Revision 618 - gurdy

fixed new barrel art

# Revision 617 - gurdy

more abrams fixes

# Revision 616 - gurdy

adjusted white on barrel art

# Revision 615 - MistyRonin

@Fixed RG-33 editor wrong factions 

# Revision 614 - Soul_Assassin

Closes issue T779- M240 shadows

# Revision 613 - Redphoenix

^ fixed broken rhsusf_c_weapons/rhsusf_weap_rifles.hpp - two class GunParticles

# Revision 612 - Soul_Assassin

^ Refraction points added to rest of rifles

# Revision 611 - Soul_Assassin

% Javelin tube sparks when hit

Closes issue T778

# Revision 610 - gurdy

added ballistic shield glass

# Revision 609 - gurdy

added updated barrel art

# Revision 608 - gurdy

added MILES plates and corrected LODS

# Revision 607 - Bakerman

+ Muzzle heat refraction for USF weapons

# Revision 606 - gurdy

added final MILES textures


# Revision 605 - Redphoenix

+ added usti hlavne up memory points for most USF weapons

# Revision 604 - Bakerman

Working barrel refraction on M4 base

# Revision 603 - Bakerman

12gauge ammunition configuration with effects

# Revision 602 - Redphoenix

@ usti hlavne had 2 memory points in selection

# Revision 601 - Redphoenix

+ testing Heat Haze for Weapons (not functional)

# Revision 600 - MistyRonin

@Fixing little mishap I did in my last commit. 

# Revision 599 - MistyRonin

@Fixed US vests' values.

# Revision 598 - kenji

add miles hide animation

# Revision 597 - MistyRonin

@STANAG mags allowed in M249 - Added for realism sake, tho it won't be shown in the appearance. 

# Revision 596 - gurdy

added test MILES plate


# Revision 595 - Bakerman

12gauge ammunition configuration, not complete yet

# Revision 594 - Redphoenix

@ Lerca Rangefinder now uses strings
@ Shotgun 12g ammo now uses strings

# Revision 593 - Redphoenix

^ FMTV configs improvements

# Revision 592 - Redphoenix

- removed PhysX Test Version from M1A2 for release

# Revision 591 - gurdy

added improved textures

# Revision 590 - Redphoenix

+ added 3 more 12gauge ammo for shotguns (Slugs, HE-ET, FRAG)

# Revision 589 - Soul_Assassin

% Fixed various M1A2 Tusk lod issues

# Revision 588 - gurdy

tweaked RVMATs

# Revision 587 - gurdy

M1 fixes

# Revision 586 - gurdy

upgraded M1A1s

# Revision 585 - MistyRonin

@ Fixed US accessories' wrong inherited inertia values.

# Revision 584 - MistyRonin

- Removed Radar from UH60, UH1, CH47
@ AH1 & M2 Radars changed to Tactic display. - Work on T739

# Revision 583 - MistyRonin

@Various fix in US troops configs - (D & UCP explosive class, helmets, etc.

# Revision 582 - Soul_Assassin

% Hopefully fixed Abrams texture  error

# Revision 581 - gurdy

fixed SPC hidden sels


# Revision 580 - Soul_Assassin

% Fixed config error for packing

# Revision 579 - Soul_Assassin

% Fixed new vests

# Revision 578 - LAxemann

Fixed: Interioir tails for M240 and M249
Fixed: UGL sounds
Soon to come: New sounds. Yay!

# Revision 577 - MistyRonin

@Update US configs to show icons - close T765
+Added Explosives class (equipping the new M112 charges)

# Revision 576 - Soul_Assassin

Fix builds

# Revision 575 - gurdy

fixed spc naming convention


# Revision 574 - gurdy

added new vests

# Revision 573 - zeealex

^Improved Bowman and associated textures, re-scoped the class to 2.

# Revision 572 - Soul_Assassin

^ insideSoundCoef added and adjusted to all vehicles to provide better compatibility with ACRE

# Revision 571 - Soul_Assassin

% Wrong RVMAT on Squadleader IOTV

# Revision 570 - Soul_Assassin

^ UH-60M rotor startup animation
% UH-60M rvmat reference error

# Revision 569 - Soul_Assassin

% Humvee armor value added

# Revision 568 - Soul_Assassin

^ IndirectHitRange of M230 cannon set to 3m

# Revision 567 - Soul_Assassin

% M1 Abrams Loader now able to zero his M240

# Revision 566 - Bakerman

^ Damage and penetration values updated for USF heavy AP rounds

# Revision 565 - Soul_Assassin

Fixes T750

# Revision 564 - Soul_Assassin

Formatting fixes

# Revision 563 - zeealex

+ vest models added for sabre to look at. (no config, figuring it out.)

# Revision 562 - gurdy

fixed M1A2 TUSK 1 D turret tex

# Revision 561 - gurdy

added improved textures


# Revision 560 - gurdy

added upgraded textures

# Revision 559 - gurdy

added new M1A2 TUSK versions

# Revision 558 - Redphoenix

Initial Injection of several FTMV Variants

# Revision 557 - Redphoenix

@ Injection of DPV - no config

# Revision 556 - gurdy

LWH rescale... again

# Revision 555 - gurdy

lwh rescale

# Revision 554 - sabre

[Textures] M240B&G First version. No plastic .rvmats yet.

# Revision 553 - zeealex

+Added Insignia to version 1 FROG

# Revision 552 - reyhard

@ fixed typo in virtualAmmoBox.sqf

# Revision 551 - reyhard

- removed gear indicator from ah1z hmd
@ fixed m112 textures
@ fixed too many FFV turrets for unarmed UH1Y
^ tweaked vehicle paradrop

# Revision 550 - MistyRonin

+ Injection of M112 charges
+ Inserted LWH to arsenal and to certain units
@ Fixed LWH textures

# Revision 549 - zeealex

+ injection of US female name sets
+ added p3d of FROG version 2 (needs configuring)

# Revision 548 - gurdy

added LWH helmets

# Revision 547 - LAxemann

Added: New M249 sounds
Added: New M240 sounds

# Revision 546 - Bakerman

+ Camera shake for AH-1Z M197 cannon fire

# Revision 545 - Redphoenix

^ muzzleFlash for M1911A1 not positioned correctly

# Revision 544 - gurdy

abrams texture updates

# Revision 543 - gurdy

hid SOCOM rifles


# Revision 542 - gurdy

cleaned up RHS headgear

# Revision 541 - MistyRonin

@ Rollback of US Factions - Work on T746

# Revision 540 - Redphoenix

^ improved again textures for Silencers

# Revision 539 - MistyRonin

^ M107 scoped to 0 per request

# Revision 538 - MistyRonin

+ Initial injection of M107 Barrett - It still needs texture and proper anims.

# Revision 537 - Redphoenix

^ darker diffuse maps for NT4

# Revision 536 - Redphoenix

^ viewPilot LOD for NT4 TAN does not use black texture
^ shadowLOD10 is not inheriting any texture

# Revision 535 - Redphoenix

+ added NT4 QDSS supressor - close T725

# Revision 534 - Redphoenix

+ M1 PhyX Test Version
+ Missing seat_pack_nohq.paa for C130

# Revision 533 - MistyRonin

+ Add 50 rounds mag for the M240
+ Add M240B (CAP) & M240G spawnable in zeus.

# Revision 532 - gurdy

@ M240 fixes

# Revision 531 - gurdy

added M240B with cloth bag

# Revision 530 - gurdy

readded new M1A2 textures

# Revision 529 - gurdy

model fixes

# Revision 528 - gurdy

adjusted memory points in M240 models

# Revision 527 - gurdy

injected M240 model

# Revision 526 - MistyRonin

^ Corrected faction assignation of 2010 US AA & APCs

# Revision 525 - reyhard

@ fixed wrong implementation of underbarrel JR
^ removed cursors from air weapons
@ fixed CH47 seats count

# Revision 524 - Redphoenix

- removed Test M1A2 (accidental commit)

# Revision 523 - Redphoenix

^ HMMWVs now use stringtable.xml names
^ Final HMMWV A2 PhysX Update
^ renamed several files in rhsusf_hmmwv_c with dependencies

# Revision 522 - sabre

[Textures] OGPK version 1.

# Revision 521 - Redphoenix

^ further HMWWVA2 engine refinements based on new data

# Revision 520 - reyhard

@ fixed uh1y observer get out bug - close T727

# Revision 519 - reyhard

@ fixed m134 wrong inheritance in sound cfg resulting in low rof

# Revision 518 - Soul_Assassin

[TAG] First commit of 0.3.8


# Revision 517 - reyhard

@ attempt to fix packing errors

# Revision 516 - gurdy

@ fixed humvee shadow lod and fixed normal

# Revision 515 - reyhard

@ fixed M2 commander turned out anims
@ fixed missing M2 era hitpoints

# Revision 514 - reyhard

^ another fix for broken hmmwv hidden selections

# Revision 513 - reyhard

- removed .tga textures
^ improved attachments inheritance
@ fixed issues with dumping lead in M1 FCS
^ tweaked once again gunner optic stabilization for AH-1 & AH-64

# Revision 512 - zeealex

^ removed bysta proxy from M81 FROG

# Revision 511 - reyhard

@ fixed muzzle attachments for m4 - close T724
@ fixed HMMWV hidden selections

# Revision 510 - gurdy

@ more humvee fixes

# Revision 509 - gurdy

@ commited non-broken textures

# Revision 508 - gurdy

@ A2 parts texture improvement

# Revision 507 - gurdy

@ Humvee Texture Fixes

# Revision 506 - gurdy

@ M998 interior _as fix

# Revision 505 - Redphoenix

^ updated HMMWV PhysX to A2-standard

# Revision 504 - reyhard

@ fixed hmmwvie vertices limit bug
+ added HMMWV antenna anims
+ configured uh60 & M1 sounds
+ added one, non stabilized, gunner mode for ah64

# Revision 503 - gurdy

@ reverted M1A2 textures

# Revision 502 - gurdy

@ fixed armed humvee meshes

# Revision 501 - gurdy

+ Initial injection of A2 Humvee Parts

# Revision 500 - LAxemann

Changed: New M4 sounds (First sounds made with professional recordings)

# Revision 499 - zeealex

@ Incorrect/Absent IOTV and SPC .rvmat references (T721)
^FROG Weighting issues (T720)

# Revision 498 - reyhard

- removed m2010 bolt action anim

# Revision 497 - reyhard

^ tweaked m1 sound cfg
@ fixed uh1y reflectors
+ added directionStabilized = 1; to uh1y, ah1z & ah64
+ ported a2 cruise missile - to use [getpos start,getpos target] spawn rhs_fnc_cruiseMissile_launch

# Revision 496 - MistyRonin

^ Fixed subfaction strings that prevented USMC helos from being listed. 

# Revision 495 - reyhard

^ some improvments to flir camera script
^ tweaked uh1y pilot reticle

# Revision 494 - reyhard

+ added collimator effect to uh1y pilot hud
+ added UH1Y flir camera script
^ improved flir camera view
+ added polish stringtables by Gienkov
^ improved compatibility with TFAR

# Revision 493 - MistyRonin

+ Add Harris bipods to US weapons used by AI. 

# Revision 492 - MistyRonin

^ Updated Bradley ammo - close T713
^ Updated M829 mag count to 30 - close T714
^ Updated RG33 & M1025 armed variants' ammo count - Work on T391
^ Optimized US Air crew macros

# Revision 491 - gurdy

M1A2 Texture Test

# Revision 490 - gurdy

AR-15 fixes


# Revision 489 - reyhard

^ updated asdg jr compatibility code for marksman dlc
- removed marks fix for a3 1.40 version

# Revision 488 - MistyRonin

+ Added all US Weapons to Zeus/Editor spawn list (launchers & handguns included) - Work on T695.

# Revision 487 - reyhard

@ fixed duplicated weapons in arsenal

# Revision 486 - MistyRonin

+ Add Helicopter D / WD subfaction for each 2010/2014 USMC factions - Work on T267

# Revision 485 - reyhard

+ added UH1Y and AH1Z (WIP) - close T272
+ added category class to vehicles (fixes zeus cost module recognition + 3rd party mods may use it for better vehicle class recognition)
@ fixed flashbang errors for standalone USAF mod
@ fixed armed HMMWV leaning - close T704
+ added/tweaked supply points for FMTV & HMMWV - close T692
+ added new monitors for CH47 & UH60
+ added VG support for US helicopters
- removed radar from CH47
^ tweaked destruction materials for CH47 & AH64
+ added AH64 with sidewinders (+ability to equip it via VG to all variants)
^ improved config for AH64 sounds
+ added hideWeaponsGunner=1 param to Bradley (introduced due to requirment to draw player weapon for turned out FFV which Bradley doesn't use for now)
+ added turret traversee sound for M1
+ added new hand anim for M4+M320
+ added deploy pivot point for western weapons
@ fixed placable lerca errors (missing pictures/classnames)
^ changed M1 loader turned out recognition to isTurnedOut command (marksman dlc)
+ added visible on ground magazines
+ changed m4/m16 built in bipods into linked item 
^ changed UIs initialization (marksman dlc preparation)
^ changed recoil for M1911 so it's inherited from base clas (recoil not working on devbranch)
+ added new firegeometry & ramp anim to rest of Bradleys

# Revision 484 - MistyRonin

+ Added all US Weapons to Zeus/Editor spawn list - Work on T695.

# Revision 483 - LAxemann

Added: All new M240 reload sounds

# Revision 482 - LAxemann

Added: Sounds for the M1911A1
Added: Config entries for the M1911A1 in sounds

# Revision 481 - Bakerman

T701 USF ce_penetrators updated to array format

# Revision 480 - MistyRonin

+ Added first group of spawn equipment to Zeus/Editor  - Work on T695

# Revision 479 - reyhard

+ added hasBipod param to weapons with integrated bipod
^ tweaked moving in flying c130 script
@ fixed duplicate in stringtable

# Revision 478 - MistyRonin

^ Fast fixes 2 of div per years - Related to T697 .

# Revision 477 - MistyRonin

^ Fast fixes of div per years - Related to T697 

# Revision 476 - MistyRonin

^ Divide US Factions in two time periods (2010 & 2014) - Close T697 (yey!!!)

# Revision 475 - reyhard

change to trigger jenkins

# Revision 474 - reyhard

@ fixed JR CTD after marksman dlc tweaks
+ added temporary fix for missing underbarrel.p3d (delete that .pbo if you use devbranch - shouldn't cause any errors anyway)

# Revision 473 - MistyRonin

^ Updated tankers' load-out - Close T693

# Revision 472 - zeealex

^ Weights of Base Marine Model Improved
@ Scale of SPC Fixed(Gurdy) and weighting improved


# Revision 471 - MistyRonin

+ Added NVG & caps for the US Forces in a smarter manner. - Work in T508
^ Updated M1025 loadout to be coherent with the future new lods - Work in T391

# Revision 470 - reyhard

fixed hmmwv transparency sea bug
added open & flatbed fmtv variants
added shadow lods for FMTV
fixed FMTV getin memory point
added map icons for all FMTVs
added spare wheel & cover hide anims for FMTV (compatibile with virtual garage)
increased RG33 wheel durability
decreased RG33 speed with wheels destroyed
configured harris bipod (marksman DLC preparation)
added new underbarrel proxies to western rifles (marksman DLC preparation - expect missing proxy error on stable branch)
fixed mk18 m320 shadows & axis
changed penetration material for weapons to new weapon_plate (marksman DLC preparation)
added map icon for rg33
reworked map icons for hmmwvies
added virtual garage support for m113 & m2 bradley (notice ability to change armanent on m2a2)

# Revision 469 - MistyRonin

- Removed NVG from US soldiers & marines default load-out.

# Revision 468 - gurdy

+ new canvas covers to before empty frame proxies for FMTVs

# Revision 467 - reyhard

+ added test ability to move inside flying c130
- removed overlaping cargo seat in fmtvs
+ added glass destruction rvmats & sections in model.cfg to fmtv

# Revision 466 - MistyRonin

- Removed colored ballistic glasses from US soldiers & marines default loadout - Close T681

# Revision 465 - MistyRonin

^ Updated US Armor water fording - Work on T597

# Revision 464 - reyhard

@ fixed missing m2 muzzle flash on HMMWV after adding FFV seats 
^ tweaked M2 MG feedtray cover axis on various vehicles
+ added missing hide animations for OGPK turret on RG33
^ tweaked glass hitpoints on rg33
+ configured armed FMTV variants

# Revision 463 - reyhard

@ fixed missing UH60MEV copilot
@ fixed duplicated binoculars in marine loadout
@ fixed jenkins ctd with FMTV (begin of FMTV M2 setup)
@ fixed some missings strings in female RP (still a lot ahead) + it should be possible to use female RP with our US soldiers
+ added some test m1 gas turbine sounds (doesn't sound good)

# Revision 462 - MistyRonin

^ Additional sideweapons for US tankers and tweaked M1A1 M1A2 tank loadout. - Updated T391 and T508

# Revision 461 - gurdy

@ FMTV Turret Hatch Size
+ FMTV (M2) base models

# Revision 460 - MistyRonin

^ Improved water fording depth for: RG-33 M1A1 M1A2 FMTV LMTV - Work on T597

# Revision 459 - reyhard

+ added mirror material to unarmed rg33 mirrors (no black squares while PIP is off)
^ tweaked M2A2 Firegeometry
^ tweaked M2A2 Geometry & added roadway lod - it's possible to get inside now
+ added option to manualy open ramp in M2
^ reduced cost for western missiles (rearming fix)
@ fixed some missing sections errors in devbranch
+ added reslods to shotguns
^ improved shotgun bolt animation
- removed axis bones from m1911
@ fixed non convex component in ch47 geometry (possible CTD fix)
@ fixed few missing sources bugs connected to non existing m240 MG in ch47
@ fixed missing anim src glass7 for uh60m
+ added isPersonTurret=0 to M1A2 commander gun & for loaders (marksman dlc preparation)
^ increased TUSK gunner light intensity
^ configured turned out angles for M1 commanders (marksman dlc preparation)
+ added reslods for M1 FEP tanks
+ added m240 & m2 (sep only) anims to M1 tanks
@ fixed M1A2 commander seat sometimes locked permantelty while vehicle not local
+ added female radio protocol (WIP - connected only to AAF soldiers right now)
+ added some FFV positions to UH60 MEV version wo/ ESS wings
+ added few more get in memory points for uh60
+ added vehicle paradrop script to C130J

# Revision 458 - Redphoenix

^improved M1911A1 smdi map

# Revision 457 - Redphoenix

^ More Resolution/Distance LODs for M1911A1

# Revision 456 - Redphoenix

Final Overhaul of M1911A1 (animations, strings, ammo) - close T581

# Revision 455 - MistyRonin

Add M1911 to US troops (officers, SL and snipers)
Corrected USAF uniform.

# Revision 454 - reyhard

tweaks to m1911

# Revision 453 - Redphoenix

Initial Injection of M1911A1

# Revision 452 - MistyRonin

Hotfix for missing ; 

# Revision 451 - reyhard

added test bipod configuration for m249 & m240
fixed m4a1 pip m203s inheritance
fixed some arsenal CTD in devbranch
removed top & side slot from shotguns 

# Revision 450 - reyhard

fixed usmc decals (alpha sorting) on hmmwvies
added some small anims (engine & gear switch)
fixed m1025 driver high getin memory pos
fixed right mirror view on armed m1025
added FFV & window lower/raise action to m1025
added rotor destruction effect to western helis
tweaked door handling on uh60
fixed medic IOTV camo selections in last res lod
added wound textures to US soldiers
added reslods to FROG uniforms
added new fire geometry for m2a2 ODS (WIP)
added ramp anim for m2a2 ODS (WIP)
added Kimi HMD for HMD (work on T510)

# Revision 449 - gurdy

M4 fixes

# Revision 448 - gurdy

m4 model.cfg fix

# Revision 447 - gurdy

added more M4 GL variants

# Revision 446 - MistyRonin

Corrected HMMMWV fording depth values* and add differentiation for USMC.

As exact meter values didn't work (thanks to BI), I used relative values. 

# Revision 445 - reyhard

added door & ramp sounds to helis, c130, hmmwvies & rg33
fixed iotv grenadier vest (last lod was containing ref stuff)
fixed some errors with balistic computer on m1 tanks
tweaked once again   HeadAimDown param

# Revision 444 - Redphoenix

Fixed: M113 MG squad has no 2 GPMG instead of M249 - clsoe T532

# Revision 443 - Redphoenix

Fixed: Bradleys now have the same mobility as Abrams - close T650

# Revision 442 - reyhard

fixed uh60 MEV geometry proxies
close T621 - tweaked HeadAimDown param
close T619 - added pmag round count
fixed bolt clipping on M590a1
increased a little bit fireSpreadAngle for shotguns

# Revision 441 - MistyRonin

Updated US hitpoint & armor values (no longer the US faction inherits values from alien factions with an additional armor; now inherits values from NATO )
Updated US vests. 
Now US helmets weight something, and have proper resistance to perforation.  

# Revision 440 - sabre

[Textures] M203 version 1. Added 's' textures that will need to be assigned to the short versions when they are added.

# Revision 439 - zeealex

Improved Grenadier IOTV weights (T617) Leaving it open for suggestions for the time being. 

# Revision 438 - reyhard

tweaked shotguns ironsights
reduced shotgun shell spread  
increased SR25 accuracy
SR25 use for now M14 sounds
increased ver number in options menu
fixed m1a2 tusk & M1A1FEP geometry (ability to go into hull)
added test configuration of M320 on pistol slot

# Revision 437 - reyhard

added sound attenuation to 130
increased zoom for 3d elcan
tweaked eotech reticle
tweaked m203 zeroing
close T616 - fixed pip optics wallhack
fixed m240 ironsight visible in pip optics

# Revision 436 - Redphoenix

Fix: changed frictionVsSlipGraph to prevent oversteering when turning - close T657

# Revision 435 - gurdy

rescaled SR-25

# Revision 434 - reyhard

added handanim for m203 variants
added missing m203 shadow for m16a4

# Revision 433 - reyhard

configured more or less m203 gl with ultra hacky method -yet it's still lacks proper zeroing on 200&250m
initial improvment to M1 FCS zeroing
added player autoloading of AT launchers

# Revision 432 - MistyRonin

HEMTTA2, FR and MARSOC scoped 1

# Revision 431 - MistyRonin

Add M203 to USMC soldiers.

# Revision 430 - gurdy

add M203s


# Revision 429 - MistyRonin

Update US flares, close T640

# Revision 428 - toadie2k

Synced reload anim to character animation

# Revision 427 - reyhard

added a10 to zeus cas module
added m19 at mine to minefield module

# Revision 426 - reyhard

cargo nvg visible in open hmmwvies, c130 & ch47
added res lods to silencers & muzzle brakes
fixed m16a4 carryhandle ironsight view

# Revision 425 - reyhard

close T622 - mk18 & b2 front sight folding added
close T623 - added eject option for 130j
close T624 - lowered hit value (smaller recoil) for mk19 + added some new round (HEDP)
close T630 - sr25 optics proxies changed
fixed ah64 hellfire alpha bug
changed order of turret in helicopetr - compatibility with TFAR
increased 3d acog zoom
3d acog zoom now use 16:9 aspect ratio (investigating currently way to have compatibility with different ratios)
removed for now global variable clean up code

# Revision 424 - Redphoenix

Added: Inventory Pictures for Black & Clear Ballistic Glasses - close T631
Added: Orange & Yellow Ballistic Glasses - close T629
Fixed: M993 7.62 has no 20 rounds instead of 30 - close T626

# Revision 423 - MistyRonin

Added first USMC FR groups

# Revision 422 - reyhard

merged menuoptions.hpp changes from russian side
added shadow vollume 10 lod to sr25
tweaked sr25 firegeometry

# Revision 421 - Soul_Assassin

[TAG] First commit of 0.3.7

# Revision 420 - Soul_Assassin

[Fixed] Russian translations

# Revision 419 - Redphoenix

Stringtable.xml  German Translation Update

# Revision 418 - MistyRonin

Updated USMC configs & stringtable

# Revision 417 - reyhard

added reslods to m2010 & eotech
added keybinding support for M1 FCS & western accessories/weapons
configured sr25
fixed typo in m2010 reload anim
removed lockon from m240
improved menu script, added some tooltips


# Revision 416 - gurdy

added KAC stocks to SOPMOD weapons, added (for now, unused) SR-25 files

# Revision 415 - sabre

{Textures] Reduced the brightness of the brown on the DD Rails, more changes to spec etc may come later.

# Revision 414 - sabre

[Textures] MARPAT & M81 Boonies.

# Revision 413 - sabre



# Revision 412 - gurdy

FROG M81 model setup

# Revision 411 - sabre



# Revision 410 - MistyRonin

Add Marsoc groups
Updated US stringtables

# Revision 409 - MistyRonin

Added USMC groups

# Revision 408 - reyhard

added keybinding configuration to option menu

# Revision 407 - MistyRonin

Added US Army groups for RG-33 
Updated US stringtable

# Revision 406 - Redphoenix

USF Stringtable.xml german translation update

# Revision 405 - MistyRonin

Add USMC RG-33 - Close T610

# Revision 404 - gurdy

update display names of humvees pending model upgrade

# Revision 403 - reyhard

added additional m4 to prevent inventory item spam (LOL)
rg33 gunner is now in same compartment as rest of cargo

# Revision 402 - MistyRonin

Update navy SARS to inherit MARSOC uniform.

# Revision 401 - reyhard

close T609 - added UH60 MEV wo/ ESSS
fixed M1 FEP alpha sorting errors

# Revision 400 - reyhard

added hint while switching Flashlight/Laser combo
added new stuff to virtualAmmoBox.sqf
fixed cargo view of rg33 w/ m2

# Revision 399 - gurdy

added FROGs in M81 and booniehat variants

# Revision 398 - Soul_Assassin

[Removed] Radio chatter from land vehicles

# Revision 397 - zeealex

quick fix of first person view issues on the FROG uniform

there may be weighting problems, I was in the middle of fixing the model weights when the report came in. 

# Revision 396 - Soul_Assassin

[Fixed] Some more russian translations

# Revision 395 - Soul_Assassin

[Fixed] Some russian translations

# Revision 394 - zeealex

Fixed flipped normals issue on FROG uniform 

# Revision 393 - reyhard

added proper inside crew anims for m1 tanks & m2 ifv
close T434 - added new m113 driver anim
added PIP to m113 driver station
close T449
close T555 - alpha issues sorted out
added simple bolt action script for m2010
configured rg33 turret

# Revision 392 - Soul_Assassin

[Added] Inventory icon for FROG

# Revision 391 - Soul_Assassin

Lowered radio chatter volume for US and choppers use jet chatter

# Revision 390 - reyhard

added jet volume macro

# Revision 389 - Redphoenix

slightly louder Jet radio chatter

# Revision 388 - Soul_Assassin

[Fixed] UCP IOTV vests capacity same as OCP (from 80 to 120)

# Revision 387 - Soul_Assassin

[Fixed] M552 has correct inventory icon - closes T601
[Added] Some accessory translations: @RedPhoenix and @MistyRonin please review languages

# Revision 386 - Soul_Assassin

[Fixed] Proper inventory icons for muzzle breaks - closes T598

# Revision 385 - Soul_Assassin

[Fixed] RG-33 M2 stringtable entry

# Revision 384 - gurdy

added RG-33 with test O-GPK and O-GPK base model

# Revision 383 - gurdy

M109A6 pintle removal

# Revision 382 - sabre

[Textures] Fixed small boot part on shirt uv island issue.

# Revision 381 - sabre

[Textures] Work In Progress. Version 1. Woodland and Desert FROG Uniforms. Edited to MICH Covered textures to closer match. Version 2 SPC texture.

# Revision 380 - reyhard

configured jet sounds

# Revision 379 - Redphoenix

2nd HOTFIX for rhsusf_radio ......

# Revision 378 - Redphoenix

HOTFIX - config-cpp for rhsusf_radio

# Revision 377 - Redphoenix

initial injection of more jet radio chatter

# Revision 376 - reyhard

changed required addons for various addons to prevent missing addon error on dedicated server

# Revision 375 - MistyRonin

Updated USAF gear as requested :P

# Revision 374 - MistyRonin

Updated USMC factions adding new helmets with headsets

# Revision 373 - Soul_Assassin

[Removed] Old stringtables

# Revision 373 - Soul_Assassin

[Removed] Old stringtables

# Revision 372 - Soul_Assassin

Trucks stringtable update

# Revision 371 - reyhard

added option menu

# Revision 370 - reyhard

fixed bowman cap missing textures

# Revision 369 - reyhard

fixed helmets errors
fixed missing , in virtualAmmoBox.sqf

# Revision 368 - zeealex

added new MICH helmets to the ammobox

# Revision 367 - zeealex

configured bare helmets + bowman headsets 

# Revision 366 - Soul_Assassin

[Fixed] Minimum arma version required bumped to 1.38. Mod version bumped to 0.3.6 - T571

# Revision 365 - Soul_Assassin

[Fixed] Hellfire lock on cone increased to +-30deg

# Revision 364 - MistyRonin

Add author to the doc dept. of the navy :P

# Revision 363 - Redphoenix

added custom jet pilot and normal pilot for US Air Force

# Revision 362 - MistyRonin

Fixed UCP Uniform

# Revision 361 - MistyRonin

Correction in weap_AI

# Revision 360 - MistyRonin

Updated SPC with "extra invisible space" and given it to all USMC personnel ( same with tan boonies for "light units" ).

# Revision 359 - zeealex

fixed wrong texture path in bowman_cap

# Revision 358 - Soul_Assassin

[Fixed] FROG uniform weighing and model improvements

# Revision 357 - Soul_Assassin

[Fixed] OD variant reduced sections

# Revision 356 - zeealex

added bare MICH helmet + Bowman variations and changed cap colour for bowman+cap

# Revision 355 - reyhard

added ability to cycle through different grenades types
fixed: some grenades short name too long
improved an/m14 inc. effect

# Revision 354 - Redphoenix

- added 7.62 M80A1EPR
- tweaked 7.62 M80
- checked ammo values = all good
close T307


# Revision 353 - Soul_Assassin

[Fixed] Elcan correctly zeroed - closes issue T540

# Revision 352 - Soul_Assassin

[Fixed] Russian translation for new roles

# Revision 351 - MistyRonin

Add new roles to MARSOC & FR
Fix Navy Corpsman mis-located
Update US Stringtable

# Revision 350 - Redphoenix

USF German Stringtable update (this time with Stringforge :P )

# Revision 349 - toadie2k

Rechamber sequeunces cleaned up, pending script

# Revision 348 - reyhard

close T567 - alpha sorting on eotech
fixed helmets missing textures error
added missing helmets to virtualAmmoBox.sqf
tweaked pip script 
tweaked acog glass

# Revision 347 - sabre

[Textures] EOTech retextured to suit RHS. Trademark removed.

# Revision 346 - sabre

[Textures} Surefire SOCOM breaks. Version 1.

# Revision 345 - MistyRonin

Add all the 40mm and hand grenades, and other ammo to US stringtable
Add HEMTT to US stringtable
Fully translate US stringtable to Spanish

# Revision 344 - Soul_Assassin

[Fixed] Removed phantom flashlight shadow from MICH helmets

# Revision 343 - Soul_Assassin

[Fixed] Minor stringtable fixes

# Revision 342 - zeealex

Fixed positioning of 82nd airborne and 10 Mtn Division patches so they don't clip as much

# Revision 341 - zeealex

fixed bowman.rvmat paths to point to the right location. 

# Revision 340 - Soul_Assassin

[Fixed] Stringtables fixed - Closes issue T521

# Revision 339 - MistyRonin

Add tracer color pictures for STANAG mags
Add USMC JFO

# Revision 338 - reyhard

added steering wheel anim for fmtvs
added lodnoshadow=1 param to proxies of fmtv & hemtt, added shadows to fmtvs covers

# Revision 337 - reyhard

acog reticle hotfix

# Revision 336 - reyhard

close T563 - nerfed shotgun
fixed headgear hidden selections
improved stability of pip optic
added test 3d elcan


# Revision 335 - MistyRonin

USMC config ( add new muzzle breaks )

# Revision 334 - gurdy

ucp patch color fixes


# Revision 333 - reyhard

improved 3d acog look
3d acog supports zeus controlled units 

# Revision 332 - reyhard

close T554 - potential fix for strange m14 reload

# Revision 331 - MistyRonin

Corrected & updated USMC configs and weapAI ( used new Eotech and new versions of the helmets ).

# Revision 330 - gurdy

fixed M1A1 OD rvmat


# Revision 329 - zeealex

added MICH helmets with Bowman headsets

# Revision 328 - gurdy

added M1A1FEP in OD

# Revision 327 - reyhard

added test 3d acog optic using pip
added driver interior (visors not working now)
fixed eotech

# Revision 326 - gurdy

initial (non-functioning) commit of Eotech 552

# Revision 325 - reyhard

added new uniforms to virtualAmmoBox.sqf

# Revision 324 - reyhard

added new weapons & acc to virtualAmmoBox.sqf
configured alternate muzzle fire
added missing memory lod to new muzzle brakes 
removed textures from shadow lod 
corrected positioning of muzzle slot on m16
corrected positioning of muzzle brake on m4
removed all p:\ drive references
added missing "muzzle brake" bone

# Revision 323 - MistyRonin

Configured US 82nd, 101st and 10th Div uniforms

# Revision 322 - gurdy

fixed typo

# Revision 321 - gurdy

muzzle brake fixes


# Revision 320 - gurdy

fucking stringtable

# Revision 319 - gurdy

added more patched uniforms

# Revision 318 - zeealex

fixed broken texture paths

# Revision 317 - MistyRonin

Fast fix  AR15, should build but may CTD in-game.

# Revision 316 - gurdy

added USMC AR-15s

# Revision 315 - MistyRonin

Update USMC configs & stringtable ( adding certain MOS names, various tweaks and new additions to the FR )

# Revision 314 - Redphoenix

- fixed weird icon behavior (THANKS REYHARD)

# Revision 313 - reyhard

replaced radar with compass on hmmwvies

# Revision 312 - MistyRonin

Add USMC drivers & crew members
Update USMC config
Changed UAV backpack design

# Revision 311 - reyhard

fixed sight folding

# Revision 310 - reyhard

added joint rail support

# Revision 309 - MistyRonin

Corrected Abrams AT4 count and changed M6's Javelins for Stingers for consistency. 

# Revision 308 - MistyRonin

Updated US vehicles loadouts ( Please test and check them )

# Revision 307 - reyhard

changed rando radio chatter to playSound instead of vehicle chat as temp solution
configured frog uniforms & SPC vest
added shadow lod to SPC vest
tweaked BIS acc compatibility
added new uniforms & vest to virtualammobox

# Revision 306 - MistyRonin

Updated USMC configs
Updated String-table
Corrected US clean vests
Modified US common vests cargo capacities

# Revision 305 - MistyRonin

Update US stringtable

# Revision 304 - MistyRonin

Correcting broken USMC D uniform macro

# Revision 303 - MistyRonin

Correcting US Vest supply values to match the vanilla & Russian counterparts 

# Revision 302 - gurdy

added new SOCOM and Navy logos

# Revision 301 - gurdy

committed marine stuff

# Revision 300 - MistyRonin

Adding USMC config files

# Revision 299 - Soul_Assassin

[Fixed] M68 better fits the rails - Closes issue T499 

# Revision 298 - MistyRonin

Adding author info. Close 514

# Revision 297 - MistyRonin

Updated US flares to add intensity values and change of classnames. 

# Revision 296 - Redphoenix

FINAL Lerca texture update.....

# Revision 295 - MistyRonin

Improved 40mm flares ( duration and brightness ) Close T524

# Revision 294 - zeealex

Added entry for SPC in model config file

# Revision 293 - zeealex

-Reweighted IOT Vests* (T501) may need tweaks based on test results 
-initial weights of FROG and base SPC (T506)**

*Issues on the left shoulder of the medic vest are known.
** FROG and SPC aren't configured in RHSUSF folder, but were tested separately and both are working with no major issues.



# Revision 292 - laxemann

Removed: Old m134 sounds
Added: New M134 sounds

# Revision 291 - gurdy

fixed MICHs again


# Revision 290 - gurdy

readded MICH variants

# Revision 289 - Redphoenix

Lerca Texture Fix
Deleted unused texture files

# Revision 288 - reyhard

fixed backpack rvmat error

# Revision 287 - reyhard

increased penetrator timeToLive
added basic radio chatter

# Revision 286 - Redphoenix

fix for rrhs?

# Revision 285 - Redphoenix

FIX - deleted redundant config parameter "envelope" to prevent building crash

# Revision 284 - reyhard

tweaked c130 params

# Revision 283 - MistyRonin

Optimize, fix and update US troop configs

# Revision 282 - MistyRonin

Optimized weapons config (moved AI weapons to an additional file to avoid a crowded config)
Add additional AI weapons

# Revision 281 - sabre

Added fake trademarks to ACOG as it was breaking some peoples immersions.

# Revision 280 - MistyRonin

String-table update

# Revision 279 - sabre

Eagle AIII Coyote ingame value's edit. rvmat shine removed.

# Revision 278 - MistyRonin

Few more tweaks to US Weapons config.

# Revision 277 - Soul_Assassin

[Fixed] Filled missing strings with values

# Revision 276 - reyhard

cannon AI dispersion tweak

# Revision 275 - Redphoenix

Interim HMMWV proxy update (not final)

# Revision 274 - reyhard

tweaked behaviour of zeus controled M1 FCS

# Revision 273 - MistyRonin

M16A4 (bipod): sound provisional ( and non-elegant ) fix. 

# Revision 272 - MistyRonin

Standardize US troops config files ( creating a file for each faction as in the Russian side ). 

# Revision 271 - MistyRonin

Add ammo to the RG-33
Muzzle suppressor Speed corrected in M2010 ( In fact instead of reduce the speed, it should had increase it slightly )


# Revision 270 - Soul_Assassin

[Updated] Moved all stringtables to xml

# Revision 269 - Redphoenix

Packaging Hotfix (missing ; )

# Revision 268 - Redphoenix

Injection of single ammo box cal50
Leica RF texture update (both versions)

# Revision 267 - reyhard

rg33:
fixed "cannot load rvmat" error
tweaked interior
added camo selections in cargo lod
tweaked elcan zeroing

# Revision 266 - reyhard

updated main model.cfg! perform update in main dir!
tweaked rg33 materials

# Revision 265 - MistyRonin

Tweaked Ballistic Glasses' "Randomizer"

# Revision 264 - reyhard

close T481 - added clan selection on US uniform

# Revision 263 - reyhard

close T484 - added landContact lod for m109
added new groups - hmmwv & fmtv
tweaked anpvs15 (green glow)
fixed FMTV & HEMMT cfgPatches (visibility in zeus)
added random gogles distribution

# Revision 262 - MistyRonin

Added Fire Support Officer and Joint Fires Observer to the US Army. 

# Revision 261 - MistyRonin

Assigned AN/PVQ-31A to US Rifles

# Revision 260 - gurdy

added AN/PVQ-31A config

# Revision 259 - reyhard

close T486 - added lockWhenDriverOut param for bradleys
close T478 - tweaked m2a3 commander turret elevation
fixed gau8 spinning anim

# Revision 258 - reyhard

error sound ported

# Revision 257 - MistyRonin

Add RQ11 operator and update 109's loadout with modern grenades

# Revision 256 - sabre

[Textures] Removed strap shadow so texture can be used on two versions.

# Revision 255 - MistyRonin

Update M1A1 transport load

# Revision 254 - MistyRonin

Standardizing US helmets' armor values.

# Revision 253 - MistyRonin

Updated US infantry armor values to absolute. 

# Revision 252 - MistyRonin

Updating US helmets and vest to have an absolute armor value so it can be displayed properly in the Virtual Arsenal

# Revision 251 - Soul_Assassin

[Fixed] Missing ESS from various helmet lods

# Revision 250 - zeealex

Initial Injection of Bowman Elite II Headset (T455)

# Revision 249 - MistyRonin

Removing Star Wars equipment from AH64 and adding contemporary one :P Close T485

# Revision 248 - reyhard

code cleanup
added support for zeus controled units
changed uav classname
added uaz classname to virtualammobox
changed author string name

# Revision 247 - Redphoenix

cleaned Stringtable.csv and relinked name parameters in several files to STR_RHSUSF_XXX

# Revision 246 - gurdy

added MICH textures and versions

# Revision 245 - Redphoenix

Abrams PhysX Update (new engine parameters, new gearbox setup ratios)
close T479

# Revision 244 - Redphoenix

added rhsusf_a2port_car and rhsusf_c_a2port_car for uaz and ural animation
Known bug:
Warning Message: Cannot load texture ca\weapons\data\fim92stinger_co.paa
fixed: FMTV missing "" in several arrays

# Revision 243 - Redphoenix

fixed Tank Exhaust particles.hpp

# Revision 242 - reyhard

uav:
cleaned up .rpt spam (unknown attribute shadowColor)
fixed pop up error 'no entry config.bin.''.'

# Revision 241 - Redphoenix

added particles.hpp and rhs_ejector_30mm.sqf to addons/rhsusf_c_heavyweapons/ejectors

# Revision 240 - Redphoenix

First Batch of changes to seperate USAF from AFRF
See T76 for changes

# Revision 239 - reyhard

some more uav debuging

# Revision 238 - reyhard

configured rq11 (ctd because of missing userconfig.hpp)
tweaked m113 hitpoints
tweaked rotex shadows
added ability to take control for ah64 gunner
configured eagle III hidden selections

# Revision 237 - Bakerman

T306: Edited camera shake for AH-64

# Revision 236 - Redphoenix

FMTV PhysX Update

# Revision 235 - Redphoenix

Tweaked position of muzzle proxies close T468

# Revision 234 - sabre

Added Coyote Eagle AII pack. Will test colour after it's in properly.

# Revision 233 - Redphoenix

Replaced Rotex 5 (Grey) with right texture

# Revision 232 - Redphoenix

Initial Injection of Rotex5 Silencer (Tan + Grey)

# Revision 231 - Soul_Assassin

Added MICH helmets to virtualAmmoBox.sqf

# Revision 230 - reyhard

added new AH-64 armanent variants
enabled C130
tweaked destruction materials for m113
tweaked M113 hitpoints & FG

# Revision 229 - toadie2k

M2010 Prone Reload corrected, should be fine ingame now

# Revision 228 - Redphoenix

Lerca LOD Update
Added AS map for Lerca

# Revision 227 - MistyRonin

AH-64 Recovering OIF/OEF gray painting.

# Revision 226 - gurdy

added MICH desert models and material


# Revision 225 - gurdy

fixes for MICH d variants

# Revision 224 - MistyRonin

Tweaked M4/M4A1 mass values to uniform them. 

# Revision 223 - reyhard

added headlights & brake lights to FMTVs & Bradleys
added wheel hitpoints for FMTV & HEMTTs
added destruction textures for FMTVs
added driver anim for HEMTTs
tweaked FMTVs firegeometry
fixed M590 penetration materials
fixed HEMTT materials
configured HEMTT CPK variants
added some missing weapon icons
added selection for PiP in A10 cockpit
close T447 - fixed alpha chanels on Bradley
close T448 - tweaked insignia selection
tweaked Bradley Busk III armored glass in firegeometry, so it protects commander actually

# Revision 222 - Redphoenix

final fix for T446

# Revision 221 - Redphoenix

workaround for missing Lerca TAN Inventory Logo

# Revision 220 - gurdy

add slingload capability to LMTVs

# Revision 219 - gurdy

hidden sel fixes for MICHs

# Revision 218 - gurdy

added USMC Michs (still some issues with hidden selections)

# Revision 217 - gurdy

readded RG-33 for fun

# Revision 216 - reyhard

initial FMTV configuration

# Revision 215 - MistyRonin

Adding fancy rangefinders to not so fancy US snipers.

# Revision 214 - reyhard

LRF tweaks

# Revision 213 - Redphoenix

Updated M109 physx_config.hpp
close T264

# Revision 212 - reyhard

muzzle flash fixes for uh60 & ch47
shadow, res lod & animation fixes for m4 bII & mk18
added LRF gui & reticle

# Revision 211 - Redphoenix

added Lerca 1200 TAN
New Textures for Lerca 

# Revision 212 - reyhard

muzzle flash fixes for uh60 & ch47
shadow, res lod & animation fixes for m4 bII & mk18
added LRF gui & reticle

# Revision 211 - Redphoenix

added Lerca 1200 TAN
New Textures for Lerca 

# Revision 210 - Redphoenix

added Lerca LAF 1200 Rangemaster 

# Revision 209 - reyhard

changed classname of rhs_m4_m320 into rhs_weap_m4_m320, previous weapons is still avaiable with scope=1
changed M136 postioning

# Revision 208 - Redphoenix

added version of grenades for throw animation (without clip and safety ring)

# Revision 207 - gurdy

reweighted US combat uniform by Alex

# Revision 206 - MistyRonin

Adding M200 rounds for the M249 too. 

# Revision 205 - MistyRonin

Adding children-proof M200A1 5.56mm bullets

# Revision 204 - toadie2k

M2010 Reload aniamtions added. Prone reload is functional placeholder.

# Revision 203 - MistyRonin

Fast fix to avoid building crash. 

# Revision 202 - gurdy

delete bases


# Revision 201 - gurdy

added LMTV models


# Revision 200 - MistyRonin

Tweaking Bradleys

# Revision 199 - reyhard

fixed m14 IK error in rpt
fixed visibility of weapon bags (m2/mk19)
added weapon bags to virtualAmmoBox.sqf
added ability to fold at4 peephole (working on 1.38)

# Revision 198 - reyhard

close T422 - added initElev=5 to  M1 tanks
inertia & mass tweaking
added Mk18 & block II to ammbox
fixed opscore shadows (named properities cleanup_

# Revision 197 - reyhard

fixed vest capacity

# Revision 196 - gurdy

fixed acc colors

# Revision 195 - gurdy

MK18 fixes

# Revision 194 - gurdy

added Mk 18s and M4 Block IIs

# Revision 193 - MistyRonin

Tweaking and updating ammo loadout

# Revision 192 - MistyRonin

Add ballistic glasses to ammo box 

# Revision 191 - gurdy

added M2 boxes and M2 MG (for looks)

# Revision 190 - reyhard

added pip panel for AH64 gunner

# Revision 189 - MistyRonin

Add ballistic glasses to US soldiers. 

# Revision 188 - gurdy

fix ballistic glasses

# Revision 187 - MistyRonin

Adding 3d models for the fancy glasses ( that I forgot to upload )

# Revision 186 - reyhard

fixed anpvs 15 positioning
configured grenades

# Revision 185 - MistyRonin

Adding new smoke grenades to the soldiers loadout

# Revision 184 - gurdy

new stringtable, lod, and tex fixes

# Revision 183 - MistyRonin

Injecting Fancy protective glasses ( still require some tweaks tho )

# Revision 182 - MistyRonin

M2 Bradley TOW tweaks

# Revision 181 - reyhard

fixed m1a1 tusk leaning
fixed some rpt errors

# Revision 180 - Redphoenix

added Grenade set for US Forces
added grenades to Virtual Ammobox
close T365

# Revision 179 - reyhard

sorted mirrors on hmmwvies
changed M590 name to be consistent with rest of weapons
fixed m4 with afg shadows
added hand anims for M4 with AFG & m590
added shadows to m590

# Revision 178 - reyhard

fixed russian translations

# Revision 179 - reyhard

sorted mirrors on hmmwvies
changed M590 name to be consistent with rest of weapons
fixed m4 with afg shadows
added hand anims for M4 with AFG & m590
added shadows to m590

# Revision 178 - reyhard

fixed russian translations

# Revision 177 - reyhard

ULTIMATE HMMWVIE FIX

# Revision 176 - reyhard

named properities cleanup

# Revision 175 - reyhard

tweaked at4 zeroing
removed debug info from peephole script
removed autocenter=0 param from bradleys and m1a1 geometry - look at issue T328

# Revision 174 - reyhard

added ability to fold/unfold at4 peephole (won't work completly till a3 1.37 version) - use / (optics mode)
added deletion of ai disposed AT launchers after 300s

# Revision 173 - MistyRonin

Added rifleman with M590

# Revision 172 - reyhard

added new fire modes to bradley autocannon
damage selections fixes for hmmwvies

# Revision 171 - reyhard

increased flashlight power
added rudder pedal anims to ah64 & uh60
improved ah64 interior

# Revision 170 - reyhard

light hotfixes

# Revision 169 - reyhard

reduced cost for javelin missile
changed lod numbering for weapons & accesories

# Revision 175 - reyhard

tweaked at4 zeroing
removed debug info from peephole script
removed autocenter=0 param from bradleys and m1a1 geometry - look at issue T328

# Revision 174 - reyhard

added ability to fold/unfold at4 peephole (won't work completly till a3 1.37 version) - use / (optics mode)
added deletion of ai disposed AT launchers after 300s

# Revision 173 - MistyRonin

Added rifleman with M590

# Revision 172 - reyhard

added new fire modes to bradley autocannon
damage selections fixes for hmmwvies

# Revision 171 - reyhard

increased flashlight power
added rudder pedal anims to ah64 & uh60
improved ah64 interior

# Revision 170 - reyhard

light hotfixes

# Revision 169 - reyhard

reduced cost for javelin missile
changed lod numbering for weapons & accesories

# Revision 173 - MistyRonin

Added rifleman with M590

# Revision 172 - reyhard

added new fire modes to bradley autocannon
damage selections fixes for hmmwvies

# Revision 171 - reyhard

increased flashlight power
added rudder pedal anims to ah64 & uh60
improved ah64 interior

# Revision 170 - reyhard

light hotfixes

# Revision 169 - reyhard

reduced cost for javelin missile
changed lod numbering for weapons & accesories

# Revision 171 - reyhard

increased flashlight power
added rudder pedal anims to ah64 & uh60
improved ah64 interior

# Revision 170 - reyhard

light hotfixes

# Revision 169 - reyhard

reduced cost for javelin missile
changed lod numbering for weapons & accesories

# Revision 168 - sabre

[Textures] M590A1 version 1

# Revision 167 - MistyRonin

M2010 increased zeroing values.

# Revision 166 - reyhard

m113 & hmmwvies use hidden selection textures now

# Revision 165 - RedPhoenix

Fixed FMTVs and gave them proper names/factions/classes
PhysX Dataset update 
close T359

# Revision 164 - MistyRonin

Removed Radar for the M6 too.

# Revision 163 - MistyRonin

Remove Bradley's Radar ( but M6 ), close T358

# Revision 162 - reyhard

fmtv fixes

# Revision 161 - MistyRonin

Temporary patch to allow Jenkins to create the US version :)

# Revision 160 - reyhard

added new m2 ammo
reduced iotv (without pouches) capacity 
added separate magazines & picture to m14ebr
tweaked 7.62 ammo + added some new mags
reduced cost ammo for stinger missile (ai should use it now more often)
configured m320 sounds on m4


# Revision 159 - MistyRonin

M1A1FEP Removed invisible Gunner's M2. Close T356

# Revision 158 - MistyRonin

Removing invisible M2 from M1A2SEPv1 ( no tusk ) gunner, close T353

# Revision 157 - MistyRonin

Adding 200 round mags for the M249, close T352

# Revision 156 - gurdy

M4 stock fixes


# Revision 155 - gurdy

injected M1083A1P2 models

# Revision 154 - reyhard

tweaked ammo belt anim on m113
hotfixed lead calculations for M1 tanks

# Revision 153 - reyhard

removed debug info from balistic computer gui
fixed missing muzzle flash in desert m113 gunner view
close T330 - added to M1A1FEP same gunner view as in M1a2SEP
close T334 & T291 - fixed M6A2 stinger lock-on
improved M1A2 & M1A1 lower hull armor
reduced turret & gun armor on M1 tanks

# Revision 152 - Soul_Assassin

Added M590 to crate

# Revision 151 - gurdy

fixed again


# Revision 150 - gurdy

M590 fixes


# Revision 149 - gurdy

injected M590A1

# Revision 148 - MistyRonin

Add additional STANAG mag without any tracer; Remove tracer rounds from M2010 mag; close T332

# Revision 147 - reyhard

fixed m113 wobbling at ~60km/h
fixed slingload point for uh60
fixed rtd_center for ch47 (separated slingload & rtd_center vertices)


# Revision 146 - Soul_Assassin

- first commit of 0.4
- hemtt reenabled in editor

# Revision 145 - Soul_Assassin

-  ch47 slingloading fixed

# Revision 144 - Soul_Assassin

- fixed M2 minitripod pose

# Revision 143 - reyhard

close T326 - decreased M4 dispersion

# Revision 142 - reyhard

locked Abrams M2 turret (AI not getting in) + readded getin memory points (no more injuries during while geting out from m2 turret)

# Revision 141 - reyhard

improved belt anims on mk19 & M2

# Revision 140 - reyhard

hotfixed anpvs14 green glow selection

# Revision 139 - reyhard

fixed strange M1A2SEP shadows

# Revision 138 - reyhard

close T151 - added muzzleflash, tweaked airFriction, hit damage, reload time & accuracy

# Revision 137 - laxemann

Added: New sounds for the MK19 GMG
Added: New sounds for the M134 Minigun

# Revision 136 - reyhard

fixed armed hmmwvies damageHide selections

# Revision 135 - reyhard

tweaked ch47 suspension
close T321 - added open/close ramp action to FFV positions

# Revision 134 - reyhard

rtd center tweak
removed tusk m2 from m1a2sep desert version

# Revision 133 - Soul_Assassin

Further FDM work

# Revision 132 - reyhard

close T323 - changed M19 trigger
close T322 - reduced explosion shielding on bradley tracks

# Revision 131 - Soul_Assassin

Closes issue T148 - H58 sight calibrated
Magazine on the M2010 changes correctly.

# Revision 130 - Soul_Assassin

Closes issue T319 - Mildot and sighting with 3.5-10x Leo Mk4 is now accurate

# Revision 129 - MistyRonin

Removed M320 from 1st Cav SL & TL, close T316

# Revision 128 - reyhard

hotfixed desert m1a2v1 gunner m2 proxies

# Revision 127 - reyhard

hotfixed missing string in group config

# Revision 126 - reyhard

removed zoom from driver triplex
close T32 - fixed M2 clipping - animations are not possible right now
close T33 - new M2 turret handling (might be useful for t72 NSVTs)
fixed turned out commander of M1A2 had thermal camera & CITV zooms 
close T243 - reduced loader pintle moving angles
close T139 - fixed commander MG to fire when inside for M1A2
close T310 - M113 Tracks resistance
added CCP balistic computer to M1A1 (M1A2 use it temporarily too)
added new view modes & zooms for CITV
added new reticles for M1A2 & proper zooming levels


# Revision 125 - Soul_Assassin

arma 2 vehicle thermal fixes

# Revision 124 - reyhard

tweaked disposable script (ai bug - still need testing if it's working on dedidcated server)
another try on exploding a10 on dedicated server
added res lods for nv gogles
tweaked m68 cco res lods
fixed m1 abrams m2 ammo belt clipping
tweaked hatch anims on m1a1
added initial lead calculations for m1 tanks
added turn out ability for m1 tanks drivers

# Revision 123 - reyhard

tweaked M4/M16 + anpeq/surefire combo resolution lods
added different method for calling disposable script - better cross compatibility
close T300 - removed ability to mount supressor on m249
close T301 - added new zeroings

# Revision 122 - reyhard

reduced m84 flashbang damage
lowered crewExplosionProtection for hmmwvies with tarp doors
added crewVulnerable = 1; to hmmwvies - ai should engage MG & FFV gunners 
some tweaks to mk19 model

# Revision 121 - Bakerman

T304 - Added missing sqf files

# Revision 120 - Bakerman

Closes issue T304 - Added cannon fire camera shake for US air vehicles.

# Revision 119 - reyhard



# Revision 118 - reyhard

close T38 - added new rear sight + zeroings to M136
close T169 -added M1025 with Mk19 GL
close T283 - configured AN/peq15/surfire combo - light/laser change binded to next CM key (default ctrl+c)
added new M136 versions - HP & HEAT
fixed M1025 trunk action
increased a little bit IOTV protection
added pilot nameSound to pilots
added ammoCoef to AT soldiers
added static weapons - mk19 & M2
added patchless infantry model with insignia support
improved M68 CCO red dot visibility during night

# Revision 117 - gurdy

decal fixes

# Revision 116 - reyhard

increased liftForceCoef so it's possible to lift m113 with ch47

# Revision 115 - reyhard

added ability to slingload m113
changed m16 inheritance so sounds get replaced correctly (and it seems to be more logic)
added different prone recoil for weapons with bipod
cleaned up accessory config - removed pg up/down zeroing from acogs & elcan

# Revision 114 - reyhard

hmmwv packer ctd fix test 

# Revision 113 - reyhard

added door anims to UH60
added FFV to UH60 & CH47
fixed iotv view pilot lod camo selection
NVG should be visible in hmmwvies

# Revision 112 - MistyRonin

Add Riflemen m16 close T295

# Revision 111 - laxemann

Fixed: Silenced sounds for the M2010 now work

# Revision 110 - laxemann

Added: M2010 silenced sounds
Changed: Tweaked M2010 sounds

# Revision 109 - reyhard

added FFV to HMMWVies (there are no antiretardation zones - need feedback on that)
added HMMWV M1025 w/ M2
some tweaks to HMMWVie shadows & models 
readded MANW removed weapons in virtualAmmoBox.sqf
cleaned up backpack config
removed M2 texture (as it's present in a3 itself)

# Revision 108 - gurdy

fixed US army UCP loadouts

# Revision 107 - gurdy

name rollbacks 

# Revision 106 - MistyRonin

Add AR backpack with ammo, close T294

# Revision 105 - MistyRonin

Add MG soldiers a backpack to carry more ammo. close T293

# Revision 104 - MistyRonin

US c_troops correction

# Revision 103 - laxemann

Added: New silenced sounds for AK family

# Revision 102 - MistyRonin

Add AR Assistant ( M249 ), close T289

# Revision 101 - gurdy

fixed afg pilot lod

# Revision 100 - sabre

ACOG overly glossy fix rvmat

# Revision 99 - gurdy

fixed name of m4a1 afg

# Revision 98 - sabre

M4, M4A1 & M16A4 Colt and FNHUSA Trademarks restored.
ACOG Fixed over glossy look.
KAC Rail Cover brightness increased.

# Revision 97 - gurdy

rail fixed and laser placement fix

# Revision 96 - gurdy

added KAC RC's on M4s and M16s

# Revision 95 - gurdy

added KAC rail covers

# Revision 94 - sabre

Leupold Mark 4 6.5–20×50mm ER/T M5 Textures 1st version.

# Revision 93 - gurdy

reverted pre-manw stuff and added new M4 barrels

# Revision 92 - Soul_Assassin

- removed hemtts

# Revision 91 - reyhard

corrected m830 speed
added m1069 round to fcs + not very accurate calculations for coax MG

# Revision 90 - Stagler

T197
-Added US assistant MG pack UCP + OCP
-Added US assisntant MG pack to AMG units.


# Revision 89 - Stagler

https://dev.rhsmods.org/T197

- Created M4a1 with scopes configs
- Added M4a1 to all OCP troops.
- Added extra magazines to all us troops
- Added smokeshells to all us troops

# Revision 88 - RedPhoenix

M829A3 fix- raised ammocount from 25 to 30

# Revision 87 - RedPhoenix

close T268
close T270

# Revision 86 - reyhard

moved lo poly lod to edit lod on m2 bradley
some experiments with m2 suspension (M2A2 ODS wo/ busk variant)
temporary MANW weapon removal from virtualAmmoBox

# Revision 85 - gurdy

replaced gloved hands with bare hands 

# Revision 84 - laxemann

Changed: Tweaked the M16 sounds (more treble)

# Revision 83 - Soul_Assassin

closes ticket T247 - MANW related wepons fixes

# Revision 82 - laxemann

Added: New reload sounds for the AR-15 family
Added: New Firemod switch sounds for the AR-15 family

# Revision 81 - reyhard

added m67 grenade to throw muzzle
added m67 to virtualAmmoBox.sqf
changed m67 short name

# Revision 80 - gurdy

fix new leupold model

# Revision 79 - RedPhoenix

Bradley section instead of single Bradley
close issue T253

# Revision 78 - RedPhoenix

cfgSounds.hpp for Bradley
Physx Update for Bradley

# Revision 77 - gurdy

added M67 grenade and gave NVGs to troops

# Revision 76 - gurdy

bradley texture fixes and woodland setup

# Revision 75 - gurdy

brighten black platoon markers

# Revision 74 - gurdy

fixed USMC M1A1 name 

# Revision 73 - gurdy

added M2010 scope 
fixed carryhandle AR-15 proxies
added refined weapon/attachment compatability
added AR-15 variants

# Revision 72 - RedPhoenix

PhysX Update for Bradleys (propper engine config)
High sprungMass - possible fix for braking when driving over a bump

# Revision 71 - reyhard

close issue T221 - M109: Right side track teeth do not animate.
close issue T235 - Config AN/PVS-14 and AN/PVS-15
close issue T159 - HMWVV driver sits very high
close issue T134 - Add AGM Javelin TopDown mode
fixed HMMWV chassis shadow
added shadow res lod for HMWVVie
fixed M2A3 Busk III antena shadows
fixed missing driveOnComponents message for m109

# Revision 70 - RedPhoenix

fixed tracer mags
added tracer every 4 rounds to M249 mag
fixed silencer for M4/M16 family (now uses 5.56 silencer instead of 6.5)
added 5.56 silencer to RHSUSF virtual ammobox

# Revision 69 - toadie2k

Added reload sequences to M4, M16 Rifles. 

# Revision 68 - Soul_Assassin

fixed all M2 cog

# Revision 67 - Soul_Assassin

Bradley cog tweaks for testing

# Revision 66 - Soul_Assassin

Closes issue T31 - deforming strap on iotv. More consistency in lod transitions on various vests.

# Revision 65 - gurdy

added AN/PVS14 and 15

# Revision 64 - RedPhoenix

raised maxBrakeTorque

# Revision 63 - RedPhoenix

fixed unresponsable suspension on both HMMWVs

# Revision 62 - reyhard

added minTotalDamageTreshold to M113
added some missing weapons to virtualAmmoBox.sqf
close issue T223 fixed m1 damgeHide selections

# Revision 61 - sabre

Acc texture update 1

# Revision 60 - sabre

M2010 Texture size increased due to poor UV for FP.

# Revision 59 - Soul_Assassin

Closes issue T103 - M109A6 thermals fixed

# Revision 58 - sabre

Moved Surefire M952v position forward.

# Revision 57 - sabre

M4 Fixed texture path error. Added version 1 magpul ctr and afg textures.

# Revision 56 - gurdy

m4 accessory model fixes


# Revision 55 - Stagler

- Changed Ultra low poly woodland texture to not be lime green.

# Revision 54 - reyhard

set explosionShielding to 0 for hithull
added new m2 cfg for m113 (because of sounds)
reduced javelin explosion damage
changed LOD numbering for PEQ15

# Revision 53 - sabre

M2010 Texture update to include AAC muzzle brake.

# Revision 52 - laxemann

Changed: New 120mm sounds 

# Revision 51 - laxemann

Added: Sounds for the M256
Added: Sounds for the M2
Added: Sounds for the M230
Added: Sounds for the M242

# Revision 50 - reyhard

changed some more "" into ' in c130 & ch47 UserActions
close issue T71 added Coax muzzle flash to Bradleys
fixed poklop_commander inheritance in m2 skeleton
fixed TOW selection in second res lod in M2A2
fixed rhsusf_m113d_usarmy: Recoil - unknown animation source recoil_source rpt error
fixed unknown animation source zaslehROT_HMG2 rpt error on M1a1
close issue T200 - added new lights config for m113
fixed zbytek selection in res lods of m113

# Revision 49 - gurdy

added M4 variants and accessories

# Revision 48 - gurdy

fixed proxies on M2010

# Revision 47 - reyhard

changed some more "" into ' in hmmwvie user actions
close issue T192 - Abrams tracks turning the wrong way

# Revision 46 - reyhard

probably fixed crouch bug with aia tp

# Revision 45 - RedPhoenix

fixes critical error occured in rUSAFDEV42

# Revision 44 - gurdy

added test version of fixed interior

# Revision 43 - gurdy

add m2010 to ammo box, config silencer

# Revision 42 - gurdy

added updated M2010 and reenabled

# Revision 41 - reyhard

fixed issue T184 (TOW locking)
fixed missing ; errors in m1 config
changed mass of M19 mine

# Revision 40 - gurdy

added more CIP panels and added M1A1HC WD

# Revision 39 - reyhard

fixed wheel reference not initialized rpt errors on m113

# Revision 38 - reyhard

fixed m113 gunner hand anims
removed decal related rpt spam

# Revision 37 - reyhard

fixed m4a1 full auto sound

# Revision 36 - sabre

[Optics] M145 Textures, Shine reduced, company and model name returned.

# Revision 35 - reyhard

fixed m136 sound as "safemode" is not used anymore

# Revision 34 - reyhard

tweaked m1a1 EH
fixd proxy on M1a1 HC
tweaked launcher pen values
fixed missing legs in rhsusf soldier model (forgot to copy paste that, ha)

# Revision 33 - gurdy

M977 texture progress


# Revision 32 - gurdy

added CH-47 textures by CptDavo

# Revision 31 - gurdy

add HEMTTs with armored cabs

# Revision 30 - Soul_Assassin

all pbos now require 1.32 minimum

# Revision 29 - reyhard

fixes for pboproject

# Revision 28 - RedPhoenix

- deleting redundant config.bin

# Revision 27 - RedPhoenix

- bouyancy fixes 

# Revision 26 - reyhard

tweaked hemtt Center of Mass (was leaning slighty left)
added config.cpp to models

# Revision 25 - RedPhoenix

- new PhysX dataset for HEMTT A2

# Revision 24 - RedPhoenix

- further M113A3 PhysX adjustments

# Revision 23 - reyhard

hotfixed hemmt weight

# Revision 22 - reyhard

fixed acog missing uvset in diagnostic exe
tweaks to geometry, shadows & suspension of hemmt
added RedPhoenix physx config

# Revision 21 - gurdy

added HEMTT fuel


# Revision 20 - Soul_Assassin

removed temp folder

# Revision 19 - reyhard

fixed hmmwv passanger mirror view
added very early hemtt configuration
fixed medic iotv variant shadows in distant lods
fixed t119 - m109 pboprefix

# Revision 18 - RedPhoenix

- further tweaking of Abrams PhysX
- deleting redundant config.bin in addons/rhsusf_c_m113/ 

# Revision 17 - RedPhoenix

- fixed maxBrakeTorque on M113A3
- raised tankTurnForce on M1A1

# Revision 16 - RedPhoenix

- fixed typo for M1A1 enginePower

# Revision 15 - RedPhoenix

- new PhysX dataset for M1A1 Abrams

# Revision 14 - reyhard

added res lods for m1a1
tweaked res lods for m1a2
improved m68 cco hex texture
fixed T69 - added rocket motor fire to agm-65

# Revision 13 - RedPhoenix

- new Physx Dataset for M113A3

# Revision 12 - reyhard

added numberPhysicalWheels param to various vehicles
tweaked commander HMG script
tweaked M113 res lods (iff panel visible in every res lod)
tweaked m1a2 tusk hitpoints
completed res lods for m1a2
some res lods for m1a1
tweaked m136 power

# Revision 11 - reyhard

fixed sound paths after pboprefix change

# Revision 10 - gurdy

M977A2 Initial injection

# Revision 9 - gurdy

added pboprefix to rhsusfsounds

# Revision 8 - laxemann

M4 and M16 now have different sounds
Added: New sounds for the M16
Changed: Old M16 sounds are now the "new" M4 sounds

# Revision 7 - laxemann



# Revision 6 - reyhard

res lods for m1a2sep desert versions

# Revision 5 - reyhard

fixed muzzlepos error in rpt for javelin & stinger
tweaked vest shadows (removed lod no shadow, tweaked shadow lod 10)
added driveoncomponents for m113
added resolution lods for US weapons & accessories
added resolution lods for us soldier model
tweaked us soldier view pilot view (copy past of pockets from res lod 0)

# Revision 4 - sabre

US Army Infantry - Uniform 'shine' removed.

# Revision 3 - reyhard

replaced weapon modes with isSelected on at launchers
fixed stinger missile still inside tube after launch
added sight folding on at4
changed bradley he-t tracer
reduced lag in gunner view while firing bradley autocannon
added slingload max cargo mass params to ch47 & uh60

# Revision 2 - reyhard

updated webpage in mod.cpp
fixed & improved heli hitpoints
added slingload ability to ch47 & uh60
removed radar from bradley
fixed maxFordingDepth for M1, M2, M109 & M113
fixed m113 bottom textures
added res lods to m113
improved m113 fire geometry
improved m113 gunner view
added new muzzle flash to m113a3
fixed m1 hitpoints (added track hitpoints, tweaked turret hitpoints)
added slingload ability to m1025
fixed elcan mipmaps
changed m249 magazine mass
