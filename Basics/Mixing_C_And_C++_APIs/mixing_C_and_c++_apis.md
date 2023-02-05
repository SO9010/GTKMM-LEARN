# Mixing C and C++ APIs 
This will allow you to add more functionallity that might not have been ported yet to GTKMM.

GTKMM allows you to access the underlying C object, making it easy to make a c++ wrapper object from a C object.

To get a C function that requires a C GObject instance use the c++ instance gobj() function to get a pointer to the underlying C instance.
For example you use:

    Gtk::Button button("example");
    gtk_button_do_something_that_gtkmm_cannot(button.gobj());

To obtain a GTKMM instance from a C GObject instance, use one of the many overloaded Glib::wrap() functions. The C instanes refrecne count is not incremented unless you set take_copy argument to true. For example:

    GtkButton* cbutton = get_a_button();
    Gtk::Button* button = Glib::wrap(cbutton);
    button->set_label("Now I speak C++ too!");

The C++ wrapper gets deleted if:
    - ITs a widget or other class that inherits from Gtk::Object and
    - The C instance has a floating refrence when the wrapper is created,and
    - Gtk::manage() has not been called on it or
    - Gtk::manage was called on it, but never added or was later removed