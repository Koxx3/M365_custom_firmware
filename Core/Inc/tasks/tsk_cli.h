/*
 * UD3
 *
 * Copyright (c) 2018 Jens Kerrinnes
 * Copyright (c) 2015 Steve Ward
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "FreeRTOS.h"
#include "task.h"
#include "cli_basic.h"

#if !defined(cli_TASK_H)
#define cli_TASK_H
    

/*
 * Add user task definitions, types, includes and other things in the below
 * merge region to customize the task.
 */
/* `#START USER_TYPES_AND_DEFINES` */

/* `#END` */

void tsk_cli_Start(void *uart_ptr) ;
void tsk_cli_TaskProc(void *pvParameters);

extern port_str serial_port;
extern port_str null_port;

/*
 * Add user function prototypes in the below merge region to add user
 * functionality to the task definition.
 */
/* `#START USER_TASK_PROTOS` */

/* `#END` */

/* ------------------------------------------------------------------------ */
#endif
/* [] END OF FILE */