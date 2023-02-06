#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld()
: m_button("Hello World") { // When the class is called it defines the variable m_button
    
    // Set window default size
    set_default_size(400, 200);

    // Set margins 
    m_button.set_margin(10);

    // When the button recieves the "clicked" signal it will call the
    // on_button_clicked() method defined below.
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

    // Pack the button into the window (a container)
    set_child(m_button);
}

HelloWorld::~HelloWorld() {
}

void HelloWorld::on_button_clicked() {
    std::cout << "hello World" << std::endl;
}