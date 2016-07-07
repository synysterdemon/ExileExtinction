/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	> <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Tomato.
*/
	
/*
	Item Groups
*/

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> Food
3, Exile_Item_CookingPot
5, Exile_Item_CanOpener
5, Exile_Item_Matches
3, Exile_Item_EMRE						// 75% Hunger
6, Exile_Item_GloriousKnakworst			// 60% Hunger
7, Exile_Item_Surstromming				// 55% Hunger
7, Exile_Item_SausageGravy				// 50% Hunger
7, Exile_Item_ChristmasTinner			// 40% Hunger
7, Exile_Item_MacasCheese				// 40% Hunger
7, Exile_Item_BBQSandwich				// 40% Hunger
7, Exile_Item_CatFood					// 40% Hunger
7, Exile_Item_Dogfood					// 30% Hunger
7, Exile_Item_BeefParts					// 30% Hunger
7, Exile_Item_Cheathas					// 30% Hunger
7, Exile_Item_DsNuts					// 30% Hunger
7, Exile_Item_Noodles					// 25% Hunger
8, Exile_Item_CockONut					// 20% Hunger
8, Exile_Item_SeedAstics				// 20% Hunger
9, Exile_Item_Raisins					// 15% Hunger
9, Exile_Item_Moobar					// 10% Hunger
11, Exile_Item_InstantCoffee			//  5% Hunger

> Drinks
7, Exile_Item_PowerDrink					// +95% Thirst
12, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
14, Exile_Item_Beer							// +75% Thirst
17, Exile_Item_EnergyDrink					// +75% Thirst
20, Exile_Item_MountainDupe					// +50% Thirst, spawns always twice!	
25, Exile_Item_ChocolateMilk				// +35% Thirst
30, Exile_Item_PlasticBottleDirtyWater		// +10% Thirst


///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
20, hgun_ACPC2_F			// ACP-C2 .45
21, hgun_P07_F				// P07 9 mm
20, hgun_Rook40_F			// Rook-40 9 mm
13, hgun_Pistol_heavy_01_F	// 4-five .45
13, hgun_Pistol_heavy_02_F	// Zubr .45
13, hgun_Pistol_Signal_F	// Starter Pistol
13, Exile_Weapon_Colt1911   // Colt 1911
13, Exile_Weapon_Makarov	// Makarov
13, Exile_Weapon_Taurus		// Taurus
//Modded Pistols
13,	rhs_weap_makarov_pmm
13,	rhs_weap_pya
13,	rhsusf_weap_glock17g4
13,	rhsusf_weap_m1911a1
13,	rhsusf_weap_m9

> PistolAmmo
20, 11Rnd_45ACP_Mag				// 4-five
20, 16Rnd_9x21_Mag				// PDW2000, P07, ROOK-40
10, 30Rnd_9x21_Mag				// Sting, PDW2000, P07, ROOK-40
20, 6Rnd_45ACP_Cylinder			// Zubr
7, 6Rnd_GreenSignal_F			// Starter Pistol
7, 6Rnd_RedSignal_F				// Starter Pistol 
20, 9Rnd_45ACP_Mag				// ACP-C2
20, Exile_Magazine_7Rnd_45ACP	// Colt 1911
20, Exile_Magazine_8Rnd_9x18	// Makarov
20, Exile_Magazine_6Rnd_45ACP	// Taurus
//Modded Pistol Ammo
20,	rhs_mag_9x19_17
20,	rhs_mag_9x18_12_57N181S
20,	rhsusf_mag_7x45acp_MHP
20,	rhsusf_mag_17Rnd_9x19_FMJ
20,	rhsusf_mag_17Rnd_9x19_JHP
20,	rhsusf_mag_15Rnd_9x19_FMJ
20,	rhsusf_mag_15Rnd_9x19_JHP

> PistolAttachments
36, muzzle_snds_L
36, muzzle_snds_acp
14, optic_Yorris		
14, optic_MRD
//Modded Pistol Attachments

> Shotguns
33, Exile_Weapon_M1014	//M1014
//Modded Shotguns
33,	rhs_weap_M590_5RD
33,	rhs_weap_M590_8RD
	
> ShotgunAmmo
40, Exile_Magazine_8Rnd_74Slug		//M1014
//Modded ShotgunAmmo
40,	rhsusf_5Rnd_00Buck
40,	rhsusf_8Rnd_00Buck
40,	rhsusf_5Rnd_Slug
40,	rhsusf_8Rnd_Slug
10,	rhsusf_5Rnd_HE
10,	rhsusf_8Rnd_HE
10,	rhsusf_5Rnd_FRAG
10,	rhsusf_8Rnd_FRAG

> SMG
34, SMG_01_F		// Vermin SMG .45 ACP
33, SMG_02_F		// Sting 9 mm
33, hgun_PDW2000_F	// PDW2000 9 mm
//Modded SMGs

> SMGAmmo
50, 30Rnd_45ACP_Mag_SMG_01					// Vermin SMG
50, 30Rnd_45ACP_Mag_SMG_01_Tracer_Green		// Vermin SMG
//Modded SMG Ammo

> SMGAttachments
20, optic_Holosight_smg
20, optic_ACO_grn_smg
20, optic_Aco_smg
20, optic_ACO_grn
20, optic_Aco
//Modded SMG Attatchments

> Rifles
10, arifle_Katiba_F			// Katiba 6.5 mm
8, arifle_Katiba_GL_F		// Katiba GL 6.5 mm
8, arifle_MXC_F				// MXC 6.5 mm
8, arifle_MX_F				// MX 6.5 mm
4, arifle_MX_GL_F			// MX 3GL 6.5 mm
6, arifle_MXM_F				// MXM 6.5 mm
3, arifle_MXM_Black_F		// MXM 6.5 mm (Black)
6, arifle_SDAR_F			// SDAR 5.56 mm
8, arifle_TRG21_F			// TRG-21 5.56 mm
8, arifle_TRG20_F			// TRG-20 5.56 mm
4, arifle_TRG21_GL_F		// TRG-21 EGLM 5.56 mm
7, arifle_Mk20_F			// Mk20 5.56 mm
7, arifle_Mk20C_F			// Mk20C 5.56 mm
4, arifle_Mk20_GL_F			// Mk20 EGLM 5.56 mm
3, arifle_MXC_Black_F		// MXC 6.5 mm (Black)
3, arifle_MX_Black_F		// MX 6.5 mm (Black)
3, arifle_MX_GL_Black_F		// MX 3GL 6.5 mm (Black)
10, Exile_Weapon_AK107	
10, Exile_Weapon_AK107_GL	
10, Exile_Weapon_AK74_GL
10, Exile_Weapon_AK74
10, Exile_Weapon_AK47		
10, Exile_Weapon_AKM		
10, Exile_Weapon_AKS			
10, Exile_Weapon_DMR		
10, Exile_Weapon_LeeEnfield
10, Exile_Weapon_CZ550
10, Exile_Weapon_SVD
10, Exile_Weapon_SVDCamo
10, Exile_Weapon_VSSVintorez
//Modded Rifles
10,	rhs_weap_ak103							//7.62
10,	rhs_weap_ak103_1						//7.62
10,	rhs_weap_ak103_2						//7.62
10,	rhs_weap_ak103_gp25						//7.62
10,	rhs_weap_ak103_gp25_npz					//7.62
10,	rhs_weap_ak103_npz						//7.62
10,	rhs_weap_ak104							//7.62
10,	rhs_weap_ak104_npz						//7.62
15,	rhs_weap_ak105							//5.45
15,	rhs_weap_ak105_npz						//5.45
15,	rhs_weap_ak74m							//5.45
15,	rhs_weap_ak74m_2mag						//5.45
15,	rhs_weap_ak74m_2mag_camo				//5.45
15,	rhs_weap_ak74m_2mag_npz					//5.45
15,	rhs_weap_ak74m_camo						//5.45
15,	rhs_weap_ak74m_camo_folded				//5.45
15,	rhs_weap_ak74m_camo_npz					//5.45
15,	rhs_weap_ak74m_desert					//5.45
15,	rhs_weap_ak74m_desert_folded			//5.45
15,	rhs_weap_ak74m_desert_npz				//5.45
15, rhs_weap_ak74m_folded					//5.45
15,	rhs_weap_ak74m_gp25						//5.45
15,	rhs_weap_ak74m_gp25_npz					//5.45
15,	rhs_weap_ak74m_npz						//5.45
15,	rhs_weap_ak74m_plummag					//5.45
15,	rhs_weap_ak74m_plummag_folded			//5.45
15,	rhs_weap_ak74m_plummag_npz				//5.45
10,	rhs_weap_akm 							//7.62
10,	rhs_weap_akm_gp25 						//7.62
10,	rhs_weap_akms 							//7.62
10,	rhs_weap_akms_gp25 						//7.62
15,	rhs_weap_asval 							//9mm
15,	rhs_weap_asval_npz						//9mm
10,	rhs_weap_m14ebrri						//7.62
15,	rhs_weap_m16a4							//5.56
15,	rhs_weap_m16a4_carryhandle				//5.56
15,	rhs_weap_m16a4_carryhandle_M203			//5.56
15,	rhs_weap_m16a4_carryhandle_grip			//5.56
15,	rhs_weap_m16a4_carryhandle_grip_pmag	//5.56
15,	rhs_weap_m16a4_carryhandle_pmag			//5.56
15,	rhs_weap_m16a4_grip						//5.56
15,	rhs_weap_m27iar							//5.56
15,	rhs_weap_m4								//5.56
15,	rhs_weap_m4_carryhandle					//5.56
15,	rhs_weap_m4_carryhandle_pmag			//5.56
15,	rhs_weap_m4_grip						//5.56
15,	rhs_weap_m4_grip2						//5.56
15,	rhs_weap_m4_m203						//5.56
15,	rhs_weap_m4_m203S						//5.56
15,	rhs_weap_m4_m320						//5.56
15,	rhs_weap_m4a1							//5.56
15,	rhs_weap_m4a1_carryhandle				//5.56
15,	rhs_weap_m4a1_carryhandle_grip			//5.56
15,	rhs_weap_m4a1_carryhandle_grip2			//5.56
15,	rhs_weap_m4a1_carryhandle_m203			//5.56
15,	rhs_weap_m4a1_carryhandle_m203S			//5.56
15,	rhs_weap_m4a1_carryhandle_pmag			//5.56
15,	rhs_weap_m4a1_grip						//5.56
15,	rhs_weap_m4a1_grip2						//5.56
15,	rhs_weap_m4a1_m203						//5.56
15,	rhs_weap_m4a1_m203s						//5.56
15,	rhs_weap_m4a1_m320						//5.56
10,	rhs_weap_sr25							//7.62
10,	rhs_weap_sr25_ec						//7.62
	
> RifleAmmo
11, 20Rnd_556x45_UW_mag						// SDAR
15, 30Rnd_556x45_Stanag						// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
9, 30Rnd_556x45_Stanag_Tracer_Green			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
9, 30Rnd_556x45_Stanag_Tracer_Red			// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
9, 30Rnd_556x45_Stanag_Tracer_Yellow		// TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR
15, 30Rnd_65x39_caseless_green				// Katiba
9, 30Rnd_65x39_caseless_green_mag_Tracer	// Katiba
9, 30Rnd_65x39_caseless_mag					// MX/C/M/SW/3GL
9, 30Rnd_65x39_caseless_mag_Tracer			// MX/C/M/SW/3GL
8, Exile_Magazine_10Rnd_303					// Lee-Enfield
9, Exile_Magazine_30Rnd_762x39_AK			// AK
9, Exile_Magazine_30Rnd_545x39_AK			// AK
9, Exile_Magazine_30Rnd_545x39_AK_Green		// AK
9, Exile_Magazine_30Rnd_545x39_AK_Red		// AK
9, Exile_Magazine_30Rnd_545x39_AK_White		// AK
9, Exile_Magazine_30Rnd_545x39_AK_Yellow	// AK
9, Exile_Magazine_20Rnd_762x51_DMR			// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Yellow	// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Red		// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_Green	// DMR
9, Exile_Magazine_20Rnd_762x51_DMR_White	// DMR
9, Exile_Magazine_5Rnd_22LR					// CZ550
9, Exile_Magazine_10Rnd_762x54				// SVD
9, Exile_Magazine_10Rnd_9x39				// VSS
9, Exile_Magazine_20Rnd_9x39				// VSS
//Modded Rifle Ammo
9,	rhs_30Rnd_545x39_AK
9,	rhs_30Rnd_545x39_AK_no_tracers	
9,	rhs_30Rnd_545x39_AK_green
9,	rhs_30Rnd_545x39_7N10_AK
9,	rhs_30Rnd_545x39_7N22_AK
9,	rhs_30Rnd_545x39_7U1_AK
9,	rhs_45Rnd_545X39_7N22_AK
9,	rhs_45Rnd_545X39_7N10_AK
9,	rhs_45Rnd_545X39_AK_Green
9,	rhs_45Rnd_545X39_AK
9,	rhs_45Rnd_545X39_7U1_AK
9,	rhs_30Rnd_762x39mm
9,	rhs_30Rnd_762x39mm_tracer
9,	rhs_30Rnd_762x39mm_89
9,	rhs_30Rnd_762x39mm_U
9,	rhs_20rnd_9x39mm_SP5
9,	rhs_20rnd_9x39mm_SP6
9,	rhsusf_20Rnd_762x51_m118_special_Mag
9,	rhsusf_20Rnd_762x51_m993_Mag
	
> RifleAttachments
10, muzzle_snds_M
10, muzzle_snds_H
10, optic_Arco
10, optic_Hamr
10, optic_Holosight
14, acc_flashlight
10, acc_pointer_IR
10, optic_MRCO
10, optic_DMS
5, optic_NVS
//1, optic_tws
//Modded Rifle Attachments

> LMG
25, arifle_MX_SW_Black_F	// MX SW 6.5 mm (Black)
25, arifle_MX_SW_F			// MX SW 6.5 mm
25, LMG_Mk200_F				// Mk200 6.5 mm
25, LMG_Zafir_F				// Zafir 7.62 mm
25, Exile_Weapon_RPK
25, Exile_Weapon_PK
25, Exile_Weapon_PKP
//Modded LMGs
25,	rhs_weap_m240B
25,	rhs_weap_m240B_CAP
25,	rhs_weap_m240G
25,	rhs_weap_m249_pip_L
25,	rhs_weap_m249_pip_L_para
25,	rhs_weap_m249_pip_L_vfg
25,	rhs_weap_m249_pip_S
25,	rhs_weap_m249_pip_S_para
25,	rhs_weap_m249_pip_S_vfg
	
> LMGAmmo
12, 100Rnd_65x39_caseless_mag			// MX SW
10, 100Rnd_65x39_caseless_mag_Tracer	// MX SW
12, 150Rnd_762x54_Box					// Zafir
10, 150Rnd_762x54_Box_Tracer			// Zafir
5, 130Rnd_338_Mag
51, 150Rnd_93x64_Mag
10, Exile_Magazine_45Rnd_545x39_RPK_Green
10, Exile_Magazine_75Rnd_545x39_RPK_Green
10, Exile_Magazine_100Rnd_762x54_PK_Green
10, 200Rnd_65x39_Belt					// Mk200
10, 200Rnd_65x39_Belt_Tracer_Green		// Mk200
10, 200Rnd_65x39_Belt_Tracer_Red		// Mk200
10, 200Rnd_65x39_Belt_Tracer_Yellow		// Mk200
//Modded LMG Ammo
10,	rhs_200rnd_556x45_M_SAW
10,	rhs_200rnd_556x45_T_SAW
10,	rhs_200rnd_556x45_B_SAW
10,	rhsusf_50Rnd_762x51
10,	rhsusf_50Rnd_762x51_m61_ap
10,	rhsusf_50Rnd_762x51_m62_tracer
10,	rhsusf_50Rnd_762x51_m80a1epr
10,	rhsusf_100Rnd_762x51
10,	rhsusf_100Rnd_762x51_m61_ap
10,	rhsusf_100Rnd_762x51_m62_tracer
10,	rhsusf_100Rnd_762x51_m80a1epr
10,	rhsusf_50Rnd_762x51_m993
10,	rhsusf_100Rnd_762x51_m993
	
> Snipers
28, srifle_DMR_01_F			// Rahim 7.62 mm
28, srifle_EBR_F			// Mk18 ABR 7.62 mm
22, srifle_GM6_F			// GM6 Lynx 12.7 mm
22, srifle_LRR_F			// M320 LRR .408
//Modded Snipers
28,	rhs_weap_svdp
28,	rhs_weap_svdp_npz
28,	rhs_weap_svdp_wd
28,	rhs_weap_svdp_wd_npz
28,	rhs_weap_svds
28,	rhs_weap_svds_npz
22,	rhs_weap_XM2010
22,	rhs_weap_XM2010_d
22,	rhs_weap_XM2010_sa
22, rhs_weap_XM2010_wd
	
> SniperAmmo
17, 5Rnd_127x108_Mag		// GM6 Lynx
17, 7Rnd_408_Mag			// M320 LRR
28, 10Rnd_762x54_Mag		// Rahim
28, 20Rnd_762x51_Mag		// Mk18 ABR
10, 5Rnd_127x108_APDS_Mag	// GM6 Lynx 
//Modded Sniper Ammo
28,	rhs_10Rnd_762x54mmR_7N1
17,	rhsusf_5Rnd_300winmag_xm2010
	
> SniperAttachments
19, muzzle_snds_B
//1, optic_tws
//1, optic_tws_mg
27, optic_DMS
26, optic_SOS
26, optic_LRPS
//Modded Sniper Attachments

> DLCRifles
// To overpowered. Do not use in vanilla Exile
//4, MMG_01_hex_F				//Navid
//4, MMG_01_tan_F				//Navid
//6, MMG_02_black_F				//SPMG
//6, MMG_02_camo_F				//SPMG
//6, MMG_02_sand_F				//SPMG
6, srifle_DMR_02_camo_F			//MAR10
6, srifle_DMR_02_F				//MAR10
6, srifle_DMR_02_sniper_F		//MAR10
3, srifle_DMR_03_F				//MK1EMR
3, srifle_DMR_03_khaki_F		//MK1EMR
3, srifle_DMR_03_tan_F			//MK1EMR
3, srifle_DMR_03_woodland_F		//MK1EMR
7, srifle_DMR_04_F				//ASP1KIR
7, srifle_DMR_04_Tan_F			//ASP1KIR
8, srifle_DMR_05_blk_F			//CYRUS
8, srifle_DMR_05_hex_F			//CYRUS
8, srifle_DMR_05_tan_F			//CYRUS
3, srifle_DMR_06_camo_F			//Mk14
3, srifle_DMR_06_olive_F		//Mk14

> DLCAmmo
//18, 150Rnd_93x64_Mag		//Navid
//25, 130Rnd_338_Mag			//SPMG
16, 10Rnd_338_Mag			//MAR10
11, 20Rnd_762x51_Mag		//MK1EMR
14, 10Rnd_127x54_Mag		//ASP1KIR
16, 10Rnd_93x64_DMR_05_Mag	//CYRUS

> DLCOptics
14, optic_AMS
14, optic_AMS_khk
14, optic_AMS_snd
14, optic_KHS_blk
14, optic_KHS_hex
14, optic_KHS_old
14, optic_KHS_tan

> DLCSupressor
40, muzzle_snds_338_black
40, muzzle_snds_338_green
40, muzzle_snds_338_sand
40, muzzle_snds_93mmg
40, muzzle_snds_93mmg_tan
40, muzzle_snds_B

> EpicWeapons //Ghost Hotel Only
4, MMG_01_hex_F				//Navid
4, MMG_01_tan_F				//Navid
6, MMG_02_black_F			//SPMG
6, MMG_02_camo_F			//SPMG
6, MMG_02_sand_F			//SPMG

> Bipods
17, bipod_03_F_oli
17, bipod_03_F_blk
17, bipod_02_F_tan
16, bipod_02_F_hex
17, bipod_02_F_blk
17, bipod_01_F_snd
16, bipod_01_F_mtp
17, bipod_01_F_blk

> HEGrenades
67, 1Rnd_HE_Grenade_shell
33, 3Rnd_HE_Grenade_shell

> UGLFlares
8, 3Rnd_UGL_FlareGreen_F
8, 3Rnd_UGL_FlareRed_F
8, 3Rnd_UGL_FlareWhite_F
8, 3Rnd_UGL_FlareYellow_F
17, UGL_FlareGreen_F
17, UGL_FlareRed_F
17, UGL_FlareWhite_F
17, UGL_FlareYellow_F
// No Infrared for now
//UGL_FlareCIR_F
//3Rnd_UGL_FlareCIR_F

> UGLSmokes
10, 1Rnd_Smoke_Grenade_shell
10, 1Rnd_SmokeBlue_Grenade_shell
10, 1Rnd_SmokeGreen_Grenade_shell
10, 1Rnd_SmokeOrange_Grenade_shell
10, 1Rnd_SmokePurple_Grenade_shell
10, 1Rnd_SmokeRed_Grenade_shell
10, 1Rnd_SmokeYellow_Grenade_shell
4, 3Rnd_Smoke_Grenade_shell
4, 3Rnd_SmokeBlue_Grenade_shell
4, 3Rnd_SmokeGreen_Grenade_shell
4, 3Rnd_SmokeOrange_Grenade_shell
4, 3Rnd_SmokePurple_Grenade_shell
4, 3Rnd_SmokeRed_Grenade_shell
4, 3Rnd_SmokeYellow_Grenade_shell

> HandGrenades
50, HandGrenade
50, MiniGrenade

> Explosives
12, DemoCharge_Remote_Mag
12, IEDUrbanSmall_Remote_Mag
12, IEDLandSmall_Remote_Mag
20, APERSMine_Range_Mag
20, APERSBoundingMine_Range_Mag
20, APERSTripMine_Wire_Mag
4, SatchelCharge_Remote_Mag

///////////////////////////////////////////////////////////////////////////////
// Custom Classes
///////////////////////////////////////////////////////////////////////////////

> EpicLaunchers //For Ghost Hotel Only
6,	launch_NLAW_F
6,	launch_B_Titan_F
6,	launch_I_Titan_F
6,	launch_O_Titan_F
6,	launch_Titan_F
6,	launch_B_Titan_short_F
6,	launch_I_Titan_short_F
6,	launch_O_Titan_short_F
6,	launch_Titan_short_F
//Modded Epic Launchers
6,	rhs_weap_M136
6,	rhs_weap_M136_hedp
6,	rhs_weap_M136_hp
6,	rhs_weap_fgm148
6,	rhs_weap_fim92
6,	rhs_weap_smaw
6,	rhs_weap_smaw_green

> EpicLauncherAmmo //For Ghost Hotel Only
8,	NLAW_F
8,	Titan_AA
8,	Titan_AT
8,	Titan_AP
//Modded Epic Launcher Ammo
8,	rhs_m136_mag
8,	rhs_m136_hedp_mag
8,	rhs_m136_hp_mag
8,	rhs_fim92_mag
8,	rhs_fgm148_magazine_AT
8,	rhs_mag_smaw_HEAA
8,	rhs_mag_smaw_HEDP
8,	rhs_mag_smaw_SR

> Launchers
20,	launch_RPG32_F
//Modded Launchers
20,	rhs_weap_igla
20,	rhs_weap_rpg26
20,	rhs_weap_rpg7
20,	rhs_weap_rshg2

> LauncherAmmo
9,	RPG32_F
9,	RPG32_HE_F
//Modded Launcher Ammo
9,	rhs_rpg26_mag
9,	rhs_rshg2_mag
9,	rhs_rpg18_mag
9,	rhs_rpg7_PG7VL_mag
9,	rhs_rpg7_PG7VR_mag
9,	rhs_rpg7_TBG7V_mag
9,	rhs_rpg7_OG7V_mag
9,	rhs_mag_9k32_rocket
9,	rhs_mag_9k38_rocket
	
> GrenadeLaunchers //Ghost Hotel Only
50,	rhs_weap_M320
50,	rhs_weap_m32

> GrenadeLauncherAmmo //Ghost Hotel Only
10,	rhsusf_mag_6Rnd_M441_HE
10,	rhsusf_mag_6Rnd_M433_HEDP
10,	rhsusf_mag_6Rnd_M714_white
10,	rhsusf_mag_6Rnd_M576_Buckshot
10,	rhsusf_m112_mag
10,	rhsusf_m112x4_mag
10,	rhs_mag_m18_green
10,	rhs_mag_m18_purple
10,	rhs_mag_m18_red
10,	rhs_mag_m18_yellow
1, rhsusf_5Rnd_doomsday_Buck
1, rhsusf_8Rnd_doomsday_Buck

> ModdedAttachments
2,	rhs_bipod
2,	rhs_acc_tgpa
2,	rhs_acc_pbs1
2,	rhs_acc_dtk4short
2,	rhs_acc_tgpv
2,	rhs_acc_dtk4long
2,	rhs_acc_dtk4screws
2,	rhs_acc_muzzleFlash_dtk
2,	rhs_acc_dtk3
2,	rhs_acc_dtk1
2,	rhs_acc_dtk
2,	rhs_acc_dtk1l
2,	rhs_acc_ak5
2,	rhs_acc_1p29
2,	rhs_acc_1p78	
2,	rhs_acc_pkas
2,	rhs_acc_ekp1
2,	rhs_acc_1p63
2,	rhs_acc_ekp1b
2,	rhs_acc_ekp1c
2,	rhs_acc_ekp1d	
2,	rhs_acc_npz
2,	rhs_acc_pso1m2
2,	rhs_acc_pgo7v
2,	rhs_acc_1pn93_1
2,	rhs_acc_1pn93_2
2,	rhsusf_acc_harris_bipod
2,	rhs_acc_at4_handler
2,	rhsusf_acc_anpeq15A
2,	rhsusf_acc_anpeq15
2,	rhsusf_acc_anpeq15_light
2,	rhsusf_acc_M2010S
2,	rhsusf_acc_anpeq15side
2,	rhsusf_acc_SR25S
2,	rhsusf_acc_rotex5_grey
2,	rhsusf_acc_rotex5_tan
2,	rhsusf_acc_nt4_black
2,	rhsusf_acc_nt4_tan
2,	rhsusf_acc_muzzleFlash_SF
2,	rhsusf_acc_SF3P556
2,	rhsusf_acc_SFMB556
2,	rhsusf_acc_compm4
2,	rhsusf_acc_eotech_552
2,	rhsusf_acc_LEUPOLDMK4
2,	rhsusf_acc_M2A1
2,	rhsusf_acc_EOTECH
2,	rhsusf_acc_LEUPOLDMK4_2
2,	rhsusf_acc_ACOG3_USMC
2,	rhsusf_acc_ACOG2_USMC
2,	rhsusf_acc_ACOG_USMC
2,	rhsusf_acc_ACOG3
2,	rhsusf_acc_ACOG2
2,	rhsusf_acc_ACOG_pip
2,	rhsusf_acc_ACOG_sa
2,	rhsusf_acc_ACOG_d
2,	rhsusf_acc_ACOG_wd
2,	rhsusf_acc_ACOG
	
> ModdedUniforms
3,	rhs_uniform_FROG01_d
3,	rhs_uniform_FROG01_m81
3,	rhs_uniform_FROG01_wd
3,	rhs_uniform_cu_ocp
3,	rhs_uniform_cu_ocp_101st
3,	rhs_uniform_cu_ocp_10th
3,	rhs_uniform_cu_ocp_1stcav
3,	rhs_uniform_cu_ocp_82nd
3,	rhs_uniform_cu_ucp
3,	rhs_uniform_cu_ucp_101st
3,	rhs_uniform_cu_ucp_10th
3,	rhs_uniform_cu_ucp_1stcav
3,	rhs_uniform_cu_ucp_82nd
3,	rhs_uniform_vdv_emr_des
3,	rhs_uniform_emr_patchless
3,	rhs_uniform_msv_emr
3,	rhs_uniform_vdv_emr
3,	rhs_uniform_flora_patchless
3,	rhs_uniform_flora_patchless_alt
3,	rhs_uniform_flora
3,	rhs_uniform_vdv_flora
3,	rhs_uniform_gorka_r_g
3,	rhs_uniform_gorka_r_y
3,	rhs_chdkz_uniform_5
3,	rhs_chdkz_uniform_4
3,	rhs_chdkz_uniform_3
3,	rhs_chdkz_uniform_2
3,	rhs_chdkz_uniform_1
3,	rhs_uniform_mvd_izlom
3,	rhs_uniform_mflora_patchless
3,	rhs_uniform_vdv_mflora

> ModdedVests
1,	rhsusf_iotv_ocp
1,	rhsusf_iotv_ocp_Grenadier
1,	rhsusf_iotv_ocp_Medic
1,	rhsusf_iotv_ocp_Repair
1,	rhsusf_iotv_ocp_Rifleman
1,	rhsusf_iotv_ocp_SAW
1,	rhsusf_iotv_ocp_Squadleader
1,	rhsusf_iotv_ocp_Teamleader
1,	rhsusf_iotv_ucp
1,	rhsusf_iotv_ucp_Grenadier
1,	rhsusf_iotv_ucp_Medic
1,	rhsusf_iotv_ucp_Repair
1,	rhsusf_iotv_ucp_Rifleman
1,	rhsusf_iotv_ucp_SAW
1,	rhsusf_iotv_ucp_Squadleader
1,	rhsusf_iotv_ucp_Teamleader
1,	rhsusf_spc
1,	rhsusf_spc_corpsman
1,	rhsusf_spc_crewman
1,	rhsusf_spc_iar
1,	rhsusf_spc_light
1,	rhsusf_spc_marksman
1,	rhsusf_spc_mg
1,	rhsusf_spc_rifleman
1,	rhsusf_spc_squadleader
1,	rhsusf_spc_teamleader
1,	rhs_6b13_Flora
1,	rhs_6b13_Flora_6sh92
1,	rhs_6b13_Flora_6sh92_headset_mapcase
1,	rhs_6b13_Flora_6sh92_radio
1,	rhs_6b13_Flora_6sh92_vog
1,	rhs_6b13_Flora_crewofficer
1,	rhs_6b13_EMR
1,	rhs_6b13
1,	rhs_6b13_6sh92
1,	rhs_6b13_6sh92_headset_mapcase
1,	rhs_6b13_6sh92_radio
1,	rhs_6b13_6sh92_vog
1,	rhs_6b13_crewofficer
1,	rhs_6b23
1,	rhs_6b23_6sh92
1,	rhs_6b23_6sh92_headset
1,	rhs_6b23_6sh92_headset_mapcase
1,	rhs_6b23_6sh92_radio
1,	rhs_6b23_6sh92_vog
1,	rhs_6b23_6sh92_vog_headset
1,	rhs_6b23_crewofficer
1,	rhs_6b23_crew
1,	rhs_6b23_engineer
1,	rhs_6b23_medic
1,	rhs_6b23_rifleman
1,	rhs_6b23_sniper
1,	rhs_6b23_vydra_3m
1,	rhs_6b23_digi
1,	rhs_6b23_digi_6sh92
1,	rhs_6b23_digi_6sh92_headset
1,	rhs_6b23_digi_6sh92_headset_spetsnaz
1,	rhs_6b23_digi_6sh92_headset_mapcase
1,	rhs_6b23_digi_6sh92_radio
1,	rhs_6b23_digi_6sh92_Spetsnaz
1,	rhs_6b23_digi_6sh92_vog
1,	rhs_6b23_digi_6sh92_vog_headset
1,	rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz
1,	rhs_6b23_digi_crewofficer
1,	rhs_6b23_digi_crew
1,	rhs_6b23_digi_engineer	
1,	rhs_6b23_digi_medic
1,	rhs_6b23_digi_rifleman
1,	rhs_6b23_digi_sniper
1,	rhs_6b23_digi_vydra_3m
1,	rhs_6b23_ML
1,	rhs_6b23_ML_6sh92
1,	rhs_6b23_ML_6sh92_headset
1,	rhs_6b23_ML_6sh92_headset_mapcase
1,	rhs_6b23_ML_6sh92_radio
1,	rhs_6b23_ML_6sh92_vog
1,	rhs_6b23_ML_6sh92_vog_headset
1,	rhs_6b23_ML_crewofficer
1,	rhs_6b23_ML_crew
1,	rhs_6b23_ML_engineer
1,	rhs_6b23_ML_medic
1,	rhs_6b23_ML_rifleman
1,	rhs_6b23_ML_sniper
1,	rhs_6b23_ML_vydra_3m
1,	rhs_6sh92
1,	rhs_6sh92_headset
1,	rhs_6sh92_radio
1,	rhs_6sh92_vog
1,	rhs_6sh92_vog_headset
1,	rhs_6sh92_digi
1,	rhs_6sh92_digi_headset
1,	rhs_6sh92_digi_radio
1,	rhs_6sh92_digi_vog
1,	rhs_6sh92_digi_vog_headset

> ModdedBackpacks
14,	B_rhsusf_B_BACKPACK
14,	rhsusf_assault_eagleaiii_coy
14,	rhsusf_assault_eagleaiii_ocp
14,	rhsusf_assault_eagleaiii_ucp
14,	rhsusf_falconii
14,	rhs_assault_umbts
14,	rhs_assault_umbts_engineer_empty

> ModdedHelmets
1,	rhs_Booniehat_m81
1,	rhs_Booniehat_marpatd
1,	rhs_Booniehat_marpatwd
1,	rhs_Booniehat_ocp
1,	rhs_Booniehat_ucp
1,	rhsusf_Bowman
1,	rhsusf_ach_bare
1,	rhsusf_ach_bare_des
1,	rhsusf_ach_bare_des_ess
1,	rhsusf_ach_bare_des_headset
1,	rhsusf_ach_bare_des_headset_ess
1,	rhsusf_ach_bare_ess
1,	rhsusf_ach_bare_headset
1,	rhsusf_ach_bare_headset_ess
1,	rhsusf_ach_bare_semi
1,	rhsusf_ach_bare_semi_ess
1,	rhsusf_ach_bare_semi_headset
1,	rhsusf_ach_bare_semi_headset_ess
1,	rhsusf_ach_bare_tan
1,	rhsusf_ach_bare_tan_ess
1,	rhsusf_ach_bare_tan_headset
1,	rhsusf_ach_bare_tan_headset_ess
1,	rhsusf_ach_bare_wood
1,	rhsusf_ach_bare_wood_ess
1,	rhsusf_ach_bare_wood_headset
1,	rhsusf_ach_bare_wood_headset_ess
1,	rhsusf_ach_helmet_ESS_ocp
1,	rhsusf_ach_helmet_ESS_ucp
1,	rhsusf_ach_helmet_M81
1,	rhsusf_ach_helmet_camo_ocp
1,	rhsusf_ach_helmet_headset_ess_ocp
1,	rhsusf_ach_helmet_headset_ess_ucp
1,	rhsusf_ach_helmet_headset_ocp
1,	rhsusf_ach_helmet_headset_ucp
1,	rhsusf_ach_helmet_ocp
1,	rhsusf_ach_helmet_ocp_norotos
1,	rhsusf_ach_helmet_ucp
1,	rhsusf_ach_helmet_ucp_norotos
1,	rhsusf_bowman_cap
1,	rhsusf_lwh_helmet_M1942
1,	rhsusf_lwh_helmet_marpatd
1,	rhsusf_lwh_helmet_marpatd_ess
1,	rhsusf_lwh_helmet_marpatd_headset
1,	rhsusf_lwh_helmet_marpatwd
1,	rhsusf_lwh_helmet_marpatwd_ess
1,	rhsusf_lwh_helmet_marpatwd_headset
1,	rhsusf_mich_bare
1,	rhsusf_mich_bare_alt
1,	rhsusf_mich_bare_alt_semi
1,	rhsusf_mich_bare_alt_tan
1,	rhsusf_mich_bare_headset
1,	rhsusf_mich_bare_norotos
1,	rhsusf_mich_bare_norotos_alt
1,	rhsusf_mich_bare_norotos_alt_headset
1,	rhsusf_mich_bare_norotos_alt_semi
1,	rhsusf_mich_bare_norotos_alt_semi_headset
1,	rhsusf_mich_bare_norotos_alt_tan
1,	rhsusf_mich_bare_norotos_alt_tan_headset
1,	rhsusf_mich_bare_norotos_arc
1,	rhsusf_mich_bare_norotos_arc_alt
1,	rhsusf_mich_bare_norotos_arc_alt_headset
1,	rhsusf_mich_bare_norotos_arc_alt_semi
1,	rhsusf_mich_bare_norotos_arc_alt_semi_headset
1,	rhsusf_mich_bare_norotos_arc_alt_tan
1,	rhsusf_mich_bare_norotos_arc_alt_tan_headset
1,	rhsusf_mich_bare_norotos_arc_headset
1,	rhsusf_mich_bare_norotos_arc_semi
1,	rhsusf_mich_bare_norotos_arc_semi_headset
1,	rhsusf_mich_bare_norotos_arc_tan
1,	rhsusf_mich_bare_norotos_headset
1,	rhsusf_mich_bare_norotos_semi
1,	rhsusf_mich_bare_norotos_semi_headset
1,	rhsusf_mich_bare_norotos_tan
1,	rhsusf_mich_bare_norotos_tan_headset
1,	rhsusf_mich_bare_semi
1,	rhsusf_mich_bare_semi_headset
1,	rhsusf_mich_bare_tan
1,	rhsusf_mich_bare_tan_headset
1,	rhsusf_mich_helmet_marpatdItemMap
1,	rhsusf_mich_helmet_marpatd_altItemMap
1,	rhsusf_mich_helmet_marpatd_alt_headset
1,	rhsusf_mich_helmet_marpatd_headset
1,	rhsusf_mich_helmet_marpatd_norotos
1,	rhsusf_mich_helmet_marpatd_norotos_arc
1,	rhsusf_mich_helmet_marpatd_norotos_arc_headset
1,	rhsusf_mich_helmet_marpatd_norotos_headset
1,	rhsusf_mich_helmet_marpatwd
1,	rhsusf_mich_helmet_marpatwd_alt
1,	rhsusf_mich_helmet_marpatwd_alt_headset
1,	rhsusf_mich_helmet_marpatwd_headset
1,	rhsusf_mich_helmet_marpatwd_norotos
1,	rhsusf_mich_helmet_marpatwd_norotos_arc
1,	rhsusf_mich_helmet_marpatwd_norotos_arc_headset
1,	rhsusf_mich_helmet_marpatwd_norotos_headset
1,	rhsusf_opscore_bk
1,	rhsusf_opscore_coy_cover
1,	rhsusf_opscore_coy_cover_pelt
1,	rhsusf_opscore_fg
1,	rhsusf_opscore_mc_cover
1,	rhsusf_opscore_mc_cover_pelt
1,	rhsusf_opscore_rg_cover
1,	rhsusf_opscore_rg_cover_pelt
1,	rhsusf_opscore_ut
1,	rhs_6b26_green
1,	rhs_6b26_bala_green
1,	rhs_6b26_ess_green
1,	rhs_6b26_ess_bala_green
1,	rhs_6b26
1,	rhs_6b26_bala
1,	rhs_6b26_ess
1,	rhs_6b26_ess_bala
1,	rhs_6b27m_green
1,	rhs_6b27m_green_bala
1,	rhs_6b27m_green_ess
1,	rhs_6b27m_green_ess_bala
1,	rhs_6b27m_digi
1,	rhs_6b27m_digi_bala
1,	rhs_6b27m_digi_ess
1,	rhs_6b27m_digi_ess_bala
1,	rhs_6b27m
1,	rhs_6b27m_bala
1,	rhs_6b27m_ess
1,	rhs_6b27m_ess_bala
1,	rhs_6b27m_ml
1,	rhs_6b27m_ml_bala
1,	rhs_6b27m_ml_ess
1,	rhs_6b27m_ML_ess_bala
1,	rhs_6b28_green
1,	rhs_6b28_green_bala
1,	rhs_6b28_green_ess
1,	rhs_6b28_green_ess_bala
1,	rhs_6b28
1,	rhs_6b28_bala
1,	rhs_6b28_ess
1,	rhs_6b28_ess_bala
1,	rhs_6b28_flora
1,	rhs_6b28_flora_bala
1,	rhs_6b28_flora_ess
1,	rhs_6b28_flora_ess_bala
1,	rhs_Booniehat_digi
1,	rhs_Booniehat_flora
1,	rhs_ssh68

> GoldWeapons
50, Exile_Weapon_TaurusGold
50, Exile_Weapon_AKS_Gold

///////////////////////////////////////////////////////////////////////////////
// Clothing & Gear
///////////////////////////////////////////////////////////////////////////////

//Civilian

> CivilianItems
30, ItemWatch
30, ItemRadio
20, ItemGPS
20, Binocular
40, Exile_Item_Heatpack
35, ItemMap
5, Exile_Item_MobilePhone

> CivilianClothing
9, U_C_Poor_1
9, U_C_Poor_2
9, U_C_Poor_shorts_1
9, U_C_HunterBody_grn
7, U_C_Poloshirt_salmon
7, U_C_Poloshirt_tricolour
7, U_C_Poloshirt_stripped
7, U_C_Poloshirt_burgundy
7, U_C_Poloshirt_blue
9, U_C_Journalist
9, U_C_Scientist
9, U_Rangemaster
1, U_OrestesBody
1, U_NikosBody
1, U_NikosAgedBody

> CivilianBackpacks
10, B_OutdoorPack_blk
9, B_OutdoorPack_tan
9, B_OutdoorPack_blu
8, B_HuntingBackpack
7, B_AssaultPack_khk
7, B_AssaultPack_dgtl
7, B_AssaultPack_rgr
7, B_AssaultPack_sgg
7, B_AssaultPack_blk
7, B_AssaultPack_cbr
7, B_AssaultPack_mcamo
5, B_Kitbag_mcamo
5, B_Kitbag_sgg
5, B_Kitbag_cbr

> CivilianVests
50, V_Rangemaster_belt
25, V_Press_F
25, V_TacVest_blk_POLICE

> CivilianHeadgear
5, H_Bandanna_surfer
5, H_Beret_blk_POLICE
5, H_Cap_blk
5, H_Cap_blk_Raven
5, H_Cap_blu
5, H_Cap_grn
5, H_Cap_headphones
5, H_Cap_oli
6, H_Cap_press
6, H_Cap_red
6, H_Cap_tan
6, H_Hat_blue
6, H_Hat_brown
6, H_Hat_checker
6, H_Hat_grey
6, H_Hat_tan
6, H_StrawHat
6, H_StrawHat_dark

//Guerilla

> GuerillaItems
25, Rangefinder
25, NVGoggles
50, ItemCompass

> GuerillaClothing
16, U_IG_Guerilla1_1
16, U_IG_Guerilla2_1
16, U_IG_Guerilla2_2
16, U_IG_Guerilla2_3
15, U_IG_Guerilla3_1
15, U_IG_Guerilla3_2
4, U_IG_leader
2, U_I_G_resistanceLeader_F

> GuerillaBackpacks
14, B_FieldPack_blk
14, B_FieldPack_ocamo
14, B_FieldPack_oucamo
14, B_FieldPack_cbr
11, B_Bergen_sgg
11, B_Bergen_mcamo
11, B_Bergen_rgr
11, B_Bergen_blk

> GuerillaVests
7, V_BandollierB_khk
7, V_BandollierB_cbr
7, V_BandollierB_rgr
7, V_BandollierB_blk
7, V_BandollierB_oli
5, V_Chestrig_khk
5, V_Chestrig_rgr
5, V_Chestrig_blk
5, V_Chestrig_oli
7, V_HarnessO_brn
7, V_HarnessOGL_brn
7, V_HarnessO_gry
7, V_HarnessOGL_gry
7, V_HarnessOSpec_brn
7, V_HarnessOSpec_gry
3, V_I_G_resistanceLeader_F

> GuerillaHeadgear
4, Exile_Headgear_GasMask
4, H_Booniehat_khk
4, H_Booniehat_indp
4, H_Booniehat_mcamo
4, H_Booniehat_grn
4, H_Booniehat_tan
4, H_Booniehat_dirty
4, H_Booniehat_dgtl
4, H_Booniehat_khk_hs
3, H_Bandanna_khk
3, H_Bandanna_khk_hs
3, H_Bandanna_cbr
3, H_Bandanna_sgg
3, H_Bandanna_gry
3, H_Bandanna_camo
3, H_Bandanna_mcamo
3, H_BandMask_blk
1, H_Beret_blk
1, H_Beret_red
1, H_Beret_grn
1, H_Beret_grn_SF
1, H_Beret_brn_SF
1, H_Beret_ocamo
1, H_Beret_02
1, H_Beret_Colonel
3, H_Hat_camo
3, H_Cap_brn_SPECOPS
3, H_Cap_tan_specops_US
3, H_Cap_khaki_specops_UK
3, H_Watchcap_blk
3, H_Watchcap_khk
2, H_Watchcap_camo
2, H_Watchcap_sgg
2, H_TurbanO_blk
2, H_Shemag_khk
2, H_Shemag_tan
2, H_Shemag_olive
2, H_Shemag_olive_hs
2, H_ShemagOpen_khk
2, H_ShemagOpen_tan

//Military

> MilitaryClothing
5, U_B_CTRG_1						// CTRG Combat Uniform (UBACS)
5, U_B_CTRG_2						// CTRG Combat Uniform (UBACS2)
5, U_B_CTRG_3						// CTRG Combat Uniform (Tee)
5, U_B_CombatUniform_mcam			// Combat Fatigues (MTP)
5, U_B_CombatUniform_mcam_tshirt	// Combat Fatigues (MTP) (Tee)
5, U_B_CombatUniform_mcam_vest		// Recon Fatigues (MTP)
5, U_B_CombatUniform_mcam_worn		// Worn Combat Fatigues (MTP)
3, U_B_SpecopsUniform_sgg			// Specop Fatigues (Sage)
2, U_O_OfficerUniform_ocamo			// Officer Fatigues (Hex)
2, U_I_OfficerUniform				// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform				// Combat Fatigues [AAF]
4, U_I_CombatUniform_tshirt			// Combat Fatigues [AAF] (Tee)
4, U_I_CombatUniform_shortsleeve	// Combat Fatigues [AAF]
4, U_B_HeliPilotCoveralls			// Heli Pilot Coveralls
4, U_O_PilotCoveralls				// Pilot Coveralls [CSAT]
4, U_B_PilotCoveralls				// Pilot Coveralls [NATO]
4, U_I_pilotCoveralls				// Pilot Coveralls [AAF]
4, U_I_HeliPilotCoveralls			// Heli Pilot Coveralls
2, U_B_Wetsuit						// Wetsuit [NATO]
2, U_O_Wetsuit						// Wetsuit [CSAT]
2, U_I_Wetsuit						// Wetsuit [AAF]
2, U_O_CombatUniform_ocamo			// Heli Pilot Coveralls
2, U_O_CombatUniform_oucamo			// Fatigues (Urban) [CSAT]
2, U_O_SpecopsUniform_ocamo			// Recon Fatigues (Hex)
2, U_O_SpecopsUniform_blk			// Recon Fatigues (Black)

> MilitaryBackpacks
15, B_Carryall_ocamo
15, B_Carryall_oucamo
15, B_Carryall_mcamo
18, B_Carryall_oli
18, B_Carryall_khk
19, B_Carryall_cbr

> MilitaryVests
10, V_PlateCarrier1_blk
10, V_PlateCarrier1_rgr
10, V_PlateCarrier2_rgr
10, V_PlateCarrier3_rgr
10, V_PlateCarrierGL_rgr
10, V_PlateCarrierIA1_dgtl
10, V_PlateCarrierIA2_dgtl
10, V_PlateCarrierIAGL_dgtl
10, V_PlateCarrierSpec_rgr
5, V_PlateCarrierL_CTRG
5, V_PlateCarrierH_CTRG

> MilitaryHeadgear
4, Exile_Headgear_GasMask
4, H_MilCap_ocamo
4, H_MilCap_mcamo
4, H_MilCap_oucamo
4, H_MilCap_blue
4, H_MilCap_rucamo
4, H_MilCap_dgtl
3, H_HelmetB
3, H_HelmetB_paint
3, H_HelmetB_light
3, H_HelmetB_plain_blk
3, H_HelmetSpecB
3, H_HelmetSpecB_paint1
3, H_HelmetSpecB_paint2
3, H_HelmetSpecB_blk
3, H_HelmetIA
2, H_HelmetIA_net
2, H_HelmetIA_camo
2, H_HelmetB_grass
2, H_HelmetB_snakeskin
2, H_HelmetB_desert
2, H_HelmetB_black
2, H_HelmetB_sand
2, H_HelmetB_light_grass
2, H_HelmetB_light_snakeskin
2, H_HelmetB_light_desert
2, H_HelmetB_light_black
2, H_HelmetB_light_sand
1, H_HelmetCrew_B
1, H_HelmetCrew_O
1, H_HelmetCrew_I
1, H_PilotHelmetFighter_B
1, H_PilotHelmetFighter_O
1, H_PilotHelmetFighter_I
1, H_PilotHelmetHeli_B
1, H_PilotHelmetHeli_O
1, H_PilotHelmetHeli_I
1, H_HelmetB_camo
1, H_CrewHelmetHeli_B
1, H_CrewHelmetHeli_O
1, H_CrewHelmetHeli_I
2, H_BandMask_khk
2, H_BandMask_reaper
2, H_BandMask_demon
1, H_HelmetO_oucamo
1, H_HelmetLeaderO_oucamo
1, H_HelmetSpecO_ocamo
1, H_HelmetSpecO_blk
1, H_HelmetO_ocamo
1, H_HelmetLeaderO_ocamo

> Ghillies
1, U_B_GhillieSuit			// Ghillie Suit [NATO]
1, U_O_GhillieSuit			// Ghillie Suit [CSAT]
1, U_I_GhillieSuit			// Ghillie Suit [AAF]

> DLCGhillies
1, U_B_FullGhillie_ard		
1, U_B_FullGhillie_lsh
1, U_B_FullGhillie_sard
1, U_O_FullGhillie_ard
1, U_O_FullGhillie_lsh
1, U_O_FullGhillie_sard
1, U_I_FullGhillie_ard
1, U_I_FullGhillie_lsh
1, U_I_FullGhillie_sard

> DLCVests
1, V_PlateCarrierGL_blk
1, V_PlateCarrierGL_mtp
1, V_PlateCarrierGL_rgr
1, V_PlateCarrierIAGL_dgtl
1, V_PlateCarrierIAGL_oli
1, V_PlateCarrierSpec_blk
1, V_PlateCarrierSpec_mtp
1, V_PlateCarrierSpec_rgr

> Rebreathers
1, V_RebreatherB
1, V_RebreatherIR
1, V_RebreatherIA

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
4, Exile_Item_InstaDoc
10, Exile_Item_Bandage
20, Exile_Item_Vishpirin
20, Exile_Item_Heatpack
3, Exile_Item_Defibrillator

> IndustrialItems
1, Exile_Item_ThermalScannerPro
2, Exile_Item_Knife
3, Exile_Item_Cement
3, Exile_Item_FloodLightKit
3, Exile_Item_PortableGeneratorKit
4, Exile_Item_CamoTentKit
4, Exile_Item_MetalBoard
4, Exile_Item_Rope
4, Exile_Item_Sand
5, Exile_Item_Grinder
5, Exile_Item_MetalScrews
5, Exile_Melee_SledgeHammer
8, Exile_Item_ExtensionCord
9, Exile_Item_LightBulb
10, Exile_Item_WaterCanisterEmpty
10, Exile_Melee_Shovel
11, Exile_Item_JunkMetal
13, Exile_Item_Handsaw
13, Exile_Item_Pliers
13, Exile_Item_ScrewDriver
22, Exile_Melee_Axe

> Vehicle
40, Exile_Item_FuelCanisterFull
50, Exile_Item_FuelCanisterEmpty
10, Exile_Item_DuctTape

// Throwables

> Chemlights
1, Chemlight_blue
1, Chemlight_green
1, Chemlight_red
1, Chemlight_yellow

> RoadFlares
1, FlareGreen_F
1, FlareRed_F
1, FlareWhite_F
1, FlareYellow_F

> SmokeGrenades
1, SmokeShell
1, SmokeShellRed
1, SmokeShellGreen
1, SmokeShellYellow
1, SmokeShellPurple
1, SmokeShellBlue
1, SmokeShellOrange

> Restraints
1, Exile_Item_ZipTie

> Electronics
1, Exile_Item_Laptop
1, Exile_Item_BaseCameraKit

 // Trash or items not currently being used

> Trash
4, Exile_Item_Can_Empty
4, Exile_Item_ToiletPaper
4, Exile_Item_PlasticBottleEmpty			// Nothing :)
1, Exile_Item_Magazine01
1, Exile_Item_Magazine02
1, Exile_Item_Magazine03
1, Exile_Item_Magazine04

> Unused
3, Exile_Item_CordlessScrewdriver
3, Exile_Item_FireExtinguisher
7, Exile_Item_Foolbox
10, Exile_Item_OilCanister
14, Exile_Item_Hammer
5, Exile_Item_Carwheel
5, Exile_Item_SleepingMat
5, Exile_Item_Wrench