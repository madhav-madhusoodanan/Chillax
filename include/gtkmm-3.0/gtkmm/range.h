// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_RANGE_H
#define _GTKMM_RANGE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/widget.h>
#include <gtkmm/enums.h> //For SensitivityType.
#include <gtkmm/border.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkRange = struct _GtkRange;
using GtkRangeClass = struct _GtkRangeClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Range_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

class Adjustment;

/** Base class for widgets which visualize an adjustment.
 *
 * @ingroup Widgets
 */

class Range : public Widget
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Range CppObjectType;
  typedef Range_Class CppClassType;
  typedef GtkRange BaseObjectType;
  typedef GtkRangeClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Range(Range&& src) noexcept;
  Range& operator=(Range&& src) noexcept;

  // noncopyable
  Range(const Range&) = delete;
  Range& operator=(const Range&) = delete;

  ~Range() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Range_Class;
  static CppClassType range_class_;

protected:
  explicit Range(const Glib::ConstructParams& construct_params);
  explicit Range(GtkRange* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkRange*       gobj()       { return reinterpret_cast<GtkRange*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkRange* gobj() const { return reinterpret_cast<GtkRange*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_value_changed().
  virtual void on_value_changed();
  /// This is a default handler for the signal signal_adjust_bounds().
  virtual void on_adjust_bounds(double new_value);
  /// This is a default handler for the signal signal_move_slider().
  virtual void on_move_slider(ScrollType scroll);
  /// This is a default handler for the signal signal_change_value().
  virtual bool on_change_value(ScrollType scroll, double new_value);


private:

protected:
  Range();
public:

  
  /** Sets the adjustment to be used as the “model” object for this range
   * widget. The adjustment indicates the current range value, the
   * minimum and maximum range values, the step/page increments used
   * for keybindings and scrolling, and the page size. The page size
   * is normally 0 for Gtk::Scale and nonzero for Gtk::Scrollbar, and
   * indicates the size of the visible area of the widget being scrolled.
   * The page size affects the size of the scrollbar slider.
   * 
   * @param adjustment A Gtk::Adjustment.
   */
  void set_adjustment(const Glib::RefPtr<Adjustment>& adjustment);
  void unset_adjustment();

  
  /** Get the Gtk::Adjustment which is the “model” object for Gtk::Range.
   * See set_adjustment() for details.
   * The return value does not have a reference added, so should not
   * be unreferenced.
   * 
   * @return A Gtk::Adjustment.
   */
  Glib::RefPtr<Adjustment> get_adjustment();
  
  /** Get the Gtk::Adjustment which is the “model” object for Gtk::Range.
   * See set_adjustment() for details.
   * The return value does not have a reference added, so should not
   * be unreferenced.
   * 
   * @return A Gtk::Adjustment.
   */
  Glib::RefPtr<const Adjustment> get_adjustment() const;
  
  /** Ranges normally move from lower to higher values as the
   * slider moves from top to bottom or left to right. Inverted
   * ranges have higher values at the top or on the right rather than
   * on the bottom or left.
   * 
   * @param setting <tt>true</tt> to invert the range.
   */
  void set_inverted(bool setting =  true);
  
  /** Gets the value set by set_inverted().
   * 
   * @return <tt>true</tt> if the range is inverted.
   */
  bool get_inverted() const;
  
  /** If a range is flippable, it will switch its direction if it is
   * horizontal and its direction is Gtk::TEXT_DIR_RTL.
   * 
   * See Gtk::Widget::get_direction().
   * 
   * @newin{2,18}
   * 
   * @param flippable <tt>true</tt> to make the range flippable.
   */
  void set_flippable(bool flippable =  true);
  
  /** Gets the value set by set_flippable().
   * 
   * @newin{2,18}
   * 
   * @return <tt>true</tt> if the range is flippable.
   */
  bool get_flippable() const;

  
  /** Sets whether the range’s slider has a fixed size, or a size that
   * depends on its adjustment’s page size.
   * 
   * This function is useful mainly for Gtk::Range subclasses.
   * 
   * @newin{2,20}
   * 
   * @param size_fixed <tt>true</tt> to make the slider size constant.
   */
  void set_slider_size_fixed(bool size_fixed =  true);
  
  /** This function is useful mainly for Gtk::Range subclasses.
   * 
   * See set_slider_size_fixed().
   * 
   * @newin{2,20}
   * 
   * @return Whether the range’s slider has a fixed size.
   */
  bool get_slider_size_fixed() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Sets the minimum size of the range’s slider.
   * 
   * This function is useful mainly for Gtk::Range subclasses.
   * 
   * @newin{2,20}
   * 
   * Deprecated: 3.20: Use the min-height/min-width CSS properties on the slider
   * node.
   * 
   * @deprecated Use the min-height/min-width CSS properties on the slider node.
   * 
   * @param min_size The slider’s minimum size.
   */
  void set_min_slider_size(bool min_size =  true);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** This function is useful mainly for Gtk::Range subclasses.
   * 
   * See set_min_slider_size().
   * 
   * @newin{2,20}
   * 
   * Deprecated: 3.20: Use the min-height/min-width CSS properties on the slider
   * node.
   * 
   * @deprecated Use the min-height/min-width CSS properties on the slider node.
   * 
   * @return The minimum size of the range’s slider.
   */
  int get_min_slider_size() const;
#endif // GTKMM_DISABLE_DEPRECATED


  /** This method returns the area that contains the range's trough
   * and its steppers, in the widget's Gdk::Window coordinates.
   *
   * This method is useful mainly for Range subclasses.
   *
   * @result The range rectangle.
   *
   * @@newin{2,20}
   */
  Gdk::Rectangle get_range_rect() const;
  

  /** This function returns sliders range along the long dimension,
   * in widget->window coordinates.
   * 
   * This function is useful mainly for Gtk::Range subclasses.
   * 
   * @newin{2,20}
   * 
   * @param slider_start Return location for the slider's
   * start, or <tt>nullptr</tt>.
   * @param slider_end Return location for the slider's
   * end, or <tt>nullptr</tt>.
   */
  void get_slider_range(int& slider_start, int& slider_end) const;

  
  /** Sets the sensitivity policy for the stepper that points to the
   * 'lower' end of the GtkRange’s adjustment.
   * 
   * @newin{2,10}
   * 
   * @param sensitivity The lower stepper’s sensitivity policy.
   */
  void set_lower_stepper_sensitivity(SensitivityType sensitivity);
  
  /** Gets the sensitivity policy for the stepper that points to the
   * 'lower' end of the GtkRange’s adjustment.
   * 
   * @newin{2,10}
   * 
   * @return The lower stepper’s sensitivity policy.
   */
  SensitivityType get_lower_stepper_sensitivity() const;
  
  /** Sets the sensitivity policy for the stepper that points to the
   * 'upper' end of the GtkRange’s adjustment.
   * 
   * @newin{2,10}
   * 
   * @param sensitivity The upper stepper’s sensitivity policy.
   */
  void set_upper_stepper_sensitivity(SensitivityType sensitivity);
  
  /** Gets the sensitivity policy for the stepper that points to the
   * 'upper' end of the GtkRange’s adjustment.
   * 
   * @newin{2,10}
   * 
   * @return The upper stepper’s sensitivity policy.
   */
  SensitivityType get_upper_stepper_sensitivity() const;

  
  /** Sets the step and page sizes for the range.
   * The step size is used when the user clicks the Gtk::Scrollbar
   * arrows or moves Gtk::Scale via arrow keys. The page size
   * is used for example when moving via Page Up or Page Down keys.
   * 
   * @param step Step size.
   * @param page Page size.
   */
  void set_increments(double step, double page);
  
  /** Sets the allowable values in the Gtk::Range, and clamps the range
   * value to be between @a min and @a max. (If the range has a non-zero
   * page size, it is clamped between @a min and @a max - page-size.)
   * 
   * @param min Minimum range value.
   * @param max Maximum range value.
   */
  void set_range(double min, double max);
  
  /** Sets the current value of the range; if the value is outside the
   * minimum or maximum range values, it will be clamped to fit inside
   * them. The range emits the Gtk::Range::signal_value_changed() signal if the 
   * value changes.
   * 
   * @param value New value of the range.
   */
  void set_value(double value);
  
  /** Gets the current value of the range.
   * 
   * @return Current value of the range.
   */
  double get_value() const;

  
  /** Sets whether a graphical fill level is show on the trough. See
   * set_fill_level() for a general description of the fill
   * level concept.
   * 
   * @newin{2,12}
   * 
   * @param show_fill_level Whether a fill level indicator graphics is shown.
   */
  void set_show_fill_level(bool show_fill_level =  true);
  
  /** Gets whether the range displays the fill level graphically.
   * 
   * @newin{2,12}
   * 
   * @return <tt>true</tt> if @a range shows the fill level.
   */
  bool get_show_fill_level() const;
  
  /** Sets whether the slider is restricted to the fill level. See
   * set_fill_level() for a general description of the fill
   * level concept.
   * 
   * @newin{2,12}
   * 
   * @param restrict_to_fill_level Whether the fill level restricts slider movement.
   */
  void set_restrict_to_fill_level(bool restrict_to_fill_level =  true);
  
  /** Gets whether the range is restricted to the fill level.
   * 
   * @newin{2,12}
   * 
   * @return <tt>true</tt> if @a range is restricted to the fill level.
   */
  bool get_restrict_to_fill_level() const;
  
  /** Set the new position of the fill level indicator.
   * 
   * The “fill level” is probably best described by its most prominent
   * use case, which is an indicator for the amount of pre-buffering in
   * a streaming media player. In that use case, the value of the range
   * would indicate the current play position, and the fill level would
   * be the position up to which the file/stream has been downloaded.
   * 
   * This amount of prebuffering can be displayed on the range’s trough
   * and is themeable separately from the trough. To enable fill level
   * display, use set_show_fill_level(). The range defaults
   * to not showing the fill level.
   * 
   * Additionally, it’s possible to restrict the range’s slider position
   * to values which are smaller than the fill level. This is controller
   * by set_restrict_to_fill_level() and is by default
   * enabled.
   * 
   * @newin{2,12}
   * 
   * @param fill_level The new position of the fill level indicator.
   */
  void set_fill_level(double fill_level);
  
  /** Gets the current position of the fill level indicator.
   * 
   * @newin{2,12}
   * 
   * @return The current fill level.
   */
  double get_fill_level() const;
  
  /** Sets the number of digits to round the value to when
   * it changes. See Gtk::Range::signal_change_value().
   * 
   * @newin{2,24}
   * 
   * @param round_digits The precision in digits, or -1.
   */
  void set_round_digits(int round_digits);
  
  /** Gets the number of digits to round the value to when
   * it changes. See Gtk::Range::signal_change_value().
   * 
   * @newin{2,24}
   * 
   * @return The number of digits to round to.
   */
  int get_round_digits() const;

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%value_changed()</tt>
   *
   * Flags: Run Last
   *
   * Emitted when the range value changes.
   */

  Glib::SignalProxy< void > signal_value_changed();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%adjust_bounds(double new_value)</tt>
   *
   * Flags: Run Last
   *
   * Emitted before clamping a value, to give the application a
   * chance to adjust the bounds.
   * 
   * @param new_value The value before we clamp.
   */

  Glib::SignalProxy< void,double > signal_adjust_bounds();

  
  /**
   * @par Slot Prototype:
   * <tt>void on_my_%move_slider(ScrollType scroll)</tt>
   *
   * Flags: Run Last, Action
   *
   * Virtual function that moves the slider. Used for keybindings.
   * 
   * @param scroll How to move the slider.
   */

  Glib::SignalProxy< void,ScrollType > signal_move_slider();

  
  /**
   * @par Slot Prototype:
   * <tt>bool on_my_%change_value(ScrollType scroll, double new_value)</tt>
   *
   * Flags: Run Last
   *
   * The Gtk::Range::signal_change_value() signal is emitted when a scroll action is
   * performed on a range.  It allows an application to determine the
   * type of scroll event that occurred and the resultant new value.
   * The application can handle the event itself and return <tt>true</tt> to
   * prevent further processing.  Or, by returning <tt>false</tt>, it can pass
   * the event to other handlers until the default GTK+ handler is
   * reached.
   * 
   * The value parameter is unrounded.  An application that overrides
   * the GtkRange::change-value signal is responsible for clamping the
   * value to the desired number of decimal digits; the default GTK+
   * handler clamps the value based on Gtk::Range::property_round_digits().
   * 
   * @newin{2,6}
   * 
   * @param scroll The type of scroll action that was performed.
   * @param new_value The new value resulting from the scroll action.
   * @return <tt>true</tt> to prevent other handlers from being invoked for
   * the signal, <tt>false</tt> to propagate the signal further.
   */

  Glib::SignalProxy< bool,ScrollType,double > signal_change_value();


  /** The GtkAdjustment that contains the current value of this range object.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Adjustment* > property_adjustment() ;

/** The GtkAdjustment that contains the current value of this range object.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Adjustment* > property_adjustment() const;

  /** Invert direction slider moves to increase range value.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_inverted() ;

/** Invert direction slider moves to increase range value.
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_inverted() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** The sensitivity policy for the stepper that points to the adjustment's lower side.
   * @deprecated There is no replacement.
   *
   * Default value: Gtk::SENSITIVITY_AUTO
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SensitivityType > property_lower_stepper_sensitivity() ;

/** The sensitivity policy for the stepper that points to the adjustment's lower side.
   * @deprecated There is no replacement.
   *
   * Default value: Gtk::SENSITIVITY_AUTO
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SensitivityType > property_lower_stepper_sensitivity() const;

#endif // GTKMM_DISABLE_DEPRECATED

  
#ifndef GTKMM_DISABLE_DEPRECATED

/** The sensitivity policy for the stepper that points to the adjustment's upper side.
   * @deprecated There is no replacement.
   *
   * Default value: Gtk::SENSITIVITY_AUTO
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SensitivityType > property_upper_stepper_sensitivity() ;

/** The sensitivity policy for the stepper that points to the adjustment's upper side.
   * @deprecated There is no replacement.
   *
   * Default value: Gtk::SENSITIVITY_AUTO
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SensitivityType > property_upper_stepper_sensitivity() const;

#endif // GTKMM_DISABLE_DEPRECATED

  /** The show-fill-level property controls whether fill level indicator
   * graphics are displayed on the trough. See
   * Gtk::Range::set_show_fill_level().
   * 
   * @newin{2,12}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_fill_level() ;

/** The show-fill-level property controls whether fill level indicator
   * graphics are displayed on the trough. See
   * Gtk::Range::set_show_fill_level().
   * 
   * @newin{2,12}
   *
   * Default value: <tt>false</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_fill_level() const;

  /** The restrict-to-fill-level property controls whether slider
   * movement is restricted to an upper boundary set by the
   * fill level. See Gtk::Range::set_restrict_to_fill_level().
   * 
   * @newin{2,12}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_restrict_to_fill_level() ;

/** The restrict-to-fill-level property controls whether slider
   * movement is restricted to an upper boundary set by the
   * fill level. See Gtk::Range::set_restrict_to_fill_level().
   * 
   * @newin{2,12}
   *
   * Default value: <tt>true</tt>
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_restrict_to_fill_level() const;

  /** The fill level (e.g.\ prebuffering of a network stream).
   * See Gtk::Range::set_fill_level().
   * 
   * @newin{2,12}
   *
   * Default value: 1.79769e+308
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< double > property_fill_level() ;

/** The fill level (e.g.\ prebuffering of a network stream).
   * See Gtk::Range::set_fill_level().
   * 
   * @newin{2,12}
   *
   * Default value: 1.79769e+308
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< double > property_fill_level() const;

  /** The number of digits to round the value to when
   * it changes, or -1. See Gtk::Range::signal_change_value().
   * 
   * @newin{2,24}
   *
   * Default value: -1
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_round_digits() ;

/** The number of digits to round the value to when
   * it changes, or -1. See Gtk::Range::signal_change_value().
   * 
   * @newin{2,24}
   *
   * Default value: -1
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_round_digits() const;


protected:
  virtual void get_range_border_vfunc(Gtk::Border& border) const;


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Range
   */
  Gtk::Range* wrap(GtkRange* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_RANGE_H */

