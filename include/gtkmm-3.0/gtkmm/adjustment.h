// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_ADJUSTMENT_H
#define _GTKMM_ADJUSTMENT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <glibmm/object.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkAdjustment = struct _GtkAdjustment;
using GtkAdjustmentClass = struct _GtkAdjustmentClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Adjustment_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A class representing an adjustable bounded value.
 *
 * The Gtk::Adjustment object represents a value which has an associated
 * lower and upper bound, together with step and page increments, and a page
 * size.  It is used within several gtkmm widgets, including
 * Gtk::SpinButton, Gtk::Viewport, and Gtk::Range (which is a base class for
 * Gtk::HScrollbar, Gtk::VScrollbar, Gtk::HScale, and Gtk::VScale).
 *
 * The Gtk::Adjustment object does not update the value itself. Instead it
 * is left up to the owner of the Gtk::Adjustment to control the value.
 *
 * The owner of the Gtk::Adjustment typically calls the value_changed() and
 * changed() functions after changing the value and its bounds. This results
 * in the emission of the "value_changed" or "changed" signal respectively.
 *
 */

class Adjustment : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = Adjustment;
  using CppClassType = Adjustment_Class;
  using BaseObjectType = GtkAdjustment;
  using BaseClassType = GtkAdjustmentClass;

  // noncopyable
  Adjustment(const Adjustment&) = delete;
  Adjustment& operator=(const Adjustment&) = delete;

private:  friend class Adjustment_Class;
  static CppClassType adjustment_class_;

protected:
  explicit Adjustment(const Glib::ConstructParams& construct_params);
  explicit Adjustment(GtkAdjustment* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  Adjustment(Adjustment&& src) noexcept;
  Adjustment& operator=(Adjustment&& src) noexcept;

  ~Adjustment() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkAdjustment*       gobj()       { return reinterpret_cast<GtkAdjustment*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkAdjustment* gobj() const { return reinterpret_cast<GtkAdjustment*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkAdjustment* gobj_copy();

private:

  
public:

  friend class Range;
  friend class HScrollbar;
  friend class VScrollbar;

protected:
  /** Constructor to create an Adjustment object.
   * @param value The initial value
   * @param lower The minimum value
   * @param upper The maximum value
   * @param step_increment The step increment
   * @param page_increment The page increment
   * @param page_size The page size
   */
  Adjustment(double value, double lower, double upper, double step_increment = 1, double page_increment = 10, double page_size = 0);

public:
  
  static Glib::RefPtr<Adjustment> create(double value, double lower, double upper, double step_increment =  1, double page_increment =  10, double page_size =  0);


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Emits a "changed" signal from the Adjustment.  This is typically called by the owner of the Adjustment after it has changed any of the Adjustment fields other than the value.
   * 
   * @deprecated GTK+ emits a 'changed' signal itself whenever any of the properties (other than value) change.
   */
  void changed();
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Emits a "value_changed" signal from the Adjustment.  This is typically called by the owner of the Adjustment after it has changed the Adjustment value field.
   * 
   * @deprecated GTK+ emits a 'value_changed' signal itself whenever the value changes.
   */
  void value_changed();
#endif // GTKMM_DISABLE_DEPRECATED


  /** Updates the Adjustment value to ensure that the range between the parameters @a lower and @a upper is in the current page (i.e.\ between @a value and @a value + @a page_size).  If this range is larger than the page size, then only the start of it will be in the current page.  A "changed" signal will be emitted if the value is changed.
   * 
   * @param lower The lower value.
   * @param upper The upper value.
   */
  void clamp_page(double lower, double upper);

  
  /** Sets the current value of the Adjustment
   * 
   * @param value The new value of the Adjustment.
   */
  void set_value(double value);
  
  /** Gets the current value of the adjustment.
   * See set_value().
   * 
   * @return The current value of the adjustment.
   */
  double get_value() const;

  
  /** Sets the minimum value of the adjustment.
   * 
   * When setting multiple adjustment properties via their individual
   * setters, multiple Gtk::Adjustment::signal_changed() signals will be emitted.
   * However, since the emission of the Gtk::Adjustment::signal_changed() signal
   * is tied to the emission of the Glib::Object::signal_notify() signals of the changed
   * properties, it’s possible to compress the Gtk::Adjustment::signal_changed()
   * signals into one by calling Glib::object_freeze_notify() and
   * Glib::object_thaw_notify() around the calls to the individual setters.
   * 
   * Alternatively, using a single Glib::object_set() for all the properties
   * to change, or using configure() has the same effect
   * of compressing Gtk::Adjustment::signal_changed() emissions.
   * 
   * @newin{2,14}
   * 
   * @param lower The new minimum value.
   */
  void set_lower(double lower);
  
  /** Retrieves the minimum value of the adjustment.
   * 
   * @newin{2,14}
   * 
   * @return The current minimum value of the adjustment.
   */
  double get_lower() const;

  
  /** Sets the maximum value of the adjustment.
   * 
   * Note that values will be restricted by `upper - page-size`
   * if the page-size property is nonzero.
   * 
   * See set_lower() about how to compress multiple
   * emissions of the Gtk::Adjustment::signal_changed() signal when setting
   * multiple adjustment properties.
   * 
   * @newin{2,14}
   * 
   * @param upper The new maximum value.
   */
  void set_upper(double upper);
  
  /** Retrieves the maximum value of the adjustment.
   * 
   * @newin{2,14}
   * 
   * @return The current maximum value of the adjustment.
   */
  double get_upper() const;

  
  /** Sets the step increment of the adjustment.
   * 
   * See set_lower() about how to compress multiple
   * emissions of the Gtk::Adjustment::signal_changed() signal when setting
   * multiple adjustment properties.
   * 
   * @newin{2,14}
   * 
   * @param step_increment The new step increment.
   */
  void set_step_increment(double step_increment);
  
  /** Retrieves the step increment of the adjustment.
   * 
   * @newin{2,14}
   * 
   * @return The current step increment of the adjustment.
   */
  double get_step_increment() const;

  
  /** Sets the page increment of the adjustment.
   * 
   * See set_lower() about how to compress multiple
   * emissions of the Gtk::Adjustment::signal_changed() signal when setting
   * multiple adjustment properties.
   * 
   * @newin{2,14}
   * 
   * @param page_increment The new page increment.
   */
  void set_page_increment(double page_increment);
  
  /** Retrieves the page increment of the adjustment.
   * 
   * @newin{2,14}
   * 
   * @return The current page increment of the adjustment.
   */
  double get_page_increment() const;

  
  /** Sets the page size of the adjustment.
   * 
   * See set_lower() about how to compress multiple
   * emissions of the GtkAdjustment::changed signal when setting
   * multiple adjustment properties.
   * 
   * @newin{2,14}
   * 
   * @param page_size The new page size.
   */
  void set_page_size(double page_size);
  
  /** Retrieves the page size of the adjustment.
   * 
   * @newin{2,14}
   * 
   * @return The current page size of the adjustment.
   */
  double get_page_size() const;

  
  /** Sets all properties of the adjustment at once.
   * 
   * Use this function to avoid multiple emissions of the
   * Gtk::Adjustment::signal_changed() signal. See set_lower()
   * for an alternative way of compressing multiple emissions of
   * Gtk::Adjustment::signal_changed() into one.
   * 
   * @newin{2,14}
   * 
   * @param value The new value.
   * @param lower The new minimum value.
   * @param upper The new maximum value.
   * @param step_increment The new step increment.
   * @param page_increment The new page increment.
   * @param page_size The new page size.
   */
  void configure(double value, double lower, double upper, double step_increment, double page_increment, double page_size);

  
  /** Gets the smaller of step increment and page increment.
   * 
   * @newin{3,2}
   * 
   * @return The minimum increment of @a adjustment.
   */
  double get_minimum_increment() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%changed()</tt>
   *
   * Flags: Run First, No Recurse
   *
   * Emitted when one or more of the Gtk::Adjustment properties have been
   * changed, other than the Gtk::Adjustment::property_value() property.
   */

  Glib::SignalProxy< void > signal_changed();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%value_changed()</tt>
   *
   * Flags: Run First, No Recurse
   *
   * Emitted when the Gtk::Adjustment::property_value() property has been changed.
   */

  Glib::SignalProxy< void > signal_value_changed();


  /** The value of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_value() ;

/** The value of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_value() const;

  /** The minimum value of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_lower() ;

/** The minimum value of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_lower() const;

  /** The maximum value of the adjustment.
   * Note that values will be restricted by
   * `upper - page-size` if the page-size
   * property is nonzero.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_upper() ;

/** The maximum value of the adjustment.
   * Note that values will be restricted by
   * `upper - page-size` if the page-size
   * property is nonzero.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_upper() const;

  /** The step increment of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_step_increment() ;

/** The step increment of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_step_increment() const;

  /** The page increment of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_page_increment() ;

/** The page increment of the adjustment.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_page_increment() const;

  /** The page size of the adjustment.
   * Note that the page-size is irrelevant and should be set to zero
   * if the adjustment is used for a simple scalar value, e.g. in a
   * Gtk::SpinButton.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_page_size() ;

/** The page size of the adjustment.
   * Note that the page-size is irrelevant and should be set to zero
   * if the adjustment is used for a simple scalar value, e.g. in a
   * Gtk::SpinButton.
   * 
   * @newin{2,4}
   *
   * Default value: 0
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_page_size() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_changed().
  virtual void on_changed();
  /// This is a default handler for the signal signal_value_changed().
  virtual void on_value_changed();


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Adjustment
   */
  Glib::RefPtr<Gtk::Adjustment> wrap(GtkAdjustment* object, bool take_copy = false);
}


#endif /* _GTKMM_ADJUSTMENT_H */

