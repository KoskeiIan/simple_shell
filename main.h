#ifndef _ALX_MAIN_H
#define _ALX_MAIN_H

#include <dirent.h>
#include <elf.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef NULL
#define NULL ((void *)0)
#endif
#ifndef MIN
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#endif
#ifdef MAX_EXIT_CODE
#undef MAX_EXIT_CODE
#endif
/* The maximum value of an exit code */
#define MAX_EXIT_CODE 256
#ifdef HISTORY_FILE
#undef HISTORY_FILE
#endif
/* The file name used to store this shell's history */
#define HISTORY_FILE "/.simple_shell_history"
/* The string representation of INT32_MAX */
#ifndef MAX_INT_STR
#define MAX_INT_STR "2147483647"
#endif
#define take(r) ti##r
#define gm(r) gm##r
#define stt(k) struct tm
#define ht(tt) tt->tm_hour
#define dt(tt) tt->tm_mday

#include "main_types.h"

int sig(int c);

/* ******** Program (simple_shell.c) ******** */
