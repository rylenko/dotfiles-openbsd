#define START "\x1b["
#define END "m"

/* Blue */
#define BLUE_FG_INNER "38;2;56;156;214"
#define BLUE_BG_INNER "48;2;56;156;214"
#define BLUE_FG START BLUE_FG_INNER END
#define BLUE_BG START BLUE_BG_INNER END

#define THEME_ITEM_NORMAL()
#define THEME_ITEM_FOCUS()
#define THEME_ITEM_BOLD()             do { attrmode(ATTR_BOLD_ON);  } while(0)
#define THEME_ITEM_SELECTED()         do { if (p->focused) ttywrite(BLUE_FG); } while(0)
#define THEME_SCROLLBAR_FOCUS()       do { ttywrite(BLUE_FG);    } while(0)
#define THEME_SCROLLBAR_NORMAL()      do { ttywrite(BLUE_FG);    } while(0)
#define THEME_SCROLLBAR_TICK_FOCUS()  do { ttywrite(BLUE_BG);    } while(0)
#define THEME_SCROLLBAR_TICK_NORMAL() do { ttywrite(BLUE_BG);    } while(0)
#define THEME_LINEBAR()               do { ttywrite(BLUE_FG);    } while(0)
#define THEME_STATUSBAR()             do { attrmode(ATTR_BOLD_ON); ttywrite(BLUE_FG); } while(0)
#define THEME_INPUT_LABEL()
#define THEME_INPUT_NORMAL()
