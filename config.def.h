/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"JetBrainsMonoNerdFont:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /* fg      bg */
    [SchemeNorm] = { "#ffffff", "#000000" },  // White text on black background (normal)
    [SchemeSel]  = { "#000000", "#ffffff" },  // Black text on white background (selected)
    [SchemeOut]  = { "#000000", "#00ffff" },  // Black text on cyan background (output)
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
static const char startpipe[] = "#";
