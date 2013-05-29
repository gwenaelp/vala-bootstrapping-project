/* CompositedWindow.c generated by valac 0.20.1, the Vala compiler
 * generated from CompositedWindow.vala, do not modify */

/**/
/*  Copyright (C) 2011-2012 Gwenaël Pluchon*/
/**/
/*  This program is free software: you can redistribute it and/or modify*/
/*  it under the terms of the GNU General Public License as published by*/
/*  the Free Software Foundation, either version 3 of the License, or*/
/*  (at your option) any later version.*/
/**/
/*  This program is distributed in the hope that it will be useful,*/
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of*/
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the*/
/*  GNU General Public License for more details.*/
/**/
/*  You should have received a copy of the GNU General Public License*/
/*  along with this program.  If not, see <http://www.gnu.org/licenses/>.*/
/**/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include <float.h>
#include <math.h>
#include <gdk/gdk.h>


#define BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW (bootstrapingproject_widgets_composited_window_get_type ())
#define BOOTSTRAPINGPROJECT_WIDGETS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW, BootstrapingprojectWidgetsCompositedWindow))
#define BOOTSTRAPINGPROJECT_WIDGETS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW, BootstrapingprojectWidgetsCompositedWindowClass))
#define BOOTSTRAPINGPROJECT_WIDGETS_IS_COMPOSITED_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW))
#define BOOTSTRAPINGPROJECT_WIDGETS_IS_COMPOSITED_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW))
#define BOOTSTRAPINGPROJECT_WIDGETS_COMPOSITED_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW, BootstrapingprojectWidgetsCompositedWindowClass))

typedef struct _BootstrapingprojectWidgetsCompositedWindow BootstrapingprojectWidgetsCompositedWindow;
typedef struct _BootstrapingprojectWidgetsCompositedWindowClass BootstrapingprojectWidgetsCompositedWindowClass;
typedef struct _BootstrapingprojectWidgetsCompositedWindowPrivate BootstrapingprojectWidgetsCompositedWindowPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _BootstrapingprojectWidgetsCompositedWindow {
	GtkWindow parent_instance;
	BootstrapingprojectWidgetsCompositedWindowPrivate * priv;
};

struct _BootstrapingprojectWidgetsCompositedWindowClass {
	GtkWindowClass parent_class;
};


static gpointer bootstrapingproject_widgets_composited_window_parent_class = NULL;

GType bootstrapingproject_widgets_composited_window_get_type (void) G_GNUC_CONST;
enum  {
	BOOTSTRAPINGPROJECT_WIDGETS_COMPOSITED_WINDOW_DUMMY_PROPERTY
};
BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_new (void);
BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_construct (GType object_type);
BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_new_with_type (GtkWindowType window_type);
BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_construct_with_type (GType object_type, GtkWindowType window_type);
static gboolean bootstrapingproject_widgets_composited_window_real_draw (GtkWidget* base, cairo_t* cr);
static GObject * bootstrapingproject_widgets_composited_window_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);


BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_construct (GType object_type) {
	BootstrapingprojectWidgetsCompositedWindow * self = NULL;
#line 30 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	self = (BootstrapingprojectWidgetsCompositedWindow*) g_object_new (object_type, "type", GTK_WINDOW_TOPLEVEL, NULL);
#line 28 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return self;
#line 73 "CompositedWindow.c"
}


BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_new (void) {
#line 28 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return bootstrapingproject_widgets_composited_window_construct (BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW);
#line 80 "CompositedWindow.c"
}


BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_construct_with_type (GType object_type, GtkWindowType window_type) {
	BootstrapingprojectWidgetsCompositedWindow * self = NULL;
	GtkWindowType _tmp0_;
#line 35 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp0_ = window_type;
#line 35 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	self = (BootstrapingprojectWidgetsCompositedWindow*) g_object_new (object_type, "type", _tmp0_, NULL);
#line 33 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return self;
#line 93 "CompositedWindow.c"
}


BootstrapingprojectWidgetsCompositedWindow* bootstrapingproject_widgets_composited_window_new_with_type (GtkWindowType window_type) {
#line 33 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return bootstrapingproject_widgets_composited_window_construct_with_type (BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW, window_type);
#line 100 "CompositedWindow.c"
}


static gboolean bootstrapingproject_widgets_composited_window_real_draw (GtkWidget* base, cairo_t* cr) {
	BootstrapingprojectWidgetsCompositedWindow * self;
	gboolean result = FALSE;
	cairo_t* _tmp0_;
	cairo_t* _tmp1_;
	gint _tmp2_ = 0;
	gint _tmp3_;
	gint _tmp4_ = 0;
	gint _tmp5_;
	cairo_t* _tmp6_;
#line 49 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	self = (BootstrapingprojectWidgetsCompositedWindow*) base;
#line 49 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	g_return_val_if_fail (cr != NULL, FALSE);
#line 51 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp0_ = cr;
#line 51 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	cairo_set_operator (_tmp0_, CAIRO_OPERATOR_CLEAR);
#line 52 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp1_ = cr;
#line 52 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	g_object_get ((GtkWidget*) self, "width-request", &_tmp2_, NULL);
#line 52 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp3_ = _tmp2_;
#line 52 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	g_object_get ((GtkWidget*) self, "height-request", &_tmp4_, NULL);
#line 52 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp5_ = _tmp4_;
#line 52 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	cairo_rectangle (_tmp1_, (gdouble) 0, (gdouble) 0, (gdouble) _tmp3_, (gdouble) _tmp5_);
#line 53 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp6_ = cr;
#line 53 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	cairo_fill (_tmp6_);
#line 55 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	result = TRUE;
#line 55 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return result;
#line 142 "CompositedWindow.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return self ? g_object_ref (self) : NULL;
#line 149 "CompositedWindow.c"
}


static GObject * bootstrapingproject_widgets_composited_window_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	BootstrapingprojectWidgetsCompositedWindow * self;
	GdkScreen* _tmp0_ = NULL;
	GdkScreen* screen;
	GdkScreen* _tmp1_;
	GdkVisual* _tmp2_ = NULL;
	GdkVisual* _tmp3_;
	GdkVisual* _tmp4_;
	GdkVisual* _tmp5_;
	GdkVisual* _tmp9_;
#line 38 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	parent_class = G_OBJECT_CLASS (bootstrapingproject_widgets_composited_window_parent_class);
#line 38 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 38 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, BOOTSTRAPINGPROJECT_WIDGETS_TYPE_COMPOSITED_WINDOW, BootstrapingprojectWidgetsCompositedWindow);
#line 40 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	gtk_widget_set_app_paintable ((GtkWidget*) self, TRUE);
#line 41 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	gtk_window_set_decorated ((GtkWindow*) self, FALSE);
#line 42 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	gtk_window_set_resizable ((GtkWindow*) self, FALSE);
#line 43 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	gtk_widget_set_double_buffered ((GtkWidget*) self, TRUE);
#line 45 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp0_ = gtk_window_get_screen ((GtkWindow*) self);
#line 45 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	screen = _tmp0_;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp1_ = screen;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp2_ = gdk_screen_get_rgba_visual (_tmp1_);
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp4_ = _tmp3_;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp5_ = _tmp4_;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	if (_tmp5_ == NULL) {
#line 195 "CompositedWindow.c"
		GdkScreen* _tmp6_;
		GdkVisual* _tmp7_ = NULL;
		GdkVisual* _tmp8_;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
		_tmp6_ = screen;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
		_tmp7_ = gdk_screen_get_system_visual (_tmp6_);
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
		_tmp8_ = _g_object_ref0 (_tmp7_);
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
		_g_object_unref0 (_tmp4_);
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
		_tmp4_ = _tmp8_;
#line 209 "CompositedWindow.c"
	}
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_tmp9_ = _tmp4_;
#line 46 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	gtk_widget_set_visual ((GtkWidget*) self, _tmp9_);
#line 38 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	_g_object_unref0 (_tmp4_);
#line 38 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	return obj;
#line 219 "CompositedWindow.c"
}


static void bootstrapingproject_widgets_composited_window_class_init (BootstrapingprojectWidgetsCompositedWindowClass * klass) {
#line 26 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	bootstrapingproject_widgets_composited_window_parent_class = g_type_class_peek_parent (klass);
#line 26 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	GTK_WIDGET_CLASS (klass)->draw = bootstrapingproject_widgets_composited_window_real_draw;
#line 26 "/home/gwen/Programmation/vala/vala-bootstrapping-project/libtoolproject/lib/Widgets/CompositedWindow.vala"
	G_OBJECT_CLASS (klass)->constructor = bootstrapingproject_widgets_composited_window_constructor;
#line 230 "CompositedWindow.c"
}


static void bootstrapingproject_widgets_composited_window_instance_init (BootstrapingprojectWidgetsCompositedWindow * self) {
}


/**
 * A {@link Gtk.Window} with compositing support enabled.
 * The default expose event will draw a completely transparent window.
 */
GType bootstrapingproject_widgets_composited_window_get_type (void) {
	static volatile gsize bootstrapingproject_widgets_composited_window_type_id__volatile = 0;
	if (g_once_init_enter (&bootstrapingproject_widgets_composited_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BootstrapingprojectWidgetsCompositedWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) bootstrapingproject_widgets_composited_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BootstrapingprojectWidgetsCompositedWindow), 0, (GInstanceInitFunc) bootstrapingproject_widgets_composited_window_instance_init, NULL };
		GType bootstrapingproject_widgets_composited_window_type_id;
		bootstrapingproject_widgets_composited_window_type_id = g_type_register_static (GTK_TYPE_WINDOW, "BootstrapingprojectWidgetsCompositedWindow", &g_define_type_info, 0);
		g_once_init_leave (&bootstrapingproject_widgets_composited_window_type_id__volatile, bootstrapingproject_widgets_composited_window_type_id);
	}
	return bootstrapingproject_widgets_composited_window_type_id__volatile;
}



