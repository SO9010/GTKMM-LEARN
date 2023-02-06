#pragma once

#include <gtkmm-4.0/gtkmm/button.h>
#include <gtkmm-4.0/gtkmm/window.h>

// This class is inheriting the public traits of the object Gtk::Window
class HelloWorld : public Gtk::Window {

public: 
    // initilisers
    HelloWorld();   // We have the contructor to do all the initllistation for the window icleuding the set up signals
    ~HelloWorld() override; // Im now incontrol of the destuction handeling

protected:
    // Signal Handlers:
    void on_button_clicked();

    // Member widgets:
    Gtk::Button m_button;
};



