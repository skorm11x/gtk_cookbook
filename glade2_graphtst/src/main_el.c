/**
 * Event listeners for main window
 */
#ifndef MAIN_HEADER
#define MAIN_HEADER
#include "main.h"
#endif

//G_MODULE_EXPORT is used for flagging dos .dll  
G_MODULE_EXPORT void on_echoBtn_clicked (GtkButton *b) {
	char tmp[128];
	gdouble val = gtk_spin_button_get_value (GTK_SPIN_BUTTON(spin1));
	sprintf(tmp, "spin=%d", (int) val);
	gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) tmp);
}

G_MODULE_EXPORT void on_radioBtn1_toggled(GtkRadioButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b)); //built in gtk bool
	//returns if active or not T || F return value
	if (T) gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 1 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 1 Not Active");
	}

G_MODULE_EXPORT void on_radioBtn2_toggled(GtkRadioButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 2 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 2 Not Active");
	}

G_MODULE_EXPORT void on_radioBtn3_toggled(GtkRadioButton *b) {
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 3 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "Radio 3 Not Active");
	}

G_MODULE_EXPORT void on_checkBtn1_toggled(GtkCheckButton *b){
	gboolean T = gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(b));
	if (T) gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "check 1 Active");
	else gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) "check 1 Not Active");
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

G_MODULE_EXPORT void on_switch1_state_set(GtkSwitch *s){
	gboolean T = gtk_switch_get_active(s);
	if (T) gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Switch 1 Active");
	else gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Switch 1 Not Active");
}

G_MODULE_EXPORT void on_entry1_changed(GtkEntry *e) {
	char tmp[128];
	sprintf(tmp, "entry=%s", gtk_entry_get_text(e));
	gtk_label_set_text (GTK_LABEL(label2), (const gchar* ) tmp);
	}

G_MODULE_EXPORT void on_combo1_changed(GtkComboBox *c) {
	
	}

G_MODULE_EXPORT void on_color1_color_set(GtkColorButton *c){
	GdkRGBA color;
	gtk_color_chooser_get_rgba (GTK_COLOR_CHOOSER(c), &color);
	printf("red %f\n", color.red);
	printf("green %f\n", color.green);
	printf("blue %f\n", color.blue);
	printf("alpha %f\n", color.alpha);
}

G_MODULE_EXPORT void on_file1_file_set(GtkFileChooserButton *f) {
	printf("file name = %s\n", gtk_file_chooser_get_filename (GTK_FILE_CHOOSER(f)) );
	printf("folder name = %s\n", gtk_file_chooser_get_current_folder (GTK_FILE_CHOOSER(f)) );

}

G_MODULE_EXPORT void on_font1_font_set(GtkFontButton *f1) {
	printf("font name = %s\n", gtk_font_button_get_font_name (f1) );
	//set the font of something else etc. 
}

G_MODULE_EXPORT void on_volume1_value_changed (GtkVolumeButton *v1) {

	/*******************************************************************
	The function:
		void gtk_scale_button_set_value (GtkScaleButton *, gdouble)
	can be used to set the volume control to a particular value.
	********************************************************************/

	printf("volume scale = %f\n", gtk_scale_button_get_value(GTK_SCALE_BUTTON(v1)) );
}

G_MODULE_EXPORT void on_scroll1_value_changed(GtkRange *r) {
	gdouble x = gtk_range_get_value (r);
	printf("scroll = %d\n", (int) x );
}