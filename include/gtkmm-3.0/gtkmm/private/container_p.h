// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CONTAINER_P_H
#define _GTKMM_CONTAINER_P_H


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Container_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Container;
  using BaseObjectType = GtkContainer;
  using BaseClassType = GtkContainerClass;
  using CppClassParent = Gtk::Widget_Class;
  using BaseClassParent = GtkWidgetClass;

  friend class Container;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void add_callback(GtkContainer* self, GtkWidget* p0);
  static void remove_callback(GtkContainer* self, GtkWidget* p0);
  static void check_resize_callback(GtkContainer* self);
  static void set_focus_child_callback(GtkContainer* self, GtkWidget* p0);
    static void remove_callback_normal(GtkContainer* self, GtkWidget* p0);
  
  //Callbacks (virtual functions):
  static GType child_type_vfunc_callback(GtkContainer* self);
  static void forall_vfunc_callback(GtkContainer* self, gboolean include_internals, GtkCallback callback, gpointer callback_data);
  static gchar* composite_name_vfunc_callback(GtkContainer* self, GtkWidget* child);
  static void set_child_property_vfunc_callback(GtkContainer* self, GtkWidget* child, guint property_id, const GValue* value, GParamSpec* pspec);
  static void get_child_property_vfunc_callback(GtkContainer* self, GtkWidget* child, guint property_id, GValue* value, GParamSpec* pspec);
};


} // namespace Gtk


#endif /* _GTKMM_CONTAINER_P_H */

