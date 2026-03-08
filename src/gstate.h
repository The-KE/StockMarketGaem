#ifndef GAMESTATE_H_
#define GAMESTATE_H_

// the enum jusy makes it easier to
// remember which numbers are which state
enum gamestates {
  TITLE,
  SAVE_SELECT,
  STOCK_TRADE,
  OPTIONS,
};
extern int gs_GAMESTATE = 1;

#endif
