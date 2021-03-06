r5_crafted_advanced = Creature:new {
	objectName = "@droid_name:r5_crafted_advanced",
	socialGroup = "",
	pvpFaction = "",
	faction = "",
	level = 4,
	chanceHit = 0.24,
	damageMin = 109,
	damageMax = 116,
	baseXp = 0,
	baseHAM = 4000,
	baseHAMmax = 4500,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = HERD,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {
		"object/creature/npc/droid/crafted/r5_droid_advanced.iff"
	},		
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
}

CreatureTemplates:addCreatureTemplate(r5_crafted_advanced, "r5_crafted_advanced")