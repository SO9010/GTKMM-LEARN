#include "button.h"
#include <gtkmm-4.0/gtkmm/box.h>
#include <gtkmm-4.0/gtkmm/image.h>
#include <gtkmm-4.0/gtkmm/label.h>
#include <iostream>

Button::Button() 
: m_toggle_button("Toggle Button"), 
m_check_button("Let output output"){
    // Normal button code
    auto pmap = Gtk::make_managed<Gtk::Image>("info.xpm");
    auto label = Gtk::make_managed<Gtk::Label>("Output");
    label->set_expand(true);

    // put these in a box
    auto hbox = Gtk::make_managed<Gtk::Box>(Gtk::Orientation::HORIZONTAL,5);
    hbox->append(*pmap);
    hbox->append(*label);

    // Put this box in a button
    m_button.set_child(*hbox);
    set_title("BUTTONS!");
    m_button.set_margin(10);
    m_button.signal_clicked().connect(sigc::bind(sigc::mem_fun(*this, &Button::on_button_clicked)));

    // Toggle button code
    m_toggle_button.set_margin(10);
    m_toggle_button.set_margin_top(0);
    m_toggle_button.set_expand(true);

    // Check button code
    m_check_button.set_margin(10);
    m_check_button.set_margin_top(0);

    Gtk::Box vbox;
    vbox.set_orientation(Gtk::Orientation::VERTICAL);
    vbox.append(m_button);
    vbox.append(m_toggle_button);
    vbox.append(m_check_button);

    set_child(vbox);
}

Button::~Button(){
}
void Button::on_button_clicked(){
    if(m_toggle_button.get_active()){
        output = "Toggled";
    }
    else{
        output = "Untoggled";
    }
    if(m_check_button.get_active()){
        std::cout << output << std::endl;
    }
}