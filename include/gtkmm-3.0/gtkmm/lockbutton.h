// Generated by gmmproc 2.60.0 -- DO NOT MODIFY!
#ifndef _GTKMM_LOCKBUTTON_H
#define _GTKMM_LOCKBUTTON_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2014 The gtkmm Development Team
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

#include <giomm/permission.h>
#include <gtkmm/button.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkLockButton = struct _GtkLockButton;
using GtkLockButtonClass = struct _GtkLockButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class LockButton_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/** A widget to unlock or lock privileged operations.
 *
 * LockButton is a widget that can be used in control panels or
 * preference dialogs to allow users to obtain and revoke authorizations
 * needed to operate the controls. The required authorization is represented
 * by a Gio::Permission object. Concrete implementations of Gio::Permission may use
 * PolicyKit or some other authorization framework. To obtain a PolicyKit-based
 * Gio::Permission, use polkit_permission_new().
 *
 * If the user is not currently allowed to perform the action, but can obtain
 * the permission, the widget looks like this:
 *
 * @image html lockbutton1.png
 *
 * and the user can click the button to request the permission. Depending
 * on the platform, this may pop up an authentication dialog or ask the user
 * to authenticate in some other way. Once the user has obtained the permission,
 * the widget changes to this:
 *
 * @image html lockbutton2.png
 *
 * and the permission can be dropped again by clicking the button. If the user
 * is not able to obtain the permission at all, the widget looks like this:
 *
 * @image html lockbutton3.png
 *
 * If the user has the permission and cannot drop it, the button is hidden.
 *
 * The text (and tooltips) that are shown in the various cases can be adjusted
 * with the LockButton::property_text_lock(), LockButton::property_text_unlock(),
 * LockButton::property_tooltip_lock(), LockButton::property_tooltip_unlock() and
 * LockButton::property_tooltip_not_authorized() properties.
 *
 * @ingroup Widgets
 * @newin{3,14}
 */

class LockButton : public Button
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef LockButton CppObjectType;
  typedef LockButton_Class CppClassType;
  typedef GtkLockButton BaseObjectType;
  typedef GtkLockButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  LockButton(LockButton&& src) noexcept;
  LockButton& operator=(LockButton&& src) noexcept;

  // noncopyable
  LockButton(const LockButton&) = delete;
  LockButton& operator=(const LockButton&) = delete;

  ~LockButton() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class LockButton_Class;
  static CppClassType lockbutton_class_;

protected:
  explicit LockButton(const Glib::ConstructParams& construct_params);
  explicit LockButton(GtkLockButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  /// Provides access to the underlying C GObject.
  GtkLockButton*       gobj()       { return reinterpret_cast<GtkLockButton*>(gobject_); }

  /// Provides access to the underlying C GObject.
  const GtkLockButton* gobj() const { return reinterpret_cast<GtkLockButton*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  /** Create a new lock button.
   */
  LockButton();

    explicit LockButton(const Glib::RefPtr<const Gio::Permission>& permission);


  /** Obtains the Gio::Permission object that controls @a button.
   * 
   * @newin{3,2}
   * 
   * @return The Gio::Permission of @a button.
   */
  Glib::RefPtr<Gio::Permission> get_permission();
  
  /** Obtains the Gio::Permission object that controls @a button.
   * 
   * @newin{3,2}
   * 
   * @return The Gio::Permission of @a button.
   */
  Glib::RefPtr<const Gio::Permission> get_permission() const;
  
  /** Sets the Gio::Permission object that controls @a button.
   * 
   * @newin{3,2}
   * 
   * @param permission A Gio::Permission object, or <tt>nullptr</tt>.
   */
  void set_permission(const Glib::RefPtr<const Gio::Permission>& permission);
  /** Unset permission.
   * See set_permission().
   */
  void unset_permission();


  /** The GPermission object controlling this button.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::Permission> > property_permission() ;

/** The GPermission object controlling this button.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Permission> > property_permission() const;

  /** The text to display when prompting the user to lock.
   *
   * Default value: "Lock"
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text_lock() ;

/** The text to display when prompting the user to lock.
   *
   * Default value: "Lock"
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text_lock() const;

  /** The text to display when prompting the user to unlock.
   *
   * Default value: "Unlock"
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text_unlock() ;

/** The text to display when prompting the user to unlock.
   *
   * Default value: "Unlock"
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text_unlock() const;

  /** The tooltip to display when prompting the user to lock.
   *
   * Default value: "Dialog is unlocked.\nClick to prevent further changes"
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_tooltip_lock() ;

/** The tooltip to display when prompting the user to lock.
   *
   * Default value: "Dialog is unlocked.\nClick to prevent further changes"
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_tooltip_lock() const;

  /** The tooltip to display when prompting the user to unlock.
   *
   * Default value: "Dialog is locked.\nClick to make changes"
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_tooltip_unlock() ;

/** The tooltip to display when prompting the user to unlock.
   *
   * Default value: "Dialog is locked.\nClick to make changes"
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_tooltip_unlock() const;

  /** The tooltip to display when prompting the user cannot obtain authorization.
   *
   * Default value: "System policy prevents changes.\nContact your system administrator"
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_tooltip_not_authorized() ;

/** The tooltip to display when prompting the user cannot obtain authorization.
   *
   * Default value: "System policy prevents changes.\nContact your system administrator"
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_tooltip_not_authorized() const;


  // Gtk::LockButton has no signals as of 3.2.


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
   * @relates Gtk::LockButton
   */
  Gtk::LockButton* wrap(GtkLockButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_LOCKBUTTON_H */

