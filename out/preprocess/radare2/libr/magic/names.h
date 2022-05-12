# 0 "project/radare2/libr/magic/names.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "project/radare2/libr/magic/names.h"
# 60 "project/radare2/libr/magic/names.h"
static const struct {
 char human[48];
 char mime[16];
} types[] = {
 { "C program", "text/x-c", },
 { "C++ program", "text/x-c++" },
 { "make commands", "text/x-makefile" },
 { "PL/1 program", "text/x-pl1" },
 { "assembler program", "text/x-asm" },
 { "English", "text/plain" },
 { "Pascal program", "text/x-pascal" },
 { "mail", "text/x-mail" },
 { "news", "text/x-news" },
 { "Java program", "text/x-java" },
 { "HTML document", "text/html", },
 { "BCPL program", "text/x-bcpl" },
 { "M4 macro language pre-processor", "text/x-m4" },
 { "PO (gettext message catalogue)", "text/x-po" },
 { "cannot happen error on names.h/types", "error/x-error" }
};
# 117 "project/radare2/libr/magic/names.h"
static const struct names {
 char name[14];
 short type;
} names[] = {


 {"msgid", 13},
 {"dnl", 12},
 {"import", 9},
 {"\"libhdr\"", 11},
 {"\"LIBHDR\"", 11},
 {"//", 1},
 {"template", 1},
 {"virtual", 1},
 {"class", 1},
 {"public:", 1},
 {"private:", 1},
 {"/*", 0},
 {"#include", 0},
 {"char", 0},
 {"The", 5},
 {"the", 5},
 {"double", 0},
 {"extern", 0},
 {"float", 0},
 {"struct", 0},
 {"union", 0},
 {"CFLAGS", 2},
 {"LDFLAGS", 2},
 {"all:", 2},
 {".PRECIOUS", 2},
 {".ascii", 4},
 {".asciiz", 4},
 {".byte", 4},
 {".even", 4},
 {".globl", 4},
 {".text", 4},
 {"clr", 4},
 {"(input,", 6},
 {"program", 6},
 {"record", 6},
 {"dcl", 3},
 {"Received:", 7},
 {">From", 7},
 {"Return-Path:",7},
 {"Cc:", 7},
 {"Newsgroups:", 8},
 {"Path:", 8},
 {"Organization:",8},
 {"href=", 10},
 {"HREF=", 10},
 {"<body", 10},
 {"<BODY", 10},
 {"<html", 10},
 {"<HTML", 10},
 {"<!--", 10},
};
