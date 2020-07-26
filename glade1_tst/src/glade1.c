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
GtkWidget	*label1;
GtkBuilder	*builder; 

int main( int argc, char * argv[]){

    gtk_init(&argc, &argv); // init Gtk

//---------------------------------------------------------------------
// establish contact with xml code used to adjust widget settings
//---------------------------------------------------------------------
 
	builder = gtk_builder_new_from_file ("../xml/glade1.glade");
 
	window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));

	g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fixed1 = GTK_WIDGET(gtk_builder_get_object(builder, "fixed1"));
	echoBtn = GTK_WIDGET(gtk_builder_get_object(builder, "echoBtn"));
	label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));

	gtk_widget_show(window);

	gtk_main();

	return EXIT_SUCCESS;
}

void on_echoBtn_clicked (GtkButton *b) {

	gtk_label_set_text (GTK_LABEL(label1), (const gchar* ) "Hello World");

}