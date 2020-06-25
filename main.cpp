#include "BearLibTerminal.h"

int main(void) {
  terminal_open();

  terminal_set("window: size=50x25; font: ./Roboto-Medium.ttf, size=12");

  terminal_print(1, 1, "Hello, world!");
  terminal_refresh();

  // Wait until user close the window
  while (terminal_read() != TK_CLOSE)
    ;

  terminal_close();
  return 0;
}
