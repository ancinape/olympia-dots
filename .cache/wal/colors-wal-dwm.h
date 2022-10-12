static const char norm_fg[] = "#0C0A2D";
static const char norm_bg[] = "#faf0ee";
static const char norm_border[] = "#886056";

static const char sel_fg[] = "#0C0A2D";
static const char sel_bg[] = "#AF4D2A";
static const char sel_border[] = "#0C0A2D";

static const char urg_fg[] = "#0C0A2D";
static const char urg_bg[] = "#9F422A";
static const char urg_border[] = "#9F422A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
