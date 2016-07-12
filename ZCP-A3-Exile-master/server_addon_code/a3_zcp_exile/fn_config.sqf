/*
	Zupa's Capture Points
	Configuration of ZCP
	Capture points and earn rewards.

	╔════╗─────────╔═══╗────────╔╗─────────────╔╗
	╚══╗═║─────────╚╗╔╗║────────║║────────────╔╝╚╗
	──╔╝╔╬╗╔╦══╦══╗─║║║╠══╦╗╔╦══╣║╔══╦╗╔╦══╦═╗╚╗╔╬══╗
	─╔╝╔╝║║║║╔╗║╔╗║─║║║║║═╣╚╝║║═╣║║╔╗║╚╝║║═╣╔╗╗║║║══╣
	╔╝═╚═╣╚╝║╚╝║╔╗║╔╝╚╝║║═╬╗╔╣║═╣╚╣╚╝║║║║║═╣║║║║╚╬══║
	╚════╩══╣╔═╩╝╚╝╚═══╩══╝╚╝╚══╩═╩══╩╩╩╩══╩╝╚╝╚═╩══╝
	────────║║
	────────╚╝
*/

// First person in the Cap zone is the capper (If he leaves, the closest on of the group is the new capper but time is reset!).
// When multiple people are in the zone and not in the same group, the zone is contested and the timer pauses
// Being first in the zone starts the timer.
// Holding a zone  gives you a reward after x Min.

ZCP_dev = false; // Devmode for shorter development capture times

ZCP_AI_Type = 'DMS'; // NONE | DMS | FUMS

ZCP_AI_useLaunchersChance = 10; // %Change to spawn Launcher on AI soldier ( never exeeds the MIN and MAX defined per cappoint).

// Put the following to -1 to disable it.
ZCP_AI_killAIAfterMissionCompletionTimer = 60; // AMounts of seconds before all ZCP AI get auto killed after a mission is completed. ( DMS only ).

// ZCP_Min_AI_Amount = 4; Not used anymore
// ZCP_Random_AI_Max = 8; Not used anymore

ZCP_MessagePlayersBeforeWaves = true; // True -> Inform for an icoming wave of AI, false is not inform the players inside.

// ZCP_CapTime = 300; // Now defined for each mission seperate
ZCP_ServerStartWaitTime = 120;
ZCP_MinWaitTime = 120; // seconds to wait to spawn a new capturepoint when 1 was capped.
ZCP_MaxWaitTime = 120; // random between 0 and THIS number added to the ZCP_MinWaitTime to counter spawning points at the same time
ZCP_BaseCleanupDelay = 180; // seconds to wait to delete a captured base.

ZCP_RewardRelativeToPlayersOnline = true; // This will recalculate the crypto reward according the amount of online players.
ZCP_PoptabReward = 5000; // Poptab reward for capping per player online. ( When poptab reward is selected or randomly chosen ).
ZCP_MinPoptabReward = 500000; // Poptabreward is added to this number

/* Reputation is ALWAYS given as addition on the normal reward.*/
ZCP_ReputationReward = 50; // Respect reward for capping per  player online.
ZCP_MinReputationReward = 250000; // ZCP_ReputationReward is added to this number
ZCP_ReputationRewardForGroup = 10000; // Each group members gets this amount of reputation ( for the trouble).
ZCP_CONFIG_GroupDistanceForRespect = 200; // meters to be close to the capper to get the group award

ZCP_CleanupBase = true; // Let the base dissappear after completing
ZCP_CleanupBaseWithAIBomber = true; // Cleanup with a airstrike
ZCP_CleanupAIVehicleClasses = ['B_Plane_CAS_01_F']; // Any flying vehicle in arma (default B_Plane_CAS_01_F = A10)
ZCP_FlyHeight = 150; // Height of the flying plane;

ZCP_BomberCanDestroyMapBuildings = false; // if true damage of the bombs are applied to all objects in the blastradius.
// If false nothing gets hit ( except players and vehicles ) - base cleanup will happen in both cases after explosion.

ZCP_UseSpecificNamesForCappers = true; // Use the player name, if false it says 'A player'

// ZCP_giveSurvivalBoxWithPoptabsReward = true; not used anymore. You can now define multiple rewards per mission.
ZCP_RewardWeightForRandomChoice = [
	["Poptabs", 4],
	["BuildBox", 3],
	["WeaponBox", 4],
	["SurvivalBox", 4],
	["Vehicle", 2],
	["SniperWeaponBox", 1],
	["BigWeaponBox", 2]
];
// How does this work ( 6 + 3 + 5 + 2 = 16)
// 6/16 = 37.50 %
// 3/16 = 18.75 %
// 5/16 = 31.25 %
// 2/16 = 12.50 %
// You can add extra types here if you want them in the random option.

// Server will keep as many missions up as ZCP_MaxMissions, And they will be randomly chosen from the following list
// Location is ignored if not using static points. just put [0,0,0] then. activate static buy using isStatic = true
// valid rewards -> Random, Poptabs, Vehicle, Buildingbox, WeaponBox
// baseFile -> Random or the basefile name. Random will chose from ZCP_CapBases
// capradius -> 0 for Random, real number for Static base files.
ZCP_CapPoints = [
	[
		"Control Point", // name (0)
		[[10000,10000,0],[10000,10000,0]], // [[x,y,z],[x,y,z]] if using static location (1)
		["Poptabs","Random","Poptabs"], // Reward -> Random, Poptabs, Vehicle, Buildingbox, WeaponBox , BigWeaponBox, SniperWeaponBox (2)
		"alpha", // unique varname -> this gets checked and fixed automaticly on server start ( so don't really worry about it ).
		0, // unique index -> this gets checked and fixed automaticly on server start ( so don't really worry about it ).
		true, // spawnAI on start of the missions ( NEEDS AI system for this ) (5)
		false, // isStatic location ( if true it will take the location specified earlier) (6)
		["ec_audacity.sqf","ec_bravery.sqf","ec_courage.sqf", "ec_defiance.sqf","ec_endurance.sqf","ec_fortitude.sqf","m3e_exoBase1.sqf","m3e_exoBase2.sqf","m3e_exoBase3.sqf"], // baseFile -> Random OR the name of the sqf file OR array of basefiles to choose from ( eg: ["m3e_base1.sqf","m3e_village.sqf"], )
		-1, // capradius if you use a specific static basefile. -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
		-1, // max terrainGradient -> when specific static basefile is used (9) -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
		-1, // distancefromojects -> when specific static basefile is used (10) -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
		300, // captime in seconds for this mission (11)
		4, // Minimum amount of AI at the start of mission (12)
        10, // Maximum amount of AI at start of mission ( If you want it to always be a number change MIN and MAX to the same number. )
        true, // deploy smoke on the circle border when mission is finished (14)
        0, // ammount of seconds to wait before deploying the smokescreen (15)
        0, // ammount of meters outside the circle to place the smoke sources ( 0 is ON the circle border, 50 would be 50 meter outside the border)
		true, // use Waves of AI to attack the base when a player is capping (17)
		[ // array of waves of AI () (18)
			[
				15, // procentage of the cap time to start attack (50 = 50% of the total captime)
				3, // Amount of AI units in a group
				1, // Amount of AI groups
				200, // distance in meter form ZCP for the ai to spawn
				true // false -> all groups from 1 random location, true -> all groups from their own random location
			]
			,
			[
				45, // procentage of the cap time to start attack (50 = 50% of the total captime)
				3, // Amount of AI units in a group
				1, // Amount of AI groups
				200, // distance in meter form ZCP for the ai to spawn
				false // false -> all groups from 1 random location, true -> all groups from their own random location
			]
			,
			[
				60, // procentage of the cap time to start attack (50 = 50% of the total captime)
				3, // Amount of AI units in a group
				2, // Amount of AI groups
				200, // distance in meter form ZCP for the ai to spawn
				true // false -> all groups from 1 random location, true -> all groups from their own random location
			]
		],
		1, // Minimum amount of launchers for starting AI (19)
        2, // Maximum amount of launchers for starting AI (20)
        1, // Minimum amount of launchers for Wave AI (21)
        1  // Maximum amount of launchers for Wave AI (22)
	]
	,
    [
        "High Value Control Point", // name (0)
        [[10000,10000,0],[10000,10000,0]], // [[x,y,z],[x,y,z]] if using static location (1)
        ["Poptabs","Poptabs","Reputation"], // Reward -> Random, Poptabs, Vehicle, Buildingbox, WeaponBox , BigWeaponBox, SniperWeaponBox (2)
        "beta", // unique varname -> this gets checked and fixed automaticly on server start ( so don't really worry about it ).
        1, // unique index -> this gets checked and fixed automaticly on server start ( so don't really worry about it ).
        true, // spawnAI on start of the missions ( NEEDS AI system for this ) (5)
        false, // isStatic location ( if true it will take the location specified earlier) (6)
        'Random', // baseFile -> Random ( from Capbases array- OR the name of the sqf file OR array of basefiles to choose from ( eg: ["m3e_base1.sqf","m3e_village.sqf"], )
        -1, // capradius if you use a specific static basefile. -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
        -1, // max terrainGradient -> when specific static basefile is used (9) -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
        -1, // distancefromojects -> when specific static basefile is used (10) -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
        300, // captime in seconds for this mission (11)
        10, // Minimum amount of AI at the start of mission (12)
        25, // Maximum amount of AI at start of mission ( If you want it to always be a number change MIN and MAX to the same number. )
        true, // deploy smoke on the circle border when mission is finished (14)
        20, // ammount of seconds to wait before deploying the smokescreen (15)
        50, // ammount of meters outside the circle to place the smoke sources ( 0 is ON the circle border, 50 would be 50 meter outside the border)
        true, // use Waves of AI to attack the base when a player is capping (17)
        [ // array of waves of AI () (18)
            [
                50, // procentage of the cap time to start attack (50 = 50% of the total captime)
                5, // Amount of AI units in a group
                1, // Amount of AI groups
                200, // distance in meter form ZCP for the ai to spawn
                true // false -> all groups from 1 random location, true -> all groups from their own random location
            ]
            ,
            [
                80, // procentage of the cap time to start attack (50 = 50% of the total captime)
                3, // Amount of AI units in a group
                3, // Amount of AI groups
                200, // distance in meter form ZCP for the ai to spawn
                false // false -> all groups from 1 random location, true -> all groups from their own random location
            ]
        ],
        1, // Minimum amount of launchers for starting AI
        2, // Maximum amount of launchers for starting AI
        1, // Minimum amount of launchers for Wave AI
        1  // Maximum amount of launchers for Wave AI
    ]
    ,
    [
        "Control Point Bravo", // name (0)
        [[10000,10000,0],[10000,10000,0]], // [[x,y,z],[x,y,z]] if using static location (1)
        ["Poptabs","Poptabs","Reputation"], // Reward -> Random, Poptabs, Vehicle, Buildingbox, WeaponBox, BigWeaponBox, SniperWeaponBox (2)
        "charlie", // unique varname -> this gets checked and fixed automaticly on server start ( so don't really worry about it ).
        2, // unique index -> this gets checked and fixed automaticly on server start ( so don't really worry about it ).
        true, // spawnAI on start of the missions ( NEEDS AI system for this ) (5)
        false, // isStatic location ( if true it will take the location specified earlier) (6)
        'Random', // baseFile -> Random ( from Capbases array- OR the name of the sqf file OR array of basefiles to choose from ( eg: ["m3e_base1.sqf","m3e_village.sqf"], )
        -1, // capradius if you use a specific static basefile. -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
        -1, // max terrainGradient -> when specific static basefile is used (9) -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
        -1, // distancefromojects -> when specific static basefile is used (10) -> put -1 if you want to use the corresponding one from the ZCP_Capbasses array).
        300, // captime in seconds for this mission (11)
        4, // Minimum amount of AI at the start of mission (12)
        8, // Maximum amount of AI at start of mission ( If you want it to always be a number change MIN and MAX to the same number. )
        true, // deploy smoke on the circle border when mission is finished (14)
        20, // ammount of seconds to wait before deploying the smokescreen (15)
        50, // ammount of meters outside the circle to place the smoke sources ( 0 is ON the circle border, 50 would be 50 meter outside the border)
        false, // use Waves of AI to attack the base when a player is capping (17)
        [ // array of waves of AI () (18)
            [
                50, // procentage of the cap time to start attack (50 = 50% of the total captime)
                3, // Amount of AI units in a group
                2, // Amount of AI groups
                200, // distance in meter form ZCP for the ai to spawn
                true // false -> all groups from 1 random location, true -> all groups from their own random location
            ]
        ],
        1, // Minimum amount of launchers for starting AI
        2, // Maximum amount of launchers for starting AI
        1, // Minimum amount of launchers for Wave AI
        1  // Maximum amount of launchers for Wave AI
    ]
    // add more here if wanted
];


ZCP_MaxMissions = 2; // Amount of cap points at the same time when ZCP_MaxMissionsRelativeToPlayers = false

ZCP_Minimum_Online_Players = 0; // Amount of players to be online before it allows to spawn a capture point. !!! O = always

ZCP_MaxMissionsRelativeToPlayers = true; // ZCP_MaxMissions will be ignored if true. ZCP_RelativeMaxMissions will be used
ZCP_RelativeMaxMissions = [
    //[ min players,  amount of cappoints],
    [5, 1],
    [15, 2],
    [40, 3],
    [65, 4]
];
ZCP_SecondsCheckPlayers = 600; // seconds for loop check if the server holds more players now (and spawn extra cappoints). ( 600 = every 10 minuts)

// For every spawned mission,
// buildeditor currenty supported -> m3e, xcam, EdenConverted ( THis is exported as terrainbuilder and converted with my site), m3eEden
ZCP_CapBases = [ // located in capbases folder [filename, capradius, buildeditor, max terraingradient (if not overwritten by staticbasefile), radius of open space for it to spawn base]
	["m3e_base1.sqf", 60, "m3e", 90, 60],
	["m3e_village.sqf", 50, "m3e", 90, 50],
	["xcam_milPoint.sqf", 50, "xcam", 90, 50],
	["ec_audacity.sqf", 30, "EdenConverted", 90, 30],
	["ec_bravery.sqf", 35, "EdenConverted", 90, 35],
	["ec_courage.sqf", 25, "EdenConverted", 90, 25],
	["ec_defiance.sqf", 20, "EdenConverted", 90, 20],
	["ec_endurance.sqf", 20, "EdenConverted", 90, 20],
	["ec_fortitude.sqf", 25, "EdenConverted", 90, 25],
	["m3e_exoBase1.sqf", 30, "m3e", 90, 50],
    ["m3e_exoBase2.sqf", 30, "m3e", 90, 50],
    ["m3e_exoBase3.sqf", 35, "m3e", 90, 50]
];

ZCP_Blacklist = [ // [ [x,y,z], radius ];
	[[23644,18397,0] , 1200], // altis saltlake
	[[-999,-999,0] , 500],
	[[-999,-999,0] , 500]
];

ZCP_createVirtualCircle = true;

ZCP_circleNeutralColor = "#(rgb,8,8,3)color(0,1,0,1)"; // green
ZCP_circleCappingColor = "#(rgb,8,8,3)color(0,0,1,1)"; // blue
ZCP_circleContestedColor = "#(rgb,8,8,3)color(1,0,0,1)"; // red

//Boxtypes
ZCP_SurvivalBox = "O_supplyCrate_F";
ZCP_BuildingBox = "O_CargoNet_01_ammo_F";
ZCP_WeaponBox = "I_CargoNet_01_ammo_F";

// Same as DMS -> Credits DMS
ZCP_DistanceBetweenMissions = 500;
ZCP_SpawnZoneDistance = 500;
ZCP_TradeZoneDistance = 500;
ZCP_DistanceFromWater = 100;
ZCP_DistanceFromPlayers = 200;
ZCP_DistanceFromBaseObjects = 100;

ZCP_CONFIG_BaseObjectsClasses = [
                                    'Exile_Construction_Abstract_Physics',
                                     'Exile_Construction_Abstract_Static'
                                 ];


ZCP_TraderZoneMarkerTypes =			[							// If you're using custom trader markers, make sure you define them here. CASE SENSITIVE!!!
										"ExileTraderZone"
									];
ZCP_SpawnZoneMarkerTypes =			[							// If you're using custom spawn zone markers, make sure you define them here. CASE SENSITIVE!!!
										"ExileSpawnZone"
									];



/* These are arma 3 colors, look up the color naming if you are going to change this */
ZCP_FreeColor = "ColorGreen"; // uncontested marker color -> also correct size
ZCP_CappedColor = "ColorBlue"; // uncontested + capping color
ZCP_ContestColor = "ColorRed"; // contested + capping color
ZCP_BackgroundColor = "ColorWhite"; // Color to get attention on the map, if zoomed out this will be bigger then the cap circle which is the normal size.
ZCP_MissionMarkerWinDotTime = 120; // Seconds to show a marker after a capped point. Change to 0 to disable!

ZCP_DisableVehicleReward = false; // Because it doesnt save without changing epoch code.

/* Uses DMS system, why make one if it already excist? Credits DMS */
ZCP_DMS_MinimumMagCount					= 2;						// Minimum number of magazines for weapons.
ZCP_DMS_MaximumMagCount					= 4;						// Maximum number of magazines for weapons.
ZCP_DMS_CrateCase_Sniper =				[							// If you pass "Sniper" in _lootValues, then it will spawn these weapons/items/backpacks
										[
											["Rangefinder",1],
											["srifle_GM6_F",1],
											["srifle_LRR_F",1],
											["srifle_EBR_F",1],
											["hgun_Pistol_heavy_01_F",1],
											["hgun_PDW2000_F",1]
										],
										[
											["ItemGPS",1],
											["U_B_FullGhillie_ard",1],
											["U_I_FullGhillie_lsh",1],
											["U_O_FullGhillie_sard",1],
											["U_O_GhillieSuit",1],
											["V_PlateCarrierGL_blk",1],
											["V_HarnessO_brn",1],
											["Exile_Item_InstaDoc",3],
											["Exile_Item_Surstromming_Cooked",5],
											["Exile_Item_PlasticBottleFreshWater",5],
											["optic_DMS",1],
											["acc_pointer_IR",1],
											["muzzle_snds_B",1],
											["optic_LRPS",1],
											["optic_MRD",1],
											["muzzle_snds_acp",1],
											["optic_Holosight_smg",1],
											["muzzle_snds_L",1],
											["5Rnd_127x108_APDS_Mag",3],
											["7Rnd_408_Mag",3],
											["20Rnd_762x51_Mag",5],
											["11Rnd_45ACP_Mag",3],
											["30Rnd_9x21_Mag",3]
										],
										[
											["B_Carryall_cbr",1],
											["B_Kitbag_mcamo",1]
										]
									];
ZCP_DMS_BoxWeapons =					[							// List of weapons that can spawn in a crate
										"Exile_Melee_Axe",
										"arifle_Katiba_GL_F",
										"arifle_MX_GL_Black_F",
										"arifle_Mk20_GL_F",
										"arifle_TRG21_GL_F",
										"arifle_Katiba_F",
										"arifle_MX_Black_F",
										"arifle_TRG21_F",
										"arifle_TRG20_F",
										"arifle_Mk20_plain_F",
										"arifle_Mk20_F",
										"LMG_Zafir_F",
										"LMG_Mk200_F",
										"arifle_MX_SW_Black_F",
										"srifle_EBR_F",
										"srifle_DMR_01_F",
										"srifle_GM6_F",
										"srifle_LRR_F",
										"arifle_MXM_F",
										"arifle_MXM_Black_F",
										"srifle_DMR_02_F",
										"rhs_weap_m249_pip_L",
			"rhs_weap_m249_pip_L_para",
			"rhs_weap_m249_pip_L_vfg",
			"rhs_weap_m249_pip_S",
			"rhs_weap_m249_pip_S_para",
			"rhs_weap_m249_pip_S_vfg",
			"rhs_weap_m240B",
			"rhs_weap_m240B_CAP",
			"rhs_weap_m240G",
			"rhs_weap_pkm",
			"rhs_weap_pkp",
			"rhs_weap_m16a4",
			"rhs_weap_m16a4_carryhandle",
			"rhs_weap_m16a4_carryhandle_grip",
			"rhs_weap_m16a4_carryhandle_grip_pmag",
			"rhs_weap_m16a4_carryhandle_M203",
			"rhs_weap_m16a4_carryhandle_pmag",
			"rhs_weap_m16a4_grip",
			"rhs_weap_m4",
			"rhs_weap_m4_grip2",
			"rhs_weap_m4_carryhandle",
			"rhs_weap_m4_carryhandle_pmag",
			"rhs_weap_m4_grip",
			"rhs_weap_m4_m203",
			"rhs_weap_m4_m320",
			"rhs_weap_m4a1_carryhandle",
			"rhs_weap_m4a1_carryhandle_grip2",
			"rhs_weap_m4a1_carryhandle_pmag",
			"rhs_weap_m4a1_carryhandle_m203",
			"rhs_weap_m4a1",
			"rhs_weap_m4a1_grip2",
			"rhs_weap_m4a1_grip",
			"rhs_weap_m4a1_m203",
			"rhs_weap_m4a1_m320",
			"rhs_weap_m4a1_blockII",
			"rhs_weap_m4a1_blockII_KAC",
			"rhs_weap_m4a1_blockII_grip2",
			"rhs_weap_m4a1_blockII_grip2_KAC",
			"rhs_weap_m4a1_blockII_M203",
			"rhs_weap_mk18",
			"rhs_weap_mk18_KAC",
			"rhs_weap_mk18_grip2",
			"rhs_weap_mk18_grip2_KAC",
			"rhs_weap_mk18_m320",
			"rhs_weap_ak103",
			"rhs_weap_ak103_npz",
			"rhs_weap_ak103_1",
			"rhs_weap_akm",
			"rhs_weap_akm_gp25",
			"rhs_weap_akms",
			"rhs_weap_akms_gp25",
			"rhs_weap_sr25",
			"rhs_weap_sr25_ec",
			"rhs_weap_m14ebrri",
			"rhs_weap_XM2010",
			"rhs_weap_XM2010_wd",
			"rhs_weap_XM2010_d",
			"rhs_weap_XM2010_sa",
			"rhs_weap_svd",
			"rhs_weap_svdp_wd",
			"rhs_weap_svdp_wd_npz",
			"rhs_weap_svdp_npz",
			"rhs_weap_svds",
			"rhs_weap_svds_npz",
			"rhs_weap_rpg26",
			"rhs_weap_rpg7",
			"rhs_weap_rshg2"
									];
ZCP_DMS_BoxFood =						[							// List of food that can spawn in a crate.
										"Exile_Item_GloriousKnakworst_Cooked",
										"Exile_Item_Surstromming_Cooked",
										"Exile_Item_SausageGravy_Cooked",
										"Exile_Item_ChristmasTinner_Cooked",
										"Exile_Item_BBQSandwich_Cooked",
										"Exile_Item_Catfood_Cooked",
										"Exile_Item_DogFood_Cooked"
									];
ZCP_DMS_BoxDrinks =						[
										"Exile_Item_PlasticBottleCoffee",
										"Exile_Item_PowerDrink",
										"Exile_Item_PlasticBottleFreshWater",
										"Exile_Item_EnergyDrink",
										"Exile_Item_MountainDupe"
									];
ZCP_DMS_BoxMeds =						[
										"Exile_Item_InstaDoc",
										"Exile_Item_Vishpirin",
										"Exile_Item_Bandage",
										"Exile_Item_Defibrillator"
									];
ZCP_DMS_BoxSurvivalSupplies	=			[							//List of survival supplies (food/drink/meds) that can spawn in a crate. "ZCP_DMS_BoxFood", "ZCP_DMS_BoxDrinks", and "ZCP_DMS_BoxMeds" is automatically added to this list.
										"Exile_Item_Matches",
										"Exile_Item_CookingPot",
										"Exile_Melee_Axe",
										"Exile_Item_CanOpener"
									] + ZCP_DMS_BoxFood + ZCP_DMS_BoxDrinks + ZCP_DMS_BoxMeds;
ZCP_DMS_BoxBaseParts =					[
										"Exile_Item_CamoTentKit",
										"Exile_Item_WoodWallKit",
										"Exile_Item_WoodWallHalfKit",
										"Exile_Item_WoodDoorwayKit",
										"Exile_Item_WoodDoorKit",
										"Exile_Item_WoodFloorKit",
										"Exile_Item_WoodFloorPortKit",
										"Exile_Item_WoodStairsKit",
										"Exile_Item_WoodSupportKit",
										"Exile_Item_FortificationUpgrade"
									];
ZCP_DMS_BoxCraftingMaterials =			[
										"Exile_Item_MetalPole",
										"Exile_Item_MetalBoard",
										"Exile_Item_JunkMetal"
									];
ZCP_DMS_BoxTools =						[
										"Exile_Item_Grinder",
										"Exile_Item_Handsaw"
									];
ZCP_DMS_BoxBuildingSupplies	=			[							// List of building supplies that can spawn in a crate ("ZCP_DMS_BoxBaseParts", "ZCP_DMS_BoxCraftingMaterials", and "ZCP_DMS_BoxTools" are automatically added to this list. "ZCP_DMS_BoxCraftingMaterials" is added twice for weight.)
										"Exile_Item_DuctTape",
										"Exile_Item_PortableGeneratorKit"
									] + ZCP_DMS_BoxBaseParts + ZCP_DMS_BoxCraftingMaterials + ZCP_DMS_BoxCraftingMaterials + ZCP_DMS_BoxTools;
ZCP_DMS_BoxOptics =						[							// List of optics that can spawn in a crate
										"optic_Arco",
										"optic_Hamr",
										"optic_Aco",
										"optic_Holosight",
										"optic_MRCO",
										"optic_SOS",
										"optic_DMS",
										"optic_LRPS",
										"rhsusf_acc_eotech_552",
			"rhsusf_acc_LEUPOLDMK4",
			"rhsusf_acc_ELCAN",
			"rhsusf_acc_ELCAN_pip",
			"rhsusf_acc_ACOG",
			"rhsusf_acc_ACOG_pip",
			"rhs_acc_1pn93_2",
			"rhsusf_acc_ACOG2",
			"rhsusf_acc_ACOG_USMC",
			"rhsusf_acc_ACOG2_USMC",
			"rhsusf_acc_ACOG3_USMC",
			"rhsusf_acc_LEUPOLDMK4_2",
			"rhsusf_acc_EOTECH",
			"rhs_acc_1p29",
			"rhs_acc_1p78",
			"rhs_acc_pkas",
			"rhs_acc_1p63",
			"rhs_acc_ekp1",
			"rhs_acc_pso1m2",
			"rhs_acc_pgo7v",
			"rhs_acc_1pn93_1"
										//"optic_Nightstalker"			// Nightstalker scope lost thermal in Exile v0.9.4
									];
ZCP_DMS_BoxBackpacks =					[							//List of backpacks that can spawn in a crate
										"B_Bergen_rgr",
										"B_Carryall_oli",
										"B_Kitbag_mcamo",
										"B_Carryall_cbr",
										"B_FieldPack_oucamo",
										"B_FieldPack_cbr",
										"B_Bergen_blk"
									];
ZCP_DMS_BoxItems						= ZCP_DMS_BoxSurvivalSupplies+ZCP_DMS_BoxBuildingSupplies+ZCP_DMS_BoxOptics;	// Random "items" can spawn optics, survival supplies, or building supplies

ZCP_DMS_RareLoot						= true;						// Potential chance to spawn rare loot in any crate.
ZCP_DMS_RareLootList =					[							// List of rare loot to spawn
										"Exile_Item_SafeKit",
										"Exile_Item_CodeLock",
										"Exile_Weapon_TaurusGold",
										"Exile_Weapon_AKS_Gold"
									];
ZCP_DMS_RareLootChance	= 10;						// Percentage Chance to spawn rare loot in any crate | Default: 10%

// Vehicles
ZCP_DMS_ArmedVehicles =					[							// List of armed vehicles that can spawn
										"Exile_Car_Offroad_Armed_Guerilla01"
									];

ZCP_DMS_MilitaryVehicles =				[							// List of military vehicles that can spawn
										"Exile_Car_Strider",
										"Exile_Car_Hunter",
										"Exile_Car_Ifrit"
									];

ZCP_DMS_TransportTrucks =				[							// List of transport trucks that can spawn
										"Exile_Car_Van_Guerilla01",
										"Exile_Car_Zamak",
										"Exile_Car_Tempest",
										"Exile_Car_HEMMT",
										"Exile_Car_Ural_Open_Military",
										"Exile_Car_Ural_Covered_Military"
									];

ZCP_DMS_RefuelTrucks =					[							// List of refuel trucks that can spawn
										"Exile_Car_Van_Fuel_Black",
										"Exile_Car_Van_Fuel_White",
										"Exile_Car_Van_Fuel_Red",
										"Exile_Car_Van_Fuel_Guerilla01",
										"Exile_Car_Van_Fuel_Guerilla02",
										"Exile_Car_Van_Fuel_Guerilla03"
									];

ZCP_DMS_CivilianVehicles =				[							// List of civilian vehicles that can spawn
										"Exile_Car_SUV_Red",
										"Exile_Car_Hatchback_Rusty1",
										"Exile_Car_Hatchback_Rusty2",
										"Exile_Car_Hatchback_Sport_Red",
										"Exile_Car_SUV_Red",
										"Exile_Car_Offroad_Rusty2",
										"Exile_Bike_QuadBike_Fia"
									];

ZCP_DMS_TransportHelis =				[							// List of transport helis that can spawn
										"Exile_Chopper_Hummingbird_Green",
										"Exile_Chopper_Orca_BlackCustom",
										"Exile_Chopper_Mohawk_FIA",
										"Exile_Chopper_Huron_Black",
										"Exile_Chopper_Hellcat_Green",
										"Exile_Chopper_Taru_Transport_Black"
									];

ZCP_VehicleReward = ZCP_DMS_TransportTrucks;
ZCP_DMS_DEBUG = false;


ZCP_Translations = [ // ['original','original in your language'] the %1 %2 and so on are Variables!
	['%1 capbase set up. Capture for %2 min!' , '%1 capbase set up. Capture for %2 min!'], // ZCP Alpha capbase set up. Capture for 10 min!
	['%2 is capping %1. %3min left!' , '%2 is capping %1. %3min left!'], // Zupa is capping ZCP alpha, 5min left.
	['A player' , 'A player'], // A player
	['%1 is 50%4 captured by %2. %3min left!', '%1 is 50%4 captured by %2. %3min left!'], // ZCP Alpha is 50% captured by Zupa/A player. 2min left!
	['%1 is almost captured by %2. 60s left!', '%1 is almost captured by %2. 60s left!'], // ZCP Alpha is almost captured by Zupa/A player. 60s left!
	['%1 is captured. %2.', '%1 is captured. %2.'], // ZCP Alpha is captured. (%2 is on of the 2 following translations, so leave the variable there!
	['Bombing in %1s!', 'Bombing in %1s!'], // Bombing in 600s
	['Cleanup in %1s!', 'Cleanup in %1s!'], // Cleanup in 600s
	['Captured point', 'Captured point'], // Captured point
	['Reputation', 'Reputation'], // Reputation
	['Group Reputation', 'Group Reputation'], // Group reputation
	['Package delivered, eyes on the sky!', 'Package delivered, eyes on the sky!'], // Package delivered, eyes on the sky!
	['Package delivered, eyes on the sky! Poptabs on bank!', 'Package delivered, eyes on the sky! Poptabs on bank!'], // Package delivered, eyes on the sky! Poptabs on bank!
	['Capture point is contested!', 'Capture point is contested!'], // Package delivered, eyes on the sky! Poptabs on bank!
	['Capture point is contested is no longer contested!', 'Capture point is no longer contested!'], // Capture point is contested!
	['AI Wave incoming to retake %1.', 'AI Wave incoming to retake %1.'] // Capture point is contested!
];

ZCP_CurrentMod = "Exile"; // Exile, ( Epoch coming soon again)

/* Do not change this*/
diag_log format["[ZCP]: Config loaded succesfull"];
ZCP_ConfigLoaded = true;