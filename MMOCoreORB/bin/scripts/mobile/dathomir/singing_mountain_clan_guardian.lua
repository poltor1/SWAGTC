singing_mountain_clan_guardian = Creature:new {
	objectName = "@mob/creature_names:singing_mtn_clan_guardian",
	socialGroup = "mtn_clan",
	pvpFaction = "mtn_clan",
	faction = "mtn_clan",
	level = 156,
	chanceHit = 85,
	damageMin = 895,
	damageMax = 1500,
	baseXp = 14789,
	baseHAM = 81000,
	baseHAMmax = 99000,
	armor = 1,
	resists = {100,20,20,100,100,100,100,100,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_sing_mt_clan_guardian.iff"},
	lootGroups = {
		{
			groups = {
				{group = "junk", chance = 1500000},
				{group = "crystals_select", chance = 500000},
				{group = "color_crystals", chance = 500000},
				{group = "armor_attachments", chance = 450000},
				{group = "clothing_attachments", chance = 450000},
				{group = "melee_weapons", chance = 2600000},
				{group = "rifles", chance = 1000000},
				{group = "pistols", chance = 1000000},
				{group = "carbines", chance = 1000000},
				{group = "wearables_common", chance = 500000},
				{group = "wearables_uncommon", chance = 500000}
			},
			lootChance = 4100000
		}			
	},
	weapons = {"mixed_force_weapons"},
	conversationTemplate = "",
	attacks = merge(brawlermaster,pikemanmaster,forcewielder)
}

CreatureTemplates:addCreatureTemplate(singing_mountain_clan_guardian, "singing_mountain_clan_guardian")
