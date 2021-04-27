// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CHECKBUTTON_H
#define _GTKMM_CHECKBUTTON_H


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

#include <gtkmm/togglebutton.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCheckButton = struct _GtkCheckButton;
using GtkCheckButtonClass = struct _GtkCheckButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class CheckButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** Create widgets with a discrete toggle button.
 *
 * A Gtk::CheckButton places a discrete Gtk::ToggleButton next to a widget,
 * (usually a Gtk::Label).  See Gtk::ToggleButton widgets for more
 * information about toggle/check buttons.  The important signal,
 * signal_toggled() is also inherited from Gtk::ToggleButton.
 *
 * The CheckButton widget looks like this:
 * @image html checkbutton1.png
 *
 * @ingroup Widgets
 */

class CheckButton : public ToggleButton
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CheckButton CppObjectType;
  typedef CheckButton_Class CppClassType;
  typedef GtkCheckButton BaseObjectType;
  typedef GtkCheckButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  CheckButton(CheckButton&& src) noexcept;
  CheckButton& operator=(CheckButton&& src) noexcept;

  // noncopyable
  CheckButton(const CheckButton&) = delete;
  CheckButton& operator=(const CheckButton&) = delete;

  ~CheckButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CheckButton_Class;
  static CppClassType checkbutton_class_;

protected:
  explicit CheckButton(const Glib::ConstructParams& construct_params);
  explicit CheckButton(GtkCheckButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkCheckButton*       gobj()       { return reinterpret_cast<GtkCheckButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkCheckButton* gobj() const { return reinterpret_cast<GtkCheckButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  /** Create an empty check button.
   * With an empty button, you can Gtk::Button::add() a widget such as a
   * Gtk::Image or Gtk::Box.
   *
   * If you just wish to add a Gtk::Label, you may want to use the
   * Gtk::CheckButton(const Glib::ustring& label) constructor directly
   * instead.
   */
  CheckButton();

  /** Create a check button with a label.
   * You won't be able to add a widget to this button since it already
   * contains a Gtk::Label
   */
  explicit CheckButton(const Glib::ustring& label, bool mnemonic = false);


protected:


  /** Emited on button redraw to update indicator.
   * Triggered when the button is redrawn (e.g.after being toggled)
   * Overload this signal if you want to implement your own check button
   * look. Otherwise, you most likely don't care about it.
   * The GdkRectangle specifies the area of the widget which will get
   * redrawn.
   */
    virtual void draw_indicator_vfunc(const ::Cairo::RefPtr< ::Cairo::Context>& cr);


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
   * @relates Gtk::CheckButton
   */
  Gtk::CheckButton* wrap(GtkCheckButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CHECKBUTTON_H */

