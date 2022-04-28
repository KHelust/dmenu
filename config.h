/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;       /* -b  option; if 0, dmenu appears at bottom */
static int centered = 0;     /* -c option; centers dmenu on screen */
static int min_width = 500;  /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Arimo Nerd Font:Bold:size=12:antialias=true:autohint=true"
};
static const char *prompt      = NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
  /*     Scheme            fg         bg       */
	[SchemeNorm] = { "#c3c7d1", "#282c34" },
	[SchemeSel] = { "#161925", "#c74ded" },
	[SchemeOut] = { "#282c34", "#ed254e" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
