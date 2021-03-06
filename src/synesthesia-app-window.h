#ifndef SYNESTHESIA_APP_WINDOW_H
#define SYNESTHESIA_APP_WINDOW_H

#include <gtk/gtk.h>
#include <epoxy/gl.h>
#include "synesthesia-app.h"
#include "opengl-backend.h"

G_BEGIN_DECLS

#define SYNESTHESIA_TYPE_APP_WINDOW (synesthesia_app_window_get_type ())

G_DECLARE_FINAL_TYPE (SynesthesiaAppWindow, synesthesia_app_window, SYNESTHESIA, APP_WINDOW, GtkApplicationWindow)

gint synesthesia_app_window_get_isfullscreen (SynesthesiaAppWindow *self);
void synesthesia_app_window_set_isfullscreen (SynesthesiaAppWindow *self,
	gint isfullscreen);

void window_set_buffer_ptr(SynesthesiaAppWindow *window, gpointer getbuffer);

GtkWidget *synesthesia_app_window_new (SynesthesiaApp *app);

void separate_window(SynesthesiaAppWindow *self, gboolean above);
void main_window(SynesthesiaAppWindow *self); 
void set_spectrum();
void toggle_spectype(SynesthesiaAppWindow *window);
void synesthesia_app_window_set_opacity (SynesthesiaAppWindow *self,
	gfloat opacity);
gfloat synesthesia_app_window_get_opacity (SynesthesiaAppWindow *self);
void synesthesia_app_window_set_oscgain (SynesthesiaAppWindow *self,
	gfloat gain);
gfloat synesthesia_app_window_get_oscgain (SynesthesiaAppWindow *self);
void synesthesia_app_window_set_spegain (SynesthesiaAppWindow *self,
	gfloat gain);
gfloat synesthesia_app_window_get_specgain (SynesthesiaAppWindow *self);
void set_oscilloscope();
GtkGLArea* synesthesia_app_window_get_glarea(SynesthesiaAppWindow *self);
GLuint* synesthesia_app_window_get_program(SynesthesiaAppWindow *self);

#endif
