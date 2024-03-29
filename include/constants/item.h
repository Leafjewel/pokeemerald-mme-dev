#ifndef GUARD_ITEM_CONSTANTS_H
#define GUARD_ITEM_CONSTANTS_H

// These constants are used in gItems
#define POCKET_NONE         0
#define POCKET_ITEMS        1
#define POCKET_MEDICINE     2
#define POCKET_POKE_BALLS   3
#define POCKET_BATTLE_ITEMS 4
#define POCKET_BERRIES      5
#define POCKET_POWER_UP     6
#define POCKET_TM_HM        7
#define POCKET_KEY_ITEMS    8

#define ITEMS_POCKET       0
#define MEDICINE_POCKET    1
#define BALLS_POCKET       2
#define BATTLEITEMS_POCKET 3
#define BERRIES_POCKET     4
#define POWERUP_POCKET     5
#define TMHM_POCKET        6
#define KEYITEMS_POCKET    7
#define POCKETS_COUNT      8

// The TM/HM pocket is the largest pocket, so the maximum amount of items
// in a pocket is its count + 1 for the cancel option
#define MAX_POCKET_ITEMS   (BAG_TMHM_COUNT + 1)

//everything in this file changed for More Bag Pockets
#endif // GUARD_ITEM_CONSTANTS_H
