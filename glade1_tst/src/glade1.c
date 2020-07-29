/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++
#+  Example taken from Kevin C. O-Kane regarding gtk glade
#+  programming: 
#+     Kevin C. O'Kane
#+     kc.okane@gmail.com
#+     https://www.cs.uni.edu/~okane
#+     http://threadsafebooks.com/
#+
#+
#+  I also like the header formatting. 
#+  Testing out various features & capabilities of glade
#+  General purpose GUI tests.
#+  @author: Christopher J. Kosik
#+  @date: 24-7-2020
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include <math.h>
#include <ctype.h>

// Make Gtk GUI objects global

GtkWidget	*window;
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
GtkBuilder	*builder; 

int main( int argc, char * argv[]){

    gtk_init(&argc, &argv); // init Gtk

 
	builder = gtk_builder_new_from_file ("../xml/glade1.glade");
 
	window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));

	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fixed1 = GTK_WIDGET(gtk_builder_get_object(builder, "fixed1"));
	echoBtn = GTK_WIDGET(gtk_builder_get_object(builder, "echoBtn"));
	label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));
	label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label2"));
	radioBtn1 = GTK_WIDGET(gtk_builder_get_object(builder, "radioBtn1"));
	radioBtn2 = GTK_WIDGET(gtk_builder_get_object(builder, "radioBtn2"));
	radioBtn3 = GTK_WIDGET(gtk_builder_get_object(builder, "radioBtn3"));
	checkBtn1 = GTK_WIDGET(gtk_builder_get_object(builder, "checkBtn1"));
	toggle1 = GTK_WIDGET(gtk_builder_get_object(builder, "toggle1"));
	spin1 = GTK_WIDGET(gtk_builder_get_object(builder, "spin1"));

	gtk_widget_show(window);

	gtk_main();

	return EXIT_SUCCESS;
}

G_MODULE_EXPORT void on_echoBtn_clicked (GtkButton *b) {
	char tmp[128];
	gdouble val = gtk_spin_button_get_value (GTK_SPIN_BUTTON(spin1));
	sprintf(tmp, "spin=%d", (int) val);
	gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) tmp);
}

G_MODULE_EXPORT void on_radioBtn1_toggled(GtkRadioButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b)); //built in gtk bool
	//returns if active or not T || F return value
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Radio 1 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 1 Not Active");
	}

G_MODULE_EXPORT void on_radioBtn2_toggled(GtkRadioButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Radio 2 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 2 Not Active");
	}

G_MODULE_EXPORT void on_radioBtn3_toggled(GtkRadioButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Radio 3 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 3 Not Active");
	}

G_MODULE_EXPORT void on_checkBtn1_toggled(GtkCheckButton *b){
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "check 1 Active");
	else gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "check 1 Not Active");
}

G_MODULE_EXPORT void on_check1_toggled(GtkCheckButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Check 1 Active");
	else gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Check 1 Not Active");
	}

G_MODULE_EXPORT void on_toggle1_toggled(GtkToggleButton *b) {
	gboolean T = gtk_toggle_button_get_active(b);
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Toggle 1 Active");
	else gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Toggle 1 Not Active");
	}
