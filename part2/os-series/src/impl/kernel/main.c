#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("LujobyOS Kernel v1.0 - UNIX-SIN-A UIDE 2026\n");
    print_str("| Luis Villarreal | Jonathan Mullo | Byron Buitron");

}
