#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include <math.h>
#include <ctype.h>


GtkWindow	*mainWindow;
GtkWidget   *newwindow,*aboutWindow;

GtkWidget	*fixed1;
GtkWidget	*echoBtn;
GtkWidget	*radioBtn1;
GtkWidget	*radioBtn2;
GtkWidget	*radioBtn3;
GtkWidget   *checkBtn1;
GtkWidget	*label1;
GtkWidget	*label2;
GtkWidget	*toggle1;
GtkWidget	*spin1;
GtkWidget	*combo1;
GtkWidget	*entry1;
GtkWidget   *color1;
GtkWidget   *font1;
GtkWidget	*volume1;
GtkWidget	*scroll1;
GtkWidget   *switch1;


GtkBuilder	*builder;