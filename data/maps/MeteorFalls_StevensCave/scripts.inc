.set LOCALID_STEVEN, 1

MeteorFalls_StevensCave_MapScripts:: @ 823B181
	.byte 0

MeteorFalls_StevensCave_EventScript_Steven:: @ 823B182
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	goto_if_unset FLAG_STRONGER_STARTER_STONE_GET, MeteorFalls_StevensCave_EventScript_StevenGiveStone
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated:: @ 823B1CD
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

@give out mega stone for starter strong against player's
MeteorFalls_StevensCave_EventScript_StevenGiveStone:: 
	setflag FLAG_STRONGER_STARTER_STONE_GET
	msgbox MeteorFalls_StevensCave_Text_StevenGivesStone, MSGBOX_DEFAULT
	switch VAR_STARTER_MON				@give out mega stone for starter weak to player's
	case 0, MeteorFalls_StevensCave_EventScript_GiveBlazikenite
	case 1, MeteorFalls_StevensCave_EventScript_GiveSwampertite
	case 2, MeteorFalls_StevensCave_EventScript_GiveSceptilite
	release
	end

MeteorFalls_StevensCave_EventScript_GiveSceptilite::
	giveitem ITEM_SCEPTILITE
	release
	end

MeteorFalls_StevensCave_EventScript_GiveBlazikenite::
	giveitem ITEM_BLAZIKENITE
	release
	end

MeteorFalls_StevensCave_EventScript_GiveSwampertite::
	giveitem ITEM_SWAMPERTITE
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst: @ 823B1E1
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_StevenDefeat: @ 823B32D
	.string "You…\n"
	.string "I had no idea you'd become so strong…$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue: @ 823B358
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"

MeteorFalls_StevensCave_Text_StevenGivesStone:
	.string "STEVEN: But, I can tell you that\n" 
	.string "you'll probably enjoy this special\l"
	.string "stone quite a bit.$"
