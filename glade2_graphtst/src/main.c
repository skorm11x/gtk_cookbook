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

#ifndef MAIN_HEADER
#define MAIN_HEADER
#include "main.h"
#endif

void main_init();


int main( int argc, char * argv[]){

    gtk_init(&argc, &argv); // init Gtk
	main_init();

	return EXIT_SUCCESS;
}

/*
	Initialize all GTK3+ objects, glade files, set defaults on windows.
*/
void main_init(){
	builder = gtk_builder_new_from_file ("./xml/main.glade");
 
	mainWindow = GTK_WINDOW(gtk_builder_get_object(builder, "main_window"));
	newwindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(newwindow,"new window");
	gtk_window_set_default_size(newwindow,500,500);

	aboutWindow = gtk_about_dialog_new();


	
	//gtk_window_fullscreen(window); set fullscreen
	gtk_window_set_title(mainWindow,"HemoFlux_v0.0.2");
	//gtk_window_maximize(window);
	gtk_window_set_default_size(mainWindow,750,750);
	int windowWidth = gtk_widget_get_allocated_width(newwindow);
	int windowHeight = gtk_widget_get_allocated_height(newwindow);
	printf("Current window width: %d, window height: %d\n",windowWidth,windowHeight);

	g_signal_connect(mainWindow, "destroy", G_CALLBACK(gtk_main_quit), NULL);

        gtk_builder_connect_signals(builder, NULL);

	fixed1 = GTK_WIDGET(gtk_builder_get_object(builder, "fixed1"));
	echoBtn = GTK_WIDGET(gtk_builder_get_object(builder, "echoBtn"));
	label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));
	label2 = GTK_WIDGET(gtk_builder_get_object(builder, "label2"));
	radioBtn1 = GTK_WIDGET(gtk_builder_get_object(builder, "radioBtn1"));
	radioBtn2 = GTK_WIDGET(gtk_builder_get_object(builder, "radioBtn2"));
	radioBtn3 = GTK_WIDGET(gtk_builder_get_object(builder, "radioBtn3"));
	checkBtn1 = GTK_WIDGET(gtk_builder_get_object(builder, "checkBtn1"));
	toggle1 = GTK_WIDGET(gtk_builder_get_object(builder, "toggle1"));
	spin1 = GTK_WIDGET(gtk_builder_get_object(builder, "spin1"));
	switch1 = GTK_WIDGET(gtk_builder_get_object(builder, "switch1"));
	combo1 = GTK_WIDGET(gtk_builder_get_object(builder, "combo1"));
	entry1 = GTK_WIDGET(gtk_builder_get_object(builder, "entry1"));
	font1 = GTK_WIDGET(gtk_builder_get_object(builder, "font1"));
	color1 = GTK_WIDGET(gtk_builder_get_object(builder, "color1"));
	volume1 = GTK_WIDGET(gtk_builder_get_object(builder, "volume1"));
	scroll1 = GTK_WIDGET(gtk_builder_get_object(builder, "scroll1"));

	gtk_widget_show(GTK_WIDGET(newwindow));
	gtk_widget_show(GTK_WIDGET(mainWindow));
	gtk_widget_show(GTK_WIDGET(aboutWindow));

	gtk_main(); //run the main loop (main thread) until gtk_main_quit() is called
}


