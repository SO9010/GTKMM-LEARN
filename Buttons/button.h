#pragma once

#include <gtkmm-4.0/gtkmm/window.h>
#include <gtkmm-4.0/gtkmm/button.h>
#include <gtkmm-4.0/gtkmm/togglebutton.h>
#include <gtkmm-4.0/gtkmm/checkbutton.h>
#include <glibmm/ustring.h>

class Button : public Gtk::Window {
public:
    Button();
    virtual ~Button();
    // Note vitrual overides the funciton

protected:
    // Signal Handlers:
    void on_button_clicked();

    Glib::ustring output = "Untoggled";
    // child widgets:
    Gtk::Button m_button;
    Gtk::ToggleButton m_toggle_button;
    Gtk::CheckButton m_check_button;
    Gtk::Button m_radio_button;
};