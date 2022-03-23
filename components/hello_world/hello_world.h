// This is the header file of sample component
// Only 'stdio.h' is important because it has 'printf' function
// Other all header files just added for understanding
#include <stdio.h>              
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"

// this function will print "Hello World!" on console
void print_hello_world();